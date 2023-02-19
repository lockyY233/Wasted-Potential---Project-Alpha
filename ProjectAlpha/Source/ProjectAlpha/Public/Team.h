#pragma once

UENUM(BlueprintType)
enum class ETeam : uint8 {
	ET_Player UMETA(DisplayName = "Player"),
	ET_Enemy UMETA(DisplayName = "Enemy"),

	ET_MAX UMETA(DisplayName = "DefaultMAX")
};