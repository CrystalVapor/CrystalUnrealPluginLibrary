// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "ExpandedAbilityGrantSource.h"
#include "EquipmentFeature_ConditionalBase.h"
#include "EquipmentFragment.h"
#include "EquipmentFeature_LimitedFeature.generated.h"

USTRUCT()
struct FLimitedFragment
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	bool UnlockFeature = true;
	// used to limit the fragment
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "UnlockFeature", AllowAbstract = true))
	TSubclassOf<UEquipmentFragment> RequiredFragmentClass;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEquipmentFragment> FragmentClass;
#if WITH_EDITOR
	EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) const
	{
		EDataValidationResult Result = EDataValidationResult::Valid;
		if (!RequiredFragmentClass)
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(TEXT("RequiredFragmentClass is null")));
		}
		else if(IsValid(FragmentClass)&&!FragmentClass->IsChildOf(RequiredFragmentClass))
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("FragmentClass %s is not a child of %s"), *FragmentClass->GetName(), *RequiredFragmentClass->GetName())));	;
		}
		return Result;
	}
#endif
};

USTRUCT()
struct FLimitedGameplayAbility: public FExpandedAbilityGrantSource_Ability
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	bool UnlockFeature = true;
	// used to limit the ability
	UPROPERTY(EditAnywhere, NoClear, meta = (EditCondition = "UnlockFeature", AllowAbstract = true))
	TSubclassOf<UExpandedGameplayAbility> RequiredAbilityClass = UExpandedGameplayAbility::StaticClass();
	
#if WITH_EDITOR
	EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) const
	{
		EDataValidationResult Result = EDataValidationResult::Valid;
		if (!RequiredAbilityClass)
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(TEXT("RequiredAbilityClass is null")));
		}
		else if(IsValid(Ability)&&!Ability->IsChildOf(RequiredAbilityClass))
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("Ability %s is not a child of %s"), *Ability->GetName(), *RequiredAbilityClass->GetName())));
		}
		return Result;
	}
#endif
};

USTRUCT()
struct FLimitedGameplayEffect: public FExpandedAbilityGrantSource_Effect
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	bool UnlockFeature = true;
	// used to limit the effect
	UPROPERTY(EditAnywhere, NoClear, meta = (EditCondition = "UnlockFeature", AllowAbstract = true))
	TSubclassOf<UGameplayEffect> RequiredEffectClass = UGameplayEffect::StaticClass();

#if WITH_EDITOR
	EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) const
	{
		EDataValidationResult Result = EDataValidationResult::Valid;
		if (!RequiredEffectClass)
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(TEXT("RequiredEffectClass is null")));
		}
		else if(IsValid(Effect)&&!Effect->IsChildOf(RequiredEffectClass))
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("Effect %s is not a child of %ls"), *Effect->GetName(), *RequiredEffectClass->GetName())));
		}
		return Result;
	}
#endif
};

USTRUCT()
struct FLimitedAttributeSet:public FExpandedAbilityGrantSource_AttributeSet
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere)
	bool UnlockFeature = true;
	// used to limit the attribute set
	UPROPERTY(EditAnywhere, NoClear, meta = (EditCondition = "UnlockFeature", AllowAbstract = true))
	TSubclassOf<UAttributeSet> RequiredAttributeSetClass = UAttributeSet::StaticClass();

#if WITH_EDITOR
	EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) const
	{
		EDataValidationResult Result = EDataValidationResult::Valid;
		if (!RequiredAttributeSetClass)
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(TEXT("RequiredAttributeSetClass is null")));
		}
		else if(IsValid(AttributeSet)&&!AttributeSet->IsChildOf(RequiredAttributeSetClass))
		{
			Result = EDataValidationResult::Invalid;
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("AttributeSet %s is not a child of %s"), *AttributeSet->GetName(), *RequiredAttributeSetClass->GetName())));
		}
		return Result;
	}
#endif
};

/**
 * 
 */
UCLASS(HideDropdown)
class EQUIPMENTSYSTEM_API UEquipmentFeature_LimitedFeature : public UEquipmentFeature_ConditionalBase, public IExpandedAbilityGrantSource
{
	GENERATED_BODY()
public:
	bool CheckDependencyFeature(const TSet<TSubclassOf<UEquipmentFeature>> Features, FString& OutFailedString) const;

	void UnlockFeatureDetails();
	void LockFeatureDetails();

	void SyncWithCDO();

	UEquipmentFeature_LimitedFeature* GetCDOFeature() const
	{
		return Cast<UEquipmentFeature_LimitedFeature>(GetClass()->GetDefaultObject());
	}

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;
#endif
	
	virtual void GetFeaturesConditional(const FGameplayTagContainer& FeatureTags, FEquipmentFeatureData& OutFeatures) const override;
	
	virtual void GiveToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
	                                 FExpandedAbilityGrantSource_GrantHandle& GrantHandle) override;

	UPROPERTY(VisibleAnywhere)
	bool bDetailsUnlocked = true;

	UPROPERTY(EditAnywhere, DisplayName = "Dependency Feature", meta = (EditCondition = "bDetailsUnlocked"))
	TArray<TSubclassOf<UEquipmentFeature>> DependencyFeatures;

	UPROPERTY(EditAnywhere, Category = "LimitedFeatures", meta = (TitleProperty = "RequiredFragmentClass"))
	TArray<FLimitedFragment> LimitedFragment;

	UPROPERTY(EditAnywhere, Category = "LimitedFeatures", meta = (TitleProperty = "RequiredAbilityClass"))
	TArray<FLimitedGameplayAbility> LimitedAbilityList;

	UPROPERTY(EditAnywhere, Category = "LimitedFeatures", meta = (TitleProperty = "RequiredEffectClass"))
	TArray<FLimitedGameplayEffect> LimitedEffectList;

	UPROPERTY(EditAnywhere, Category = "LimitedFeatures", meta = (TitleProperty = "RequiredAttributeSetClass"))
	TArray<FLimitedAttributeSet> LimitedAttributeSetList;
};
