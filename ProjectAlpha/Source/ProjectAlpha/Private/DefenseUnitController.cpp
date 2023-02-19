// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseUnitController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "DefenseUnit.h"
#include "AttackUnit.h"

ADefenseUnitController::ADefenseUnitController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);
}

void ADefenseUnitController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn == nullptr) return;

	// check and cast if possess pawn is attackunit
	AAttackUnit* AttackUnit = Cast<AAttackUnit>(InPawn);
	if (AttackUnit)
	{
		// initialize Blackboard
		BlackboardComponent->InitializeBlackboard(*(AttackUnit->GetBehaviorTree()->BlackboardAsset));
	}
}
