// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AttackUnitController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHA_API AAttackUnitController : public AAIController
{
	GENERATED_BODY()

public:
	// constructor
	AAttackUnitController();

	// override OnPossess
	virtual void OnPossess(APawn* InPawn) override;
	
private:

	UPROPERTY(BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTreeComponent* BehaviorTreeComponent;

	/** The FINAL Target (or player base that spawns units) AI is trying to move to and attack */
	UPROPERTY(VisibleAnywhere, BLueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		AActor* AttackFinalTarget;

public:

	// getter for blackboard
	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
};
