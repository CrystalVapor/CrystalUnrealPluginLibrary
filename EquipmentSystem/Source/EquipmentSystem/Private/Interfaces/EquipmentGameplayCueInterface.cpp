// Copyright CrystalVapor 2024, All rights reserved.


#include "Interfaces/EquipmentGameplayCueInterface.h"

#include "Basics/EquipmentManagerComponent.h"

UE_DEFINE_GAMEPLAY_TAG(GameplayCue_Equipment, "GameplayCue.Equipment");

// Add default functionality here for any IEquipmentGameplayCueInterface functions that are not pure virtual.
void IEquipmentGameplayCueInterface::HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag,
	EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	if(GameplayCueTag.MatchesTag(GameplayCue_Equipment))
	{
		APawn* Pawn = Cast<APawn>(Self);
		if(Pawn)
		{
			UEquipmentManagerComponent* EquipmentManagerComponent = UEquipmentManagerComponent::FindEquipmentManagerComponent(Pawn);
			EquipmentManagerComponent->HandleGameplayCue(EquipmentManagerComponent, GameplayCueTag, EventType, Parameters);
		}
	}
	IGameplayCueInterface::HandleGameplayCue(Self, GameplayCueTag, EventType, Parameters);
}

