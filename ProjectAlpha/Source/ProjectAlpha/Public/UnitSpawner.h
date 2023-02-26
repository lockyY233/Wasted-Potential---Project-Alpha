// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "Engine/DataTable.h"
#include "Team.h"
#include "UnitSpawner.generated.h"


USTRUCT(BlueprintType)
struct FAttackUnitProperties : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()


	/** Attack Unit Class reference */
	UPROPERTY(BlueprintReadWrite)
		TSubclassOf<class AAttackUnit> AU_Class;

	/** The Time it takes Attack Unit to Spawn */
	UPROPERTY(BlueprintReadWrite)
		float TimeToSpawn;

	/** Damage Output for the AU */
	UPROPERTY(BlueprintReadWrite)
		float BaseDamage;

	/** Money cost to spawn in */
	UPROPERTY(BlueprintReadWrite)
		int MoneyToCost;

	/** Money give to enemy when killed */
	UPROPERTY(BlueprintReadWrite)
		int MoneyWhenKilled;

	/** XP given to enemy when killed */
	UPROPERTY(BlueprintReadWrite)
		int XPWhenKilled;

};

UCLASS()
class PROJECTALPHA_API AUnitSpawner : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnitSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Try to get the first AttackUnit Struct in the array */
	UFUNCTION(BlueprintCallable, BlueprintPure)
		FAttackUnitProperties GetNextAU();

	/** Update the TimeLeftToSpawn property */
	UFUNCTION()
		void UpdateTimeLeft(float TimeOutput);

	/** Called in BeginPlay in C++, use RestartMoneyTimer() in BP */
	void StartMoneyTimer();

	UFUNCTION()
		void MoneyPeriodFinished();

	/** Restart the money timer */
	UFUNCTION(BlueprintCallable)
		void RestartMoneyTimer();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void StopMoneyTimer();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Data", meta = (AllowPrivateAccess = "true"))
		ETeam Team;

	/** the list holding all AU on que */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawner Data", meta = (AllowPrivateAccess = "true"))
		TArray<FAttackUnitProperties> AU_QueList;

	/** the time it takes to spawn a unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Data", meta = (AllowPrivateAccess = "true"))
		float UnitSpawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnerTimeline", meta = (AllowPrivateAccess = "true"))
		UTimelineComponent* SpawnerTimeline;

	/** The curve to show on the progressbar */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnerTimeline", meta = (AllowPrivateAccess = "true"))
		UCurveFloat* SpawnProgressBarCurve;

	/** Timeline track to update timeelefttoSPawn */
	FOnTimelineFloat UpdateTimeLeftTrack;

	/** Time Left to spawn AU, binds to progress bar in UI */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SpawnerTimeline", meta = (AllowPrivateAccess = "true"))
		float TimeLeftToSpawn;

	/** The time needed to spawn AU */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnerTimeline", meta = (AllowPrivateAccess = "true"))
		float TimeNeedToSpawn;

	/** Delagate to call in BP to implement function when timeline finished */
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FOnTimelineEvent OnSpawnerTimerFinished;

	UPROPERTY(VisibleAnywhere, BLueprintReadOnly, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class AUnitSpawnerController* Spawner_Controller;

	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTree* Spawner_BehaviorTree;

	/** boolean to decide should Unitspawner using aicontroller or not */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		bool isEnemy;

	/** TimerHandle handling the timer providing player a steady income */
	FTimerHandle MoneyTimerHandle;

	/** The switch to turn on and off the money timer */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		bool bShouldKeepMoneyTimer;

	/** Money Period Length player need to wait to gain another patch of money  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		float MoneyTimerPeriodLength;

	/** The money palyers gain per period of time (Set by MoneyTimerPeriodLength) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		int MoneyAmountPerPeriod;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// BehaviorTree getter
	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return Spawner_BehaviorTree; }


};
