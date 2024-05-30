// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "Systems/EquipmentSystemGlobal.h"
#include "Utils/EquipmentSystemTypes.h"
#include "ExpandedAbilityGrantSource.h"
#include "EquipmentFeature.generated.h"

#ifdef WITH_EDITOR
#define ADD_ABILITY_REQUIREMENT(FeatureClassName, AbilityClass)\
	TEquipmentAbilitySetRequirement_AbilityRegister<FeatureClassName> AbilityClass##_ReqReg = TEquipmentAbilitySetRequirement_AbilityRegister<FeatureClassName>(AbilityClass::StaticClass());
#define ADD_ATTRIBUTE_SET_REQUIREMENT(FeatureClassName, AttributeSetClass)\
	TEquipmentAbilitySetRequirement_AttributeSetRegister<FeatureClassName> AttributeSetClass##_ReqReg = TEquipmentAbilitySetRequirement_AttributeSetRegister<FeatureClassName>(AttributeSetClass::StaticClass());
#else
#define ADD_ABILITY_REQUIREMENT(FeatureClassName, AbilityClass)
#define ADD_ATTRIBUTE_SET_REQUIREMENT(FeatureClassName, AttributeSetClass)
#endif 

class UEquipmentAbilitySet;
class UEquipmentGameplayAbility;
class UExpandedAbilitySet;
class AEquipmentInstance;

USTRUCT()
struct FEquipmentPropertyModifierAggregator
{
	GENERATED_BODY()
	FEquipmentPropertyModifierAggregator() {};
	void Apply(UEquipmentFeature* Feature, FProperty* PropertyToEdit);
	void Apply(float* FloatValue);
	void Apply(bool* BoolValue);
	void AddToStack(const FEquipmentPropertyModifier& Modifier);
	void AddToStack(float ValueToAdd, int32 Priority1, float ValueToMultiply, int32 Priority2);
	void AddToStack(bool BoolValue, int32 Priority);
	void RemoveFromStack(const FEquipmentPropertyModifier& Modifier);
	void RemoveFromStack(float ValueToAdd, int32 Priority1, float ValueToMultiply, int32 Priority2);
	void RemoveFromStack(bool BoolValue, int32 Priority);
	struct FModifierStackItem
	{
		union
		{
			float FloatValue = 0.f;
			bool BoolValue;
		};
		int32 Index;
		bool operator>(const FModifierStackItem& Other) const
		{
			return Index>Other.Index;
		}
	};
	TArray<FModifierStackItem> ModifierStack;
protected:
	FModifierStackItem& FindOrAddModifierStackItem(int32 Index);
	void RemoveModifierStackItem(int32 Index);
};

USTRUCT()
struct FEquipmentPropertyModifierAggregatorContainer
{
	GENERATED_BODY()
	void RegisterModifier(const FName FeatureName, const FName ModifierName, const FEquipmentPropertyModifier& Modifier);
	void UnregisterModifier(const FName FeatureName, const FName ModifierName, const FEquipmentPropertyModifier& Modifier);
	void ResetFeature(UEquipmentFeature* Feature);
	void ApplyModifiersToFeature(UEquipmentFeature* Feature);
	TMap<FName,FEquipmentPropertyModifierAggregator> AggregatorsPerProperty;
	TSet<FEquipmentPropertyModifierHandle> RegisteredModifiers;
};

template<class FeatureClass>
struct TEquipmentAbilitySetRequirement_AbilityRegister
{
	explicit TEquipmentAbilitySetRequirement_AbilityRegister(TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement);
};

template<class FeatureClass>
struct TEquipmentAbilitySetRequirement_AttributeSetRegister
{
	explicit TEquipmentAbilitySetRequirement_AttributeSetRegister(TSubclassOf<UAttributeSet> AttributeSetRequirement);
};

class FEquipmentFeatureFactory
{
public:
	static UEquipmentFeature* FactoryCreateFeature(AEquipmentInstance* Owner, UClass* FeatureClass);
};

