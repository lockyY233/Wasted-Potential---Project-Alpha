// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackUnit.h"
#include "Kismet/GameplayStatics.h"
#include "AttackUnitController.h"
#include "GameFramework/DamageType.h"

// Sets default values
AAttackUnit::AAttackUnit() :
	HealthPoint(100),
	MaxHealthPoint(100),
	BaseMeleeDamage(25)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAttackUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

float AAttackUnit::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	/** Damage affections here: */
	HealthPoint -= DamageAmount;
	if (HealthPoint < 0)
	{
		// Unit Dies
		HealthPoint = 0;
		OnUnitDieDelegate.Broadcast(DamageCauser, this);
	}
	/** ==========VISUAL AUDIO CODES HERE========== */

	// return DamageAmount
	return DamageAmount;
}

void AAttackUnit::DealDamage(AActor* TargetActor)
{
	// return if actor try to deal damage to itself
	if (TargetActor == this) return;
	// return if no AIController detected
	if (AttackController == nullptr) return;

	UGameplayStatics::ApplyDamage(
		TargetActor,
		BaseMeleeDamage,
		AttackController,
		this,
		UDamageType::StaticClass()
	);
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

