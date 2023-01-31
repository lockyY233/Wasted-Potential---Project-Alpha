// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AttackUnit.generated.h"

UCLASS()
class PROJECTALPHA_API AAttackUnit : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAttackUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	/** The Health Point of Attack Unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
	int32 HealthPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Health Point getter
	FORCEINLINE int32 GetHealthPoint() const { return HealthPoint; }

};
