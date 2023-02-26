// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Team.h"
#include "Engine/GameInstance.h"
#include "MainGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHA_API UMainGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// public functions

	UFUNCTION(BlueprintCallable)
	inline void AddMoney(ETeam Team, int DeltaMoney);

	UFUNCTION(BlueprintCallable)
	inline void AddXP(ETeam Team, int DeltaXP);

	UFUNCTION(BlueprintCallable, Blueprintpure)
	inline int GetMoney(ETeam Team);

	UFUNCTION(BlueprintCallable, Blueprintpure)
	inline int GetXP(ETeam Team);

public:
	// public variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy Variables")
		int PlayerMoney;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy Variables")
		int EnemyMoney;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy Variables")
		int PlayerXP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy Variables")
		int EnemyXP;



	
};
