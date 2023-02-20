// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UnitDamagedInterface.h"
#include "PaperZDCharacter.h"
#include "Team.h"
#include "AttackUnit.generated.h"


/** ==========DELEGATES========== */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnitDieDelegate, AActor*, Instigator, AActor*, Victim);

/** ============================= */
UCLASS()
class PROJECTALPHA_API AAttackUnit : public APaperZDCharacter, public IUnitDamagedInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAttackUnit();

	// Interface for taking damage
	virtual void UnitDamaged_Implementation(
		ETeam AttackerTeam,
		AController* AttackContrroller,
		AActor* VictimTarget, 
		float DamageAmount) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Take Damage
	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator,
		AActor* DamageCauser) override;


	// function triggered when AttackSphere detect an overlap
	UFUNCTION(BlueprintCallable)
	void OnAttackSphereBeginOverlap(
		UPrimitiveComponent* OverlapComponent,
		AActor* OtherActor,
		UPrimitiveComponent*
		OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	// function triggered when target leave AttackSphere detection
	UFUNCTION(BlueprintCallable)
	void OnAttackSphereEndOverlap(
			UPrimitiveComponent* OverlapComponent,
			AActor* OtherActor,
			UPrimitiveComponent*
			OtherComp,
			int32 OtherBodyIndex
		);

private:


	/** ==========Unit Components========== */
	// Sphere detecting target which set bIsTargetInRange to true
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
	//	class USphereComponent* AttackSphere;

	UPROPERTY(VisibleAnywhere, BLueprintReadOnly, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class AAttackUnitController* AU_Controller;

	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTree* AU_BehaviorTree;

	/** Unit Team enum so they dont fight each other */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		ETeam EUnitTeam;
	/** =================================== */


	/** ==========AI KEYS========== */
	// true causing AI stop moving and attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		bool bIsTargetInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		bool bIsAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		AActor* AttackFinalTarget;

	// The current target that AI is focusing on
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		AActor* CurrentTarget;
	/** =========================== */


	/** ==========HEALTH AND DAMAGE SYSTEM========== */
	/** The Health Point of Attack Unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		int32 HealthPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		int32 MaxHealthPoint;


	// Melee damage moved to BP

	UPROPERTY(BlueprintAssignable, Category = "Unit Delegates", meta = (AllowPrivateAccess = "true"))
		FOnUnitDieDelegate OnUnitDieDelegate;
	/** ============================================*/


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Health Point getter
	FORCEINLINE int32 GetHealthPoint() const { return HealthPoint; }

	// BehaviorTree getter
	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return AU_BehaviorTree; }

	// getter for AttackFinalTarget
	FORCEINLINE AActor* GetAttackFinalTarget() const { return AttackFinalTarget; }


};
