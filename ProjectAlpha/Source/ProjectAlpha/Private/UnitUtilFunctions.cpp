// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitUtilFunctions.h"

bool UUnitUtilFunctions::BFL_IsActorOnTeam(AActor* ActorReference, ETeam UnitTeam)
{
	if (UnitTeam == ETeam::ET_Player)
	{
		return ActorReference->ActorHasTag(FName("Player"));
	}
	else if (UnitTeam == ETeam::ET_Enemy)
	{
		return ActorReference->ActorHasTag(FName("Enemy"));
	}
	return false;
}