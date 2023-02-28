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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AAttackUnit> AU_Class;

	/** The Time it takes Attack Unit to Spawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeToSpawn;

	/** Money cost to spawn in */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MoneyToCost;

	/** Damage Output for the AU */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BaseDamage;

	/** Health of AU */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxHealthPoint;

	/** Money give to enemy when killed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MoneyWhenKilled;

	/** XP given to enemy when killed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
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

	// Money Timer: 

	/** Called in BeginPlay in C++, use RestartMoneyTimer() in BP */
	void StartMoneyTimer();

	UFUNCTION()
		void MoneyPeriodFinished();

	/** Restart the money timer */
	UFUNCTION(BlueprintCallable)
		void RestartMoneyTimer();

	UFUNCTION(BlueprintCallable)
		void StopMoneyTimer();

	// XP Timer:

	/** Called in BeginPlay in C++, use RestartXPTimer() in BP */
	void StartXPTimer();

	UFUNCTION()
		void XPPeriodFinished();

	/** Restart the XP timer */
	UFUNCTION(BlueprintCallable)
		void RestartXPTimer();

	UFUNCTION(BlueprintCallable)
		void StopXPTimer();



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

	// Economy System: 
	//Money: 
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

	//XP: 
	FTimerHandle XPTimerHandle;

	/** The switch to turn on and off the money timer */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		bool bShouldKeepXPTimer;

	/** Money Period Length player need to wait to gain another patch of money  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		float XPTimerPeriodLength;

	/** The money palyers gain per period of time (Set by MoneyTimerPeriodLength) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economy System", meta = (AllowPrivateAccess = "true"))
		int XPAmountPerPeriod;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// BehaviorTree getter
	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return Spawner_BehaviorTree; }


};
