// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "ExpandedAbilitySet.h"
#include "EquipmentAbilitySet.generated.h"

USTRUCT()
struct FEquipmentAbilitySet_Ability: public FExpandedAbilitySet_Ability
{
	GENERATED_BODY()
	// used to limit the ability
	UPROPERTY(EditAnywhere, NoClear, meta = (AllowAbstract = true))
	TSubclassOf<UExpandedGameplayAbility> RequiredAbilityClass = UExpandedGameplayAbility::StaticClass();

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
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("Ability is not a child of %ls"), *UExpandedGameplayAbility::StaticClass()->GetName())));
		}
		return Result;
	}
};

USTRUCT()
struct FEquipmentAbilitySet_Effect: public FExpandedAbilitySet_Effect
{
	GENERATED_BODY()
	// used to limit the effect
	UPROPERTY(EditAnywhere, NoClear, meta = (AllowAbstract = true))
	TSubclassOf<UGameplayEffect> RequiredEffectClass = UGameplayEffect::StaticClass();

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
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("Effect is not a child of %ls"), *UGameplayEffect::StaticClass()->GetName())));
		}
		return Result;
	}
};

USTRUCT()
struct FEquipmentAbilitySet_AttributeSet:public FExpandedAbilitySet_AttributeSet
{
	GENERATED_BODY()
	// used to limit the attribute set
	UPROPERTY(EditAnywhere, NoClear, meta = (AllowAbstract = true))
	TSubclassOf<UAttributeSet> RequiredAttributeSetClass = UAttributeSet::StaticClass();

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
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("AttributeSet is not a child of %ls"), *UAttributeSet::StaticClass()->GetName())));
		}
		return Result;
	}
};

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentAbilitySet : public UExpandedAbilitySet
{
	GENERATED_BODY()

public:
	
	virtual void GiveToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject, FExpandedAbilitySet_GrantHandle& GrantHandle) final;
	
	virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;

protected:
	UPROPERTY(EditAnywhere, DisplayName="Equipment Abilities")
	TArray<FEquipmentAbilitySet_Ability> EquipmentAbilities;

	UPROPERTY(EditAnywhere, DisplayName="Equipment Effects")
	TArray<FEquipmentAbilitySet_Effect> EquipmentEffects;

	UPROPERTY(EditAnywhere, DisplayName="Equipment Attribute Sets")
	TArray<FEquipmentAbilitySet_AttributeSet> EquipmentAttributeSets;

	
};
