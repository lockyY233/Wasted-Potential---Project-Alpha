// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitSpawner.h"
#include "AttackUnit.h"
#include "UnitSpawnerController.h"
#include "MainGameInstance.h"

// Sets default values
AUnitSpawner::AUnitSpawner() :
	bShouldKeepMoneyTimer(true),
	UnitSpawnTime(2.f),
	TimeLeftToSpawn(2.f),
	isEnemy(false),
	MoneyTimerPeriodLength(1.f),
	MoneyAmountPerPeriod(5.f)
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
	// bind timeline finished func to custom delegate
	SpawnerTimeline->SetTimelineFinishedFunc(OnSpawnerTimerFinished);

	if (isEnemy)
	{
		Spawner_Controller = Cast<AUnitSpawnerController>(GetController());
		if (Spawner_Controller)
		{
			Spawner_Controller->RunBehaviorTree(Spawner_BehaviorTree);
		}
	}

	if (bShouldKeepMoneyTimer)
	{
		StartMoneyTimer();
	}
}

FAttackUnitProperties AUnitSpawner::GetNextAU()
{
	// return the first index of the AU_QueList
	return AU_QueList[0];
}

void AUnitSpawner::UpdateTimeLeft(float TimeOutput)
{
	TimeLeftToSpawn = SpawnProgressBarCurve->GetFloatValue(SpawnerTimeline->GetPlaybackPosition());
}

void AUnitSpawner::StartMoneyTimer()
{
	GetWorldTimerManager().SetTimer(
		MoneyTimerHandle, 
		this, 
		&AUnitSpawner::MoneyPeriodFinished,
		MoneyTimerPeriodLength);
}

void AUnitSpawner::MoneyPeriodFinished()
{
	// add money to accounts
	auto GameInst = Cast<UMainGameInstance>(GetGameInstance());
	if (GameInst)
	{
		GameInst->AddMoney(Team, MoneyAmountPerPeriod);
	}
	// restart the moneytimer
	if (bShouldKeepMoneyTimer)
	{
		StartMoneyTimer();
	}
}

void AUnitSpawner::RestartMoneyTimer()
{
	bShouldKeepMoneyTimer = true;
	if (bShouldKeepMoneyTimer)
	{
		StartMoneyTimer();
	}
}

void AUnitSpawner::StopMoneyTimer()
{
	bShouldKeepMoneyTimer = false;
}

// Called every frame
void AUnitSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

