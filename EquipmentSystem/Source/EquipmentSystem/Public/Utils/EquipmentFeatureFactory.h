// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EquipmentFeatureFactory.generated.h"

class UEquipmentFeatureManager;
class UEquipmentFeature;
/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeatureFactory : public UObject
{
	GENERATED_BODY()
public:
	static UEquipmentFeature* CreateFeature(UObject* Owner, const FName& FeatureName);
};
