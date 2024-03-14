// Wrote by Crystal 2024


#include "ExpandedAbilitySet.h"

void UExpandedAbilitySet::GiveToAbilitySystem(
	UExpandedAbilitySystemComponent* AbilitySystemComponent,
	UObject* SourceObject, 
	FExpandedAbilityGrantSource_GrantHandle& GrantHandle)
{
	check(AbilitySystemComponent)
	if(!AbilitySystemComponent)
	{
		return;
	}
	GrantHandle.SetAbilitySystemComponent(AbilitySystemComponent);
	//Give Abilities
	for (const auto& AbilityData : Abilities)
	{
		if(!IsValid(AbilityData.Ability))
		{
			UE_LOG(LogAbilitySystemComponent, Warning, TEXT("AbilitySet %s has an invalid ability class in its GameplayAbilities array."), *GetName());
			continue;
		}

		GiveAbilityToAbilitySystem(AbilitySystemComponent, SourceObject, GrantHandle, AbilityData);
	}

	//Give Effects
	for (const auto& EffectData : Effects)
	{
		if(!IsValid(EffectData.Effect))
		{
			UE_LOG(LogAbilitySystemComponent, Warning, TEXT("AbilitySet %s has an invalid effect class in its GameplayEffects array."), *GetName());
		}

		GiveEffectToAbilitySystem(AbilitySystemComponent, GrantHandle, EffectData);
	}

	//Give Attribute Sets
	for (const auto& AttributeSetData : AttributeSets)
	{
		if(!IsValid(AttributeSetData.AttributeSet))
		{
			UE_LOG(LogAbilitySystemComponent, Warning, TEXT("AbilitySet %s has an invalid attribute set class in its AttributeSets array."), *GetName());
		}

		GiveAttributeSetToAbilitySystem(AbilitySystemComponent, GrantHandle, AttributeSetData);
	}
}
