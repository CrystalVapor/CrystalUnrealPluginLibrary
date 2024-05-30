// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Basics/EquipmentFeature.h"
#include "Utils/EquipmentSystemTypes.h"
#include "Basics/EquipmentGameplayAbility.h"
#include "EquipmentFeature_Test.generated.h"

BEGIN_EQUIPMENT_PROPERTY_TAG_DECLARE(UEquipmentFeature_Test)
EQUIPMENT_DECLARE_PROPERTY_TAG(TestProperty)
END_EQUIPMENT_PROPERTY_TAG_DECLARE()

UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentFeature_Test : public UEquipmentFeature
{
	GENERATED_BODY()
public:
	UEquipmentFeature_Test();
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	float TestProperty = 0.0f;

	ADD_ABILITY_REQUIREMENT(UEquipmentFeature_Test, UEquipmentGameplayAbility);
	ADD_ATTRIBUTE_SET_REQUIREMENT(UEquipmentFeature_Test, UAttributeSet);
};
