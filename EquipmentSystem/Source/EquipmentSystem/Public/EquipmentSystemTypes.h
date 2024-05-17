// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "NativeGameplayTags.h"
#include "EquipmentSystemTypes.generated.h"

#define EQUIPMENT_PROPERTY_TAG(Property)\
(EquipmentProperty::Equipment_Property_##Property)

#define START_EQUIPMENT_PROPERTY_TAG_DECLARE(ClassName)\
namespace EquipmentProperty{\

#define END_EQUIPMENT_PROPERTY_TAG_DECLARE()\
};

#define START_EQUIPMENT_PROPERTY_TAG_DEFINE(ClassName)\
namespace EquipmentProperty{\
FName Name_##ClassName = UEquipmentSystemGlobal::SetCurrentFeatureName(ClassName::GetFeatureName());

#define END_EQUIPMENT_PROPERTY_TAG_DEFINE()\
};

#define EQUIPMENT_DECLARE_PROPERTY_TAG(Property)\
UE_DECLARE_GAMEPLAY_TAG_EXTERN(Equipment_Property_##Property)\
extern FEquipmentPropertyTagContainer Equipment_Property_##Property##_Tag_Container;

#define EQUIPMENT_DEFINE_PROPERTY_TAG(Property)\
UE_DEFINE_GAMEPLAY_TAG(Equipment_Property_##Property, "Equipment.Property."#Property);\
FEquipmentPropertyTagContainer Equipment_Property_##Property##_Tag_Container = FEquipmentPropertyTagContainer(Equipment_Property_##Property, FName("Equipment_Property_"#Property), UEquipmentPropertyManager::CurrentFeatureName);

struct FEquipmentPropertyTagContainer
{
	FEquipmentPropertyTagContainer(FGameplayTag InPropertyTag, FName InPropertyName, FName InFeatureName);
	FGameplayTag PropertyTag;
	FName PropertyName;
	FName PropertyFeatureName;
};


UENUM()
enum class EEquipmentPropertyType:uint8
{
	Float = 0,
	Curve,
	Bool
};

USTRUCT()
struct FEquipmentPropertyModifier
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	FName ModifierName = FName();
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UEquipmentFeature> TargetFeature;
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag PropertyTag = FGameplayTag();
	UPROPERTY(EditDefaultsOnly)
	EEquipmentPropertyType TargetPropertyType = EEquipmentPropertyType::Float;
	UPROPERTY(EditDefaultsOnly, Category = "Float", meta = (EditCondition = "TargetPropertyType == EEquipmentPropertyType::Float", EditConditionHides))
	float ValueToAdd = 0.f;
	UPROPERTY(EditDefaultsOnly, Category = "Float", meta = (EditCondition = "TargetPropertyType == EEquipmentPropertyType::Float", EditConditionHides))
	int32 ValueToAddPriority = 0;
	UPROPERTY(EditDefaultsOnly, Category = "Float", meta = (EditCondition = "TargetPropertyType == EEquipmentPropertyType::Float", EditConditionHides))
	float ValueToMultiply = 0.f;
	UPROPERTY(EditDefaultsOnly, Category = "Float", meta = (EditCondition = "TargetPropertyType == EEquipmentPropertyType::Float", EditConditionHides))
	float ValueToMultiplyPriority = 0.f;
	UPROPERTY(EditDefaultsOnly, Category = "Bool", meta = (EditCondition = "TargetPropertyType == EEquipmentPropertyType::Bool", EditConditionHides))
	bool bBoolToOverride = false;
	UPROPERTY(EditDefaultsOnly, Category = "Bool", meta = (EditCondition = "TargetPropertyType == EEquipmentPropertyType::Bool", EditConditionHides))
	int32 BoolToOverridePriority = 0;
};

USTRUCT()
struct FEquipmentPropertyModifierHandle
{
	GENERATED_BODY()
	UPROPERTY()
	FName ModifierName;
	UPROPERTY()
	FName FeatureName;
	bool operator==(const FEquipmentPropertyModifierHandle& Other) const
	{
		return ModifierName == Other.ModifierName && FeatureName == Other.FeatureName;
	}
};
uint32 GetTypeHash(const FEquipmentPropertyModifierHandle& Other);