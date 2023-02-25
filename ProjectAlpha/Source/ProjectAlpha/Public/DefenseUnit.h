// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Team.h"
#include "DefenseUnit.generated.h"

UCLASS()
class PROJECTALPHA_API ADefenseUnit : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADefenseUnit();	
	
	// call overlaps event in BP
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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Calculate and get the next closest target from targetlist 
	*  return nullptr if there is no more target in the list
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure)
		AActor* GetNextTarget(TArray<AActor*> ActorList);


private:

	/** Unit Team enum so they dont fight each other */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		ETeam EUnitTeam;

	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		float BaseDamage;

	UPROPERTY(VisibleAnywhere, BLueprintReadOnly, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class ADefenseUnitController* DU_Controller;

	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTree* DU_BehaviorTree;

	/** Target List keep track of all vialbe targets and save it to memory */
	UPROPERTY(VisibleAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		TArray<AActor*> TargetList;

	UPROPERTY(VisibleAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		AActor* CurrentTarget;


	/** ============== AI KEYS ==============*/
	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		bool bIsTargetInRange;
	/** ===================================== */


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
