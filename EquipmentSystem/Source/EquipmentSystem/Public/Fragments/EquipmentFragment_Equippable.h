// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment.h"
#include "EquipmentFragment_Equippable.generated.h"

class UEquipmentQuickBarComponent;

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFragment_Equippable : public UEquipmentFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer ActivationGroups;
	FRAGMENT_DECLARE_TAG_PROPERTY_GETTER(ActivationGroups)
	UPROPERTY(EditAnywhere, Category = "PropertyTags", meta = (DisplayName = "Activation Groups", Categories = "Equipment.Property"))
	FGameplayTag ActivationGroupsTag;

	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) override;

	virtual bool CanActivate(UEquipmentQuickBarComponent* QuickBarComponent);
	virtual bool CanDeactivate(UEquipmentQuickBarComponent* QuickBarComponent);
};
