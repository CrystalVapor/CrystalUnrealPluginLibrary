// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "NativeGameplayTags.h"

#include "EquipmentSystemTypes.generated.h"

#define EQUIPMENT_PROPERTY_TAG(FeatureClass, Property)\
(EquipmentProperty::FeatureClass##_NS::Equipment_Property_##Property)

#define BEGIN_EQUIPMENT_PROPERTY_TAG_DECLARE(FeatureClass)\
namespace EquipmentProperty{\
    extern const char* Name_##FeatureClass;\
    namespace FeatureClass##_NS{

#define EQUIPMENT_DECLARE_PROPERTY_TAG(Property)\
UE_DECLARE_GAMEPLAY_TAG_EXTERN(Equipment_Property_##Property)\
		extern FEquipmentPropertyTagContainer Equipment_Property_##Property##_Tag_Container;

#define END_EQUIPMENT_PROPERTY_TAG_DECLARE()\
	};\
};

#define BEGIN_EQUIPMENT_PROPERTY_TAG_DEFINE(FeatureClass)\
namespace EquipmentProperty{\
	const char* Name_##FeatureClass = #FeatureClass;\
	namespace FeatureClass##_NS{\
		const char* FeatureName = Name_##FeatureClass + 1;

#define EQUIPMENT_DEFINE_PROPERTY_TAG(Property)\
UE_DEFINE_GAMEPLAY_TAG(Equipment_Property_##Property, "Equipment.Property."#Property);\
		FEquipmentPropertyTagContainer Equipment_Property_##Property##_Tag_Container =\
			FEquipmentPropertyTagContainer(Equipment_Property_##Property, FName(#Property), FeatureName);

#define END_EQUIPMENT_PROPERTY_TAG_DEFINE()\
	};\
};

class UEquipmentAbilitySet;
class UEquipmentGameplayAbility;
class UAttributeSet;

struct FEquipmentPropertyTagContainer
{
	FEquipmentPropertyTagContainer(FGameplayTag InPropertyTag, FName InPropertyName, const char* InFeatureName);
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
	struct FEquipmentPropertyModifierHandle MakeHandle(const FName& FeatureName) const;
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
	FEquipmentPropertyModifierHandle() = default;
	FEquipmentPropertyModifierHandle(const FName& InFeatureName, const FName& InModifierName):ModifierName(InModifierName),FeatureName(InFeatureName) {}
	const FEquipmentPropertyModifier* Get() const;
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

USTRUCT(BlueprintType)
struct FEquipmentVisualActorSpecifier
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	FName Specifier;
	bool operator==(const FEquipmentVisualActorSpecifier& Other) const;
};
uint32 GetTypeHash(const FEquipmentVisualActorSpecifier& Other);


UENUM()
enum class EEquipmentVisualActorActionType:uint8
{
	Register,
	Unregister
};

USTRUCT()
struct FEquipmentVisualActorAction
{
	GENERATED_BODY()
	FEquipmentVisualActorAction() = default;
	// intended implicit, for removal.
	// ReSharper disable once CppNonExplicitConvertingConstructor
	FEquipmentVisualActorAction(const FName& InVisualActorName):VisualActorName(InVisualActorName) {}
	UPROPERTY(EditDefaultsOnly)
	EEquipmentVisualActorActionType ActionType = EEquipmentVisualActorActionType::Register;
	UPROPERTY(EditDefaultsOnly)
	FName VisualActorName = FName();
	// for removal.
	bool operator==(const FEquipmentVisualActorAction& Other) const
	{
		return FName(VisualActorName) == FName(Other.VisualActorName);
	}
};

USTRUCT()
struct FEquipmentAbilitySetRequirement
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	TSet<TSubclassOf<UEquipmentGameplayAbility>> RequiredAbilities;
	UPROPERTY(VisibleAnywhere)
	TSet<TSubclassOf<UAttributeSet>> RequiredAttributeSets;
	FEquipmentAbilitySetRequirement& operator=(const FEquipmentAbilitySetRequirement& Other);
	bool ValidateWithAbilitySets(const TArray<UEquipmentAbilitySet*>& AbilitySets, TArray<FText>& OutFailedMessages) const;
	void AddAbilityRequirement(TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement);
	void AddAttributeSetRequirement(TSubclassOf<UAttributeSet> AttributeSetRequirement);
};
