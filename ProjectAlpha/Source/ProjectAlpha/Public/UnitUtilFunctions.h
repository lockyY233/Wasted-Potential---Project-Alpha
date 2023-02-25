// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Team.h"
#include "UnitUtilFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHA_API UUnitUtilFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**** NOTE: cannot use public specifier because it will ask for class reference ****/
	/** Use Tag system to check if actors are on the same team */
	UFUNCTION(BlueprintCallable, Category = "BFL Unit Utilities", meta = (WorldContext = "WorldContextObject"))
		static bool BFL_IsActorOnTeam(AActor* ActorReference, ETeam UnitTeam);
	
};
