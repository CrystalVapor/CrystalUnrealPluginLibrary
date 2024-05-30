// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EquipmentPresetData.generated.h"

class UEquipmentManagerComponent;
class UEquipmentFeature;
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentPresetData : public UDataAsset
{
	GENERATED_BODY()
public:
	int32 CreateAsNewInstance(UEquipmentManagerComponent* TargetManager, bool ReplicatedEquipped = false);
	void ApplyToInstance(int32 InstanceId, UEquipmentManagerComponent* TargetManager);

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UEquipmentFeature>> Features;
};
