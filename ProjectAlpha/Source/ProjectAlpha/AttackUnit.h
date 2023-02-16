// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AttackUnit.generated.h"


/** ==========DELEGATES========== */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnitDieDelegate, AActor*, Instigator, AActor*, Victim);

/** ============================= */
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

	// Take Damage
	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator,
		AActor* DamageCauser) override;

	// Deal Damage
	UFUNCTION()
	void DealDamage(AActor* TargetActor);

private:

	/** AI Controller that controls the unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class AAttackUnitController* AttackController;

	/** ==========HEALTH AND DAMAGE SYSTEM========== */
	/** The Health Point of Attack Unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		int32 HealthPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		int32 MaxHealthPoint;

	/** DamagePoint of a Attack Unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		float BaseMeleeDamage;

	UPROPERTY(BlueprintAssignable, Category = "Unit Delegates", meta = (AllowPrivateAccess = "true"))
		FOnUnitDieDelegate OnUnitDieDelegate;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Health Point getter
	FORCEINLINE int32 GetHealthPoint() const { return HealthPoint; }

};
