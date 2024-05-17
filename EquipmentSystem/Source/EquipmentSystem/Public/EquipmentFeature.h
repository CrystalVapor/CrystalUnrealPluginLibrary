// Copyright CrystalVapor 2024, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "EquipmentSystemGlobal.h"
#include "EquipmentSystemTypes.h"
#include "ExpandedAbilityGrantSource.h"
#include "EquipmentFeature.generated.h"

#define ADD_ABILITY_REQUIREMENT(FeatureClassName, AbilityClass)\
	FEquipmentAbilitySetRequirement_AbilityRegister<FeatureClassName> AbilityClass##_ReqReg = FEquipmentAbilitySetRequirement_AbilityRegister<FeatureClassName>(AbilityClass::StaticClass());
#define ADD_ATTRIBUTE_SET_REQUIREMENT(FeatureClassName, AttributeSetClass)\
	FEquipmentAbilitySetRequirement_AttributeSetRegister<FeatureClassName> AttributeSetClass##_ReqReg = FEquipmentAbilitySetRequirement_AttributeSetRegister<FeatureClassName>(AttributeSetClass::StaticClass());

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

UENUM()
enum class EEquipmentVisualActorActionType:uint8
{
	Register,
	Unregister
};

UENUM()
enum class EEquipmentVisualActorActionRegisterSetting:uint8
{
	AfterMaster,
	BeforeMaster
};

USTRUCT()
struct FEquipmentVisualActorAction
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	EEquipmentVisualActorActionType ActionType = EEquipmentVisualActorActionType::Register;
	UPROPERTY(EditDefaultsOnly)
	FName VisualActorName = FName();
	// Specify the Master Visual Actor to register to, empty to have no Master.
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "ActionType == EEquipmentVisualActorActionType::Register", EditConditionHides))
	FName MasterVisualActorToRegisterTo = FName();
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "ActionType == EEquipmentVisualActorActionType::Register && MasterVisualActorToRegisterTo == FName()", EditConditionHides))
	EEquipmentVisualActorActionRegisterSetting RegisterSetting = EEquipmentVisualActorActionRegisterSetting::AfterMaster;
};

USTRUCT()
struct FEquipmentAbilitySetRequirement
{
	GENERATED_BODY()
	UPROPERTY(VisibleDefaultsOnly)
	TArray<TSubclassOf<UEquipmentGameplayAbility>> RequiredAbilities;
	UPROPERTY(VisibleDefaultsOnly)
	TArray<TSubclassOf<UAttributeSet>> RequiredAttributeSets;
	FEquipmentAbilitySetRequirement& operator=(const FEquipmentAbilitySetRequirement& Other);
	bool ValidateWithAbilitySets(const TArray<UExpandedAbilitySet*>& AbilitySets, TArray<FText>& OutFailedMessages) const;
	void AddAbilityRequirement(TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement);
	void AddAttributeSetRequirement(TSubclassOf<UAttributeSet> AttributeSetRequirement);
};

template<class FeatureClass>
struct FEquipmentAbilitySetRequirement_AbilityRegister
{
	FEquipmentAbilitySetRequirement_AbilityRegister(TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement);
};
template<class FeatureClass>
struct FEquipmentAbilitySetRequirement_EffectRegister
{
	FEquipmentAbilitySetRequirement_EffectRegister(TSubclassOf<UGameplayEffect> EffectRequirement);
};
template<class FeatureClass>
struct FEquipmentAbilitySetRequirement_AttributeSetRegister
{
	FEquipmentAbilitySetRequirement_AttributeSetRegister(TSubclassOf<UAttributeSet> AttributeSetRequirement);
};

class FEquipmentFeatureFactory
{
public:
	static UEquipmentFeature* CreateAdvancedFeature(UClass* FeatureClass);
};

/**
 * Base class for Equipment Features, which represents functions or data unit that can be added to Equipment Instances.
 */
