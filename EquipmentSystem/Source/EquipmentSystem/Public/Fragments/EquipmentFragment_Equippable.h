// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment.h"
#include "EquipmentFragment_Equippable.generated.h"

FRAGMENT_DECLARE_PROPERTY_TAG(ActivationGroups);

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
	FRAGMENT_DECLARE_TAG_PROPERTY_GETTER(ActivationGroups);

	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) override;

	virtual bool CanActivate(int32 Id, UEquipmentQuickBarComponent* QuickBarComponent);
	virtual bool CanDeactivate(int32 Id, UEquipmentQuickBarComponent* QuickBarComponent);
};
