// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnitDamagedInterface.h"
#include "Team.h"
#include "PlayerBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerBaseDie, AActor*, LosingActor);

UCLASS()
class PROJECTALPHA_API APlayerBase : public AActor, public IUnitDamagedInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Interface for taking damage
	virtual void UnitDamaged_Implementation(ETeam UnitTeam, AActor* VictimTarget, float DamageAmount) override;


private:

	/** The Health Point of Attack Unit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		int32 HealthPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		int32 MaxHealthPoint;

	/** Delegate to call game over (one of the playerbase dies) */
	UPROPERTY(BlueprintAssignable, Category = "Unit Delegates", meta = (AllowPrivateAccess = "true"))
		FOnPlayerBaseDie OnPlayerBaseDiDelegate;

	/** Unit Team enum so they dont fight each other */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit Properties", meta = (AllowPrivateAccess = "true"))
		ETeam EUnitTeam;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
