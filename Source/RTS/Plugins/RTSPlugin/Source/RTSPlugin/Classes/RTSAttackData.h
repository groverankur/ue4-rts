#pragma once

#include "RTSPluginPrivatePCH.h"

#include "RTSAttackData.generated.h"


USTRUCT(BlueprintType)
struct FRTSAttackData
{
	GENERATED_USTRUCT_BODY()

public:
	/** Time before this attack can be used again, in seconds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS")
	float Cooldown;

	/** Damage dealt by this attack. Negative values could mean healing, depending on the game. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS")
	float Damage;

	/** Type of the damage caused by this attack. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS")
	TSubclassOf<class UDamageType> DamageType;

	/** Range of this attack, in cm. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS")
	float Range;
};