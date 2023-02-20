// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackUnit.h"
#include "Kismet/GameplayStatics.h"
#include "AttackUnitController.h"
#include "GameFramework/DamageType.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "AttackUnitController.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
AAttackUnit::AAttackUnit() :
	EUnitTeam(ETeam::ET_Player),
	bIsTargetInRange(false),
	bIsAttacking(false),
	// combat properties
	HealthPoint(100),
	MaxHealthPoint(100)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//AttackSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AttackSphere"));
	//AttackSphere->SetupAttachment(GetRootComponent());

}

void AAttackUnit::UnitDamaged_Implementation(
	ETeam AttackerTeam, 
	AController* AttackContrroller,
	AActor* VictimTarget, 
	float DamageAmount)
{
	// Called for attacker to damage this unit
	if (VictimTarget)
	{
		if (AttackerTeam != this->EUnitTeam) // if they are not on the same team
		{
			UGameplayStatics::ApplyDamage(
				// attacker apply damamge to this object. (it is the same thing as this getting attacked)
				VictimTarget,
				DamageAmount,
				AttackContrroller,
				this,
				UDamageType::StaticClass()
			);
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Current Health: %d"), HealthPoint));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Can't attack because they are on the same team"));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("OtherActor Invalid")));
	}
}

// Called when the game starts or when spawned
void AAttackUnit::BeginPlay()
{
	Super::BeginPlay();

	// Tip: Don't put overlap events in constructor, it will cause a lot of crashes
	//AttackSphere->OnComponentBeginOverlap.AddDynamic(this, &AAttackUnit::OnAttackSphereBeginOverlap);
	//AttackSphere->OnComponentEndOverlap.AddDynamic(this, &AAttackUnit::OnAttackSphereEndOverlap);
	// moved overlaped event calls into BP 
	
	// Get the AI controller
	AU_Controller = Cast<AAttackUnitController>(GetController());
	if (AU_Controller)
	{
		AU_Controller->GetBlackboardComponent()->SetValueAsBool(FName("IsTargetInRange"), false);
		AU_Controller->RunBehaviorTree(AU_BehaviorTree);
	}
}

float AAttackUnit::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	/** Damage affections here: */
	HealthPoint -= DamageAmount;
	if (HealthPoint <= 0)
	{
		// Unit Dies
		HealthPoint = 0;
		OnUnitDieDelegate.Broadcast(DamageCauser, this);
	}
	/** ==========VISUAL AUDIO CODES HERE========== */
	/** =========================================== */
	// return DamageAmount
	return DamageAmount;
}


void AAttackUnit::OnAttackSphereBeginOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	// When Target is in Range
	if (OtherActor)
	{
		// check if target has interface inherited
		auto TargetInteractable = Cast<IUnitDamagedInterface>(OtherActor);
		if (TargetInteractable)
		{
			// Reminder: bIsTargetInRange is used by Behavior Tree
			bIsTargetInRange = true;
			CurrentTarget = OtherActor;
			AU_Controller->GetBlackboardComponent()->SetValueAsBool(FName("IsTargetInRange"), bIsTargetInRange);
			AU_Controller->GetBlackboardComponent()->SetValueAsObject(FName("Target"), CurrentTarget);
		}
	}
}

void AAttackUnit::OnAttackSphereEndOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// When Target is Killed or out of range
	if (OtherActor)
	{
		bIsTargetInRange = false;
		AU_Controller->GetBlackboardComponent()->SetValueAsBool(FName("IsTargetInRange"), bIsTargetInRange);
		AU_Controller->GetBlackboardComponent()->SetValueAsObject(FName("Target"), GetAttackFinalTarget());
	}
}


// Called every frame
void AAttackUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAttackUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

