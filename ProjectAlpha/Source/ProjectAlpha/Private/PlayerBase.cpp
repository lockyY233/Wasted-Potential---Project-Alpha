// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerBase::APlayerBase() :
	HealthPoint(100),
	MaxHealthPoint(100),
	EUnitTeam(ETeam::ET_Player)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerBase::UnitDamaged_Implementation(ETeam UnitTeam, AActor* VictimTarget, float DamageAmount)
{
	if (VictimTarget)
	{
		HealthPoint -= DamageAmount;
		if (HealthPoint <= 0)
		{
			HealthPoint = 0;
			// Player Base Die, Game Over
			OnPlayerBaseDiDelegate.Broadcast(this);
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Game Over"));
		}
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Base Health: %d"), HealthPoint));
	}
}

