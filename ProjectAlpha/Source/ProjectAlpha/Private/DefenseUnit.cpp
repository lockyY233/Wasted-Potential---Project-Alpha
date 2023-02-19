// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseUnit.h"
#include "DefenseUnitController.h"
#include "UnitDamagedInterface.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
ADefenseUnit::ADefenseUnit() :
	EUnitTeam(ETeam::ET_Player),
	bIsTargetInRange(false)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADefenseUnit::OnAttackSphereBeginOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		// cast to interface to see if they can be damaged
		auto CanDamaged_Unit = Cast<IUnitDamagedInterface>(OtherActor);
		if (CanDamaged_Unit)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, TEXT("Cast Success"));
			CanDamaged_Unit->UnitDamaged_Implementation(EUnitTeam, OtherActor, BaseDamage);
		}
	}
}

void ADefenseUnit::OnAttackSphereEndOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

// Called when the game starts or when spawned
void ADefenseUnit::BeginPlay()
{
	Super::BeginPlay();

	// Get the AI controller
	DU_Controller = Cast<ADefenseUnitController>(GetController());
	if (DU_Controller)
	{
		DU_Controller->GetBlackboardComponent()->SetValueAsBool(FName("IsTargetInRange"), false);
		DU_Controller->RunBehaviorTree(DU_BehaviorTree);
	}
}

// Called every frame
void ADefenseUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADefenseUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

