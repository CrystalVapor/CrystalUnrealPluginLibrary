// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueInterface.h"
#include "NativeGameplayTags.h"
#include "UObject/Interface.h"
#include "EquipmentGameplayCueInterface.generated.h"

UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayCue_Equipment);

// This class does not need to be modified.
UINTERFACE()
class UEquipmentGameplayCueInterface : public UGameplayCueInterface
{
	GENERATED_BODY()
};

/**
 * An interface support to transfer gameplay cue from pawn to visual actor
 * should be inherited by pawn class
 */
class EQUIPMENTSYSTEM_API IEquipmentGameplayCueInterface : public IGameplayCueInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters) override;
};
