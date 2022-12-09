// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Spawn_Unit.h"

// Sets default values
APlayer_Spawn_Unit::APlayer_Spawn_Unit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Spawn_Unit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Spawn_Unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

