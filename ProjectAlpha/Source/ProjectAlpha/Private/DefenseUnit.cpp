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
			DU_Controller->GetBlackboardComponent()->SetValueAsBool(FName("IsTargetInRange"), true);
			DU_Controller->GetBlackboardComponent()->SetValueAsObject(FName("Target"), OtherActor);
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

AActor* ADefenseUnit::GetNextTarget(TArray<AActor*> ActorList)
{
	int TargetLength = ActorList.Num();
	if (TargetLength > 1) // if there is target
	{
		/* calculate distance between each target on the list */

		// initiate the first target to index 0
		AActor* ClosestTarget = ActorList[0];
		double CurrentLegnth{(ClosestTarget->GetActorLocation() - this->GetActorLocation()).Length()};
		for (int i = 0; i < ActorList.Num(); i++)
		{
			// distance is the difference between 
			FVector ActorDistance = ActorList[i]->GetActorLocation() - this->GetActorLocation(); 
			if (ActorDistance.Length() < CurrentLegnth)
			{
				ClosestTarget = ActorList[i];
				CurrentLegnth = ActorDistance.Length();
			}
		}
		return ClosestTarget;
	}
	// return nullptr if there is no more targets on the list
	return nullptr;
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

