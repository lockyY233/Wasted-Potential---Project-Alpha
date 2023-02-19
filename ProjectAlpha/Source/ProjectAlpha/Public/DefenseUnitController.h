// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DefenseUnitController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHA_API ADefenseUnitController : public AAIController
{
	GENERATED_BODY()

public:
	// constructor
	ADefenseUnitController();

	// override OnPossess
	virtual void OnPossess(APawn* InPawn) override;

private:

	UPROPERTY(BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTreeComponent* BehaviorTreeComponent;

	/** CUrrent Attack Target */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class AActor* AttackTarget;

public:

	// getter for blackboard
	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
};
