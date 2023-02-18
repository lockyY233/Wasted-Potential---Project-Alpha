// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackUnitController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AttackUnit.h"

AAttackUnitController::AAttackUnitController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);
}

void AAttackUnitController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn == nullptr) return;

	// check and cast if possess pawn is attackunit
	AAttackUnit* AttackUnit = Cast<AAttackUnit>(InPawn);
	if (AttackUnit)
	{
		// initialize Blackboard
		BlackboardComponent->InitializeBlackboard(*(AttackUnit->GetBehaviorTree()->BlackboardAsset));

		// initialize target controller is going
		this->AttackFinalTarget = AttackUnit->GetAttackFinalTarget();

		// initialize Target to Player base (which pass in from AttackUnit, which passed in from UnitSpawner, which is a public variable)
		BlackboardComponent->SetValueAsObject(FName("Target"), AttackUnit->GetAttackFinalTarget());
	}

}
