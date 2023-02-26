// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitSpawnerController.h"
#include "UnitSpawner.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"

AUnitSpawnerController::AUnitSpawnerController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	check(BehaviorTreeComponent);
}

void AUnitSpawnerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn == nullptr) return;

	AUnitSpawner* UnitSpawner = Cast<AUnitSpawner>(InPawn);
	if (UnitSpawner)
	{
		BlackboardComponent->InitializeBlackboard(*(UnitSpawner->GetBehaviorTree()->BlackboardAsset));
	}
}
