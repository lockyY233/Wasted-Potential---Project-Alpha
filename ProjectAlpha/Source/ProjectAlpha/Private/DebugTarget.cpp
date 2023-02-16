// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugTarget.h"
#include "EditorViewportClient.h"
#include "UnrealClient.h"
#include "Editor.h"

// Sets default values
ADebugTarget::ADebugTarget()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


// Called when the game starts or when spawned
void ADebugTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADebugTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADebugTarget::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

