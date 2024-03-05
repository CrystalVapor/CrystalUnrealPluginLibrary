// Copyright 2024 CrystalVapor


#include "EquipmentAbilitySet.h"


void UEquipmentAbilitySet::GiveToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent,
                                               UObject* SourceObject, FExpandedAbilitySet_GrantHandle& GrantHandle)
{
	Super::GiveToAbilitySystem(AbilitySystemComponent, SourceObject, GrantHandle);

	for(const FEquipmentAbilitySet_Ability& EquipmentAbilityData : EquipmentAbilities)
	{
		if(IsValid(EquipmentAbilityData.Ability))
		{
			GiveAbilityToAbilitySystem(AbilitySystemComponent, SourceObject, GrantHandle, EquipmentAbilityData);
		}
	}
	for(const FEquipmentAbilitySet_Effect& EquipmentEffectData : EquipmentEffects)
	{
		if(IsValid(EquipmentEffectData.Effect))
		{
			GiveEffectToAbilitySystem(AbilitySystemComponent, GrantHandle, EquipmentEffectData);
		}
	}
	for(const FEquipmentAbilitySet_AttributeSet& EquipmentAttributeSetData : EquipmentAttributeSets)
	{
		if(IsValid(EquipmentAttributeSetData.AttributeSet))
		{
			GiveAttributeSetToAbilitySystem(AbilitySystemComponent, GrantHandle, EquipmentAttributeSetData);
		}
	}
}

EDataValidationResult UEquipmentAbilitySet::IsDataValid(TArray<FText>& ValidationErrors)
{
	for(auto& EquipmentAbilityData : EquipmentAbilities)
	{
		if(EquipmentAbilityData.IsDataValid(ValidationErrors)!=EDataValidationResult::Valid)
		{
			return EDataValidationResult::Invalid;
		}
	}
	for(auto& EquipmentEffectData : EquipmentEffects)
	{
		if(EquipmentEffectData.IsDataValid(ValidationErrors)!=EDataValidationResult::Valid)
		{
			return EDataValidationResult::Invalid;
		}
	}
	for(auto& EquipmentAttributeSetData : EquipmentAttributeSets)
	{
		if(EquipmentAttributeSetData.IsDataValid(ValidationErrors)!=EDataValidationResult::Valid)
		{
			return EDataValidationResult::Invalid;
		}
	}
	return Super::IsDataValid(ValidationErrors);
}