UCLASS(Blueprintable)
class EQUIPMENTSYSTEM_API UEquipmentFeature : public UActorComponent
{
	GENERATED_BODY()
	friend class FEquipmentFeatureFactory;
	friend class AEquipmentInstance;
public:
	UEquipmentFeature();
	static FName GetFeatureName();
	static const TArray<FEquipmentVisualActorAction>& GetVisualActorActions() {return StaticClass()->GetDefaultObject<UEquipmentFeature>()->VisualActorActions;}
	static const TArray<FEquipmentPropertyModifier>& GetPropertyModifiers() {return StaticClass()->GetDefaultObject<UEquipmentFeature>()->PropertyModifiersOwned;}
	static const FEquipmentPropertyModifier* GetPropertyModifierOwnedByFeature(FName ModifierName);
	void ApplyRegisteredPropertyModifiers(bool bResetFeatureBeforeApply = true);
	void RegisterModifier(const FName InFeatureName, const FName ModifierName);
	void UnregisterModifier(const FName InFeatureName, const FName ModifierName);

	UFUNCTION(BlueprintCallable, CustomThunk, Category = "Equipment System", DisplayName = "Get Property (Feature)", meta = (CustomStructureParam = "OutProperty", GameplayTagFilter = "Equipment.Property"))
	static bool K2_GetProperty(UEquipmentFeature* Feature, FGameplayTag PropertyTag, int32& OutProperty);
	DECLARE_FUNCTION(execK2_GetProperty);
	static bool InternalK2_GetProperty(UEquipmentFeature* Feature, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType);
	// Find Value via Reflection.
	FProperty* GetPropertyReflectInfo(FGameplayTag PropertyTag) const;
	FProperty* GetPropertyReflectInfo(FName PropertyName) const;
	template<class T>
	T* GetProperty(FGameplayTag PropertyTag) const;
	template<class T>
	T* GetProperty(FName PropertyName) const;
	
	static void AddAbilityRequirement(TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement);
	static void AddAttributeSetRequirement(TSubclassOf<UAttributeSet> AttributeSetRequirement);
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;
	//virtual void PreSave(FObjectPreSaveContext SaveContext) override;
	virtual void PostCDOContruct() override;
#endif
	
protected:
	
	UPROPERTY(EditDefaultsOnly)
	FName FeatureName = FName();
	
	UPROPERTY(EditDefaultsOnly)
	TArray<FEquipmentVisualActorAction> VisualActorActions;
	
	UPROPERTY(EditDefaultsOnly)
	TArray<FEquipmentPropertyModifier> PropertyModifiersOwned;

	UPROPERTY(EditDefaultsOnly)
	TArray<UExpandedAbilitySet*> AbilitySets;
	
	UPROPERTY(Transient)
	FEquipmentPropertyModifierAggregatorContainer ModifierAggregatorContainer;
	
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Transient)
	FEquipmentAbilitySetRequirement AbilitySetRequirements;
	static FEquipmentAbilitySetRequirement AbilitySetRequirementsGlobal;
#endif
};

template <class FeatureClass>
FEquipmentAbilitySetRequirement_AbilityRegister<FeatureClass>::FEquipmentAbilitySetRequirement_AbilityRegister(
	TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement)
{
	FeatureClass::AddAbilityRequirement(AbilityRequirement);
}

template <class FeatureClass>
FEquipmentAbilitySetRequirement_EffectRegister<FeatureClass>::FEquipmentAbilitySetRequirement_EffectRegister(
	TSubclassOf<UGameplayEffect> EffectRequirement)
{
	FeatureClass::AddEffectRequirement(EffectRequirement);
}

template <class FeatureClass>
FEquipmentAbilitySetRequirement_AttributeSetRegister<FeatureClass>::FEquipmentAbilitySetRequirement_AttributeSetRegister(
	TSubclassOf<UAttributeSet> AttributeSetRequirement)
{
	FeatureClass::AddAttributeSetRequirement(AttributeSetRequirement);
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
