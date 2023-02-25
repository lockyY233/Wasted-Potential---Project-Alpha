// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UnitSpawnerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHA_API AUnitSpawnerController : public AAIController
{
	GENERATED_BODY()

public:
	// constructor
	AUnitSpawnerController();

	// override OnPossess
	virtual void OnPossess(APawn* InPawn) override;
	
private:

	UPROPERTY(BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Unit AI Behavior", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTreeComponent* BehaviorTreeComponent;


};
