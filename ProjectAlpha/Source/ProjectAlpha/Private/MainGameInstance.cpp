// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameInstance.h"

inline void UMainGameInstance::AddMoney(ETeam Team, int DeltaMoney)
{
	if (Team == ETeam::ET_Player)
	{
		PlayerMoney += DeltaMoney;
		if (PlayerMoney < 0)
		{
			// return the money back
			PlayerMoney -=DeltaMoney;
		}
	}
	else if (Team == ETeam::ET_Enemy)
	{
		EnemyMoney += DeltaMoney;
		if (EnemyMoney < 0)
		{
			// return the money back
			EnemyMoney -= DeltaMoney;
		}
	}
}

inline void UMainGameInstance::AddXP(ETeam Team, int DeltaXP)
{
	if (Team == ETeam::ET_Player)
	{
		PlayerXP += DeltaXP;
	}
	else if (Team == ETeam::ET_Enemy)
	{
		EnemyXP += DeltaXP;
	}
}

inline int UMainGameInstance::GetMoney(ETeam Team)
{
	if (Team == ETeam::ET_Player)
	{
		return PlayerMoney;
	}
	else if (Team == ETeam::ET_Enemy)
	{
		return EnemyMoney;
	}

	// Team input invalid
	return -1;
}

inline int UMainGameInstance::GetXP(ETeam Team)
{
	if (Team == ETeam::ET_Player)
	{
		return PlayerXP;
	}
	else if (Team == ETeam::ET_Enemy)
	{
		return EnemyXP;
	}

	// Team input invalid
	return -1;
}
