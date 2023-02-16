// Fill out your copyright notice in the Description page of Project Settings.

/**
* Pawn for debug use in editor
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DebugTarget.generated.h"

UCLASS()
class PROJECTALPHA_API ADebugTarget : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADebugTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
