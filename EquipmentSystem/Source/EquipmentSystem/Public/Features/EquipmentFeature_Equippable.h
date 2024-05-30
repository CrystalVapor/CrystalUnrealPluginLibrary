// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Basics/EquipmentFeature.h"
#include "EquipmentFeature_Equippable.generated.h"

class UEquipmentQuickBarComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class EQUIPMENTSYSTEM_API UEquipmentFeature_Equippable : public UEquipmentFeature
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UEquipmentFeature_Equippable();
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer ActivationGroups;

	bool CanActivate(int32 InstanceId, UEquipmentQuickBarComponent* QuickBarComponent){return true;};
	bool CanDeactivate(int32 InstanceId, UEquipmentQuickBarComponent* QuickBarComponent){return true;};
};
