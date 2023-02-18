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
	bIsTargetInRange(false),
	bIsAttacking(false),
	// combat properties
	HealthPoint(100),
	MaxHealthPoint(100)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AttackSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AttackSphere"));

}

void AAttackUnit::UnitDamaged_Implementation(AActor* VictimTarget, float DamageAmount)
{
	if (VictimTarget)
	{
		UGameplayStatics::ApplyDamage(
			VictimTarget,
			DamageAmount,
			AU_Controller,
			this,
			UDamageType::StaticClass()
		);
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Current Health: %d"), HealthPoint));
	}
}

// Called when the game starts or when spawned
void AAttackUnit::BeginPlay()
{
	Super::BeginPlay();

	// Tip: Don't put overlap events in constructor, it will cause a lot of crashes
	AttackSphere->OnComponentBeginOverlap.AddDynamic(this, &AAttackUnit::OnAttackSphereBeginOverlap);
	AttackSphere->OnComponentEndOverlap.AddDynamic(this, &AAttackUnit::OnAttackSphereEndOverlap);
	
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
	if (HealthPoint < 0)
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

void AAttackUnit::DealDamage(AActor* TargetActor, float DamageAmount)
{
	// return if actor try to deal damage to itself
	if (TargetActor == this) return;
	// return if no AIController detected
	if (AU_Controller == nullptr) return;

	UnitDamaged_Implementation(TargetActor, DamageAmount);
}

void AAttackUnit::OnAttackSphereBeginOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// When Target is in Range
	if (OtherActor)
	{
		// check if target has interface inherited
		IUnitDamagedInterface* TargetInteractable = Cast<IUnitDamagedInterface>(OtherActor);
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

