// Copyright CrystalVapor 2024, All rights reserved.


#include "Utils/EquipmentSystemTypes.h"

#include "Basics/EquipmentAbilitySet.h"
#include "Basics/EquipmentGameplayAbility.h"
#include "Systems/EquipmentSystemGlobal.h"

FEquipmentPropertyModifierHandle FEquipmentPropertyModifier::MakeHandle(const FName& FeatureName) const
{
	return {FeatureName, ModifierName};
}

const FEquipmentPropertyModifier* FEquipmentPropertyModifierHandle::Get() const
{
	return UEquipmentSystemGlobal::GetPropertyModifier(FeatureName, ModifierName);
}

uint32 GetTypeHash(const FEquipmentPropertyModifierHandle& Other)
{
	return FCrc::MemCrc32(&Other, sizeof(Other));
}

bool FEquipmentVisualActorSpecifier::operator==(const FEquipmentVisualActorSpecifier& Other) const
{
	return Other.Specifier == Specifier;
}

uint32 GetTypeHash(const FEquipmentVisualActorSpecifier& Other)
{
	return FCrc::MemCrc32(&Other, sizeof(Other));
}

FEquipmentAbilitySetRequirement& FEquipmentAbilitySetRequirement::operator=(
	const FEquipmentAbilitySetRequirement& Other)
{
	RequiredAbilities = Other.RequiredAbilities;
	RequiredAttributeSets = Other.RequiredAttributeSets;
	return *this;
}

bool FEquipmentAbilitySetRequirement::ValidateWithAbilitySets(const TArray<UEquipmentAbilitySet*>& AbilitySets, TArray<FText>& OutFailedMessages) const
{
	auto CopiedRequiredAbilities = RequiredAbilities;
	auto CopiedRequiredAttributeSets = RequiredAttributeSets;
	for(const auto& AbilitySet:AbilitySets)
	{
		if(!AbilitySet)
		{
			OutFailedMessages.Add(FText::FromString(TEXT("Found a null ability set")));
			return false;
		}
		const auto& Abilities = AbilitySet->GetAbilities();
		const auto& Effects = AbilitySet->GetEffects();
		const auto& AttributeSets = AbilitySet->GetAttributeSets();
		for(auto& Ability: Abilities)
		{
			for(const auto& RequiredAbility: RequiredAbilities)
			{
				if(Ability.Ability->IsChildOf(RequiredAbility))
				{
					CopiedRequiredAbilities.Remove(RequiredAbility);
				}
			}
		}
		for(auto& AttributeSet: AttributeSets)
		{
			for(const auto& RequiredAttributeSet: RequiredAttributeSets)
			{
				if(AttributeSet.AttributeSet->IsChildOf(RequiredAttributeSet))
				{
					CopiedRequiredAttributeSets.Remove(RequiredAttributeSet);
				}
			}
		}
	}
	bool bSuccess = true;
	if(CopiedRequiredAbilities.Num()>0)
	{
		TArray<FString> AbilityNames;
		for(auto& Ability: CopiedRequiredAbilities)
		{
			AbilityNames.Add(Ability->GetName());
		}
		OutFailedMessages.Add(FText::FromString(FString::Printf(TEXT("Failed to find required abilities: %s\n"), *FString::Join(AbilityNames, TEXT(",")))));
		bSuccess = false;
	}
	if(CopiedRequiredAttributeSets.Num()>0)
	{
		TArray<FString> AttributeSetNames;
		for(auto& AttributeSet: CopiedRequiredAttributeSets)
		{
			AttributeSetNames.Add(AttributeSet->GetName());
		}
		OutFailedMessages.Add(FText::FromString(FString::Printf(TEXT("Failed to find required attribute sets: %s\n"), *FString::Join(AttributeSetNames, TEXT(",")))));
		bSuccess = false;
	}
	return bSuccess;
}

void FEquipmentAbilitySetRequirement::AddAbilityRequirement(TSubclassOf<UEquipmentGameplayAbility> AbilityRequirement)
{
	RequiredAbilities.Add(AbilityRequirement);
}

void FEquipmentAbilitySetRequirement::AddAttributeSetRequirement(TSubclassOf<UAttributeSet> AttributeSetRequirement)
{
	RequiredAttributeSets.Add(AttributeSetRequirement);
}

void FEquipmentAbilitySetRequirement::Append(const FEquipmentAbilitySetRequirement& Requirement)
{
	for(auto& Ability: Requirement.RequiredAbilities)
	{
		AddAbilityRequirement(Ability);
	}
	for(auto& AttributeSet: Requirement.RequiredAttributeSets)
	{
		AddAttributeSetRequirement(AttributeSet);
	}
}
