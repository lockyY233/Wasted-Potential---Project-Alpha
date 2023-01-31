// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackUnit.h"

// Sets default values
AAttackUnit::AAttackUnit() :
	HealthPoint(100)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAttackUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAttackUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAttackUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