/**
 * Base class for Equipment Features, which represents functions or data unit that can be added to Equipment Instances.
 */
UCLASS(Blueprintable, HideDropdown)
class EQUIPMENTSYSTEM_API UEquipmentFeature : public UActorComponent
{
	GENERATED_BODY()
	friend class FEquipmentFeatureFactory;
	friend class AEquipmentInstance;
public:
	UEquipmentFeature();
	FName GetFeatureName() const;
	const TArray<FEquipmentVisualActorAction>& GetVisualActorActions() const;
	const TArray<FEquipmentPropertyModifier>& GetPropertyModifiers() const;
	const TArray<UEquipmentAbilitySet*>& GetAbilitySets() const;
	const FEquipmentPropertyModifier* GetPropertyModifierOwnedByFeature(FName ModifierName) const;
	void ApplyRegisteredPropertyModifiers(bool bResetFeatureBeforeApply = true);
	// Register/Unregister a Modifier to feature, the property will not change until ApplyRegisteredPropertyModifiers is called.
	void RegisterModifier(const FEquipmentPropertyModifierHandle& ModifierHandle);
	void RegisterModifier(const FName InFeatureName, const FName ModifierName);
	void UnregisterModifier(const FEquipmentPropertyModifierHandle& ModifierHandle);
	void UnregisterModifier(const FName InFeatureName, const FName ModifierName);

	UFUNCTION(BlueprintCallable, CustomThunk, Category = "Equipment System", DisplayName = "Get Property (Feature)", meta = (CustomStructureParam = "OutProperty", GameplayTagFilter = "Equipment.Property"))
	bool K2_GetProperty(FGameplayTag PropertyTag, int32& OutProperty);
	DECLARE_FUNCTION(execK2_GetProperty);
	static bool InternalK2_GetProperty(UEquipmentFeature* Feature, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType);
	// Find Value via Reflection.
	FProperty* GetPropertyReflectInfo(FGameplayTag PropertyTag) const;
	FProperty* GetPropertyReflectInfo(FName PropertyName) const;
	template<class T>
	T* GetProperty(FGameplayTag PropertyTag) const;
	template<class T>
	T* GetProperty(FName PropertyName) const;
	
#if WITH_EDITOR
	
	virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;
#endif
	
protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FEquipmentVisualActorAction> VisualActorActions;
	
	UPROPERTY(EditDefaultsOnly)
	TArray<FEquipmentPropertyModifier> PropertyModifiersOwned;

	UPROPERTY(EditDefaultsOnly)
	TArray<UEquipmentAbilitySet*> AbilitySets;
	
	UPROPERTY(Transient)
	FEquipmentPropertyModifierAggregatorContainer ModifierAggregatorContainer;
	
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Transient)
	FEquipmentAbilitySetRequirement AbilitySetRequirements;
#endif
};

template <class FeatureClass>
TEquipmentAbilitySetRequirement_AbilityRegister<FeatureClass>::TEquipmentAbilitySetRequirement_AbilityRegister(
	TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement)
{
	UEquipmentSystemGlobal::RegisterAbilityRequirement(FeatureClass::StaticClass()->GetFName(), AbilityRequirement);
}

template <class FeatureClass>
TEquipmentAbilitySetRequirement_AttributeSetRegister<FeatureClass>::TEquipmentAbilitySetRequirement_AttributeSetRegister(
	TSubclassOf<UAttributeSet> AttributeSetRequirement)
{
	UEquipmentSystemGlobal::RegisterAttributeSetRequirement(FeatureClass::StaticClass()->GetFName(), AttributeSetRequirement);
}

template <class T>
T* UEquipmentFeature::GetProperty(FGameplayTag PropertyTag) const
{
	return GetPropertyReflectInfo(PropertyTag)->ContainerPtrToValuePtr<T*>(this);
}

template <class T>
T* UEquipmentFeature::GetProperty(FName PropertyName) const
{
	return GetPropertyReflectInfo(PropertyName)->ContainerPtrToValuePtr<T*>(this);
}
