// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitSpawner.h"
#include "AttackUnit.h"

// Sets default values
AUnitSpawner::AUnitSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnerTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SpawnerTimelineComp"));

}

// Called when the game starts or when spawned
void AUnitSpawner::BeginPlay()
{
	Super::BeginPlay();

	UpdateTimeLeftTrack.BindDynamic(this, &AUnitSpawner::UpdateTimeLeft);
	SpawnerTimeline->AddInterpFloat(SpawnProgressBarCurve, UpdateTimeLeftTrack);
	SpawnerTimeline->SetTimelineFinishedFunc(OnSpawnerTimerFinished);
}

FAttackUnitProperties AUnitSpawner::GetNextAU()
{
	// return the first index of the AU_QueList
	return AU_QueList[0];
}

void AUnitSpawner::UpdateTimeLeft(float TimeOutput)
{
	TimeLeftToSpawn = SpawnerTimeline->GetPlaybackPosition() * TimeNeedToSpawn;
}

// Called every frame
void AUnitSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

