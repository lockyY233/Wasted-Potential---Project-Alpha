// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCamaera.generated.h"

UCLASS()
class PROJECTALPHA_API APlayerCamaera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCamaera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Calculate the Speed of camera depends on mouse screen position */
	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetMouseSpeed(float DeadZone, float ScrollSpeed, float Bounds);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
