// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "UnitSpawner.generated.h"


USTRUCT(BlueprintType)
struct FAttackUnitProperties 
{
	GENERATED_USTRUCT_BODY()


	/** Attack Unit Class reference */
	UPROPERTY(BlueprintReadWrite)
		TSubclassOf<class AAttackUnit> AU_Class;

	/** The Time it takes Attack Unit to Spawn */
	UPROPERTY(BlueprintReadWrite)
		float TimeToSpawn;

};

UCLASS()
class PROJECTALPHA_API AUnitSpawner : public AActor
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

	


private:
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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;





};
