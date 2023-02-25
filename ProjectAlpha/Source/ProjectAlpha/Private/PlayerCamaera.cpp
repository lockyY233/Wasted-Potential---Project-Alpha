// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCamaera.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCamaera::APlayerCamaera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCamaera::BeginPlay()
{
	Super::BeginPlay();
	
}

float APlayerCamaera::GetMouseSpeed(float DeadZone, float ScrollSpeed, float Bounds)
{
	// Get the current viewport size
	FVector2D ViewportSize = FVector2D(1, 1);
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}
	// get the current player mouse position
	const APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	float MouseX{};
	float MouseY{};
	bool isMouseExist = PlayerController->GetMousePosition(MouseX, MouseY);

	// Normalize Mouse Position from [0, 1] to [-1, 1]
	const float NormalizedMouseX = (MouseX / ViewportSize.X - 0.5) * 2;

	// mouse position relative to deadzone
	if (NormalizedMouseX < DeadZone && NormalizedMouseX > -DeadZone)
	{
		// if mouse locate within deadzone
		return 0.f;
	}
	else if (DeadZone < NormalizedMouseX && NormalizedMouseX < Bounds)
	{
		// if On the right side on the deadzone
		return (NormalizedMouseX - DeadZone) * ScrollSpeed;
	}
	else if (-Bounds < NormalizedMouseX && NormalizedMouseX < -DeadZone)
	{
		// if mouse locate on the left sid eon the deadzone
		return (NormalizedMouseX + DeadZone) * ScrollSpeed;
	}

	// mouse no move
	return 0.f;

}

// Called every frame
void APlayerCamaera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCamaera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

