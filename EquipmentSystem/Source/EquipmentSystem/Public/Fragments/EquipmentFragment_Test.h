// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentFragment.h"
#include "EquipmentFragment_Test.generated.h"

class UDataAsset;
FRAGMENT_DECLARE_PROPERTY_TAG(TestValue);
FRAGMENT_DECLARE_PROPERTY_TAG(TestTags);
FRAGMENT_DECLARE_PROPERTY_TAG(TestCurve);

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFragment_Test : public UEquipmentFragment
{
	GENERATED_BODY()
protected:
	TSoftObjectPtr<UDataAsset> Asset;

	UPROPERTY(EditAnywhere)
	float TestValue = 10.0f;
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(TestValue);

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer TestTags;
	FRAGMENT_DECLARE_TAG_PROPERTY_GETTER(TestTags);

	UPROPERTY(EditAnywhere)
	FRuntimeFloatCurve TestCurve;
	FRAGMENT_DECLARE_CURVE_PROPERTY_GETTER(TestCurve);

	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) override;
	
	virtual void AsyncLoadAssets() override;
	virtual void CheckAssetsFullyLoaded(bool& bIsFullyLoaded) override;
};
