// Wrote by Crystal 2024


#include "ExpandedAbilitySet.h"

void FExpandedAbilitySet_GrantHandle::AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle)
{
	if(Handle.IsValid())
	{
		AbilitySpecHandles.Add(Handle);
	}
}

void FExpandedAbilitySet_GrantHandle::AddActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle)
{
	if(Handle.IsValid())
	{
		ActiveGameplayEffectHandles.Add(Handle);
	}
}

void FExpandedAbilitySet_GrantHandle::AddAttributeSet(UAttributeSet* AttributeSet)
{
	GrantedAttributeSets.Add(AttributeSet);
}

void FExpandedAbilitySet_GrantHandle::SetAbilitySystemComponent(UExpandedAbilitySystemComponent* InAbilitySystemComponent)
{
	AbilitySystemComponent = InAbilitySystemComponent;
}

void FExpandedAbilitySet_GrantHandle::RemoveFromAbilitySystem()
{
	if(!AbilitySystemComponent.IsValid())
	{
		return;
	}
	
	if(!AbilitySystemComponent->IsOwnerActorAuthoritative())
	{
		return;
	}
	for(const FGameplayAbilitySpecHandle& Handle : AbilitySpecHandles)
	{
		if(Handle.IsValid())
		{
			AbilitySystemComponent->ClearAbility(Handle);
		}
	}

	for (const FActiveGameplayEffectHandle& Handle : ActiveGameplayEffectHandles)
	{
		if(Handle.IsValid())
		{
			AbilitySystemComponent->RemoveActiveGameplayEffect(Handle);
		}
	}

	for (UAttributeSet* Set : GrantedAttributeSets)
	{
		AbilitySystemComponent->RemoveSpawnedAttribute(Set);
	}

	AbilitySpecHandles.Reset();
	ActiveGameplayEffectHandles.Reset();
	GrantedAttributeSets.Reset();
}

FExpandedAbilitySet_GrantHandle& FExpandedAbilitySet_GrantHandle::Append(const FExpandedAbilitySet_GrantHandle& Other)
{
	if(AbilitySystemComponent != nullptr)
	{
		check(AbilitySystemComponent == Other.AbilitySystemComponent);
	}
	else
	{
		AbilitySystemComponent = Other.AbilitySystemComponent;
	}
	AbilitySpecHandles.Append(Other.AbilitySpecHandles);
	ActiveGameplayEffectHandles.Append(Other.ActiveGameplayEffectHandles);
	GrantedAttributeSets.Append(Other.GrantedAttributeSets);
	return *this;
}

void UExpandedAbilitySet::GiveAbilityToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject, FExpandedAbilitySet_GrantHandle& GrantHandle, const FExpandedAbilitySet_Ability& AbilityData)
{
	FGameplayAbilitySpec AbilitySpec(AbilityData.Ability, AbilityData.Level, INDEX_NONE, SourceObject);
	AbilitySpec.DynamicAbilityTags.AppendTags(AbilityData.DynamicTags);
	AbilitySpec.SourceObject = SourceObject;

	FGameplayAbilitySpecHandle SpecHandle = AbilitySystemComponent->GiveAbility(AbilitySpec);

	GrantHandle.AddAbilitySpecHandle(SpecHandle);
}

void UExpandedAbilitySet::GiveEffectToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, FExpandedAbilitySet_GrantHandle& GrantHandle, const FExpandedAbilitySet_Effect& EffectData)
{
	UGameplayEffect* EffectCDO = EffectData.Effect->GetDefaultObject<UGameplayEffect>();
		
	FActiveGameplayEffectHandle EffectSpecHandle = AbilitySystemComponent->ApplyGameplayEffectToSelf(EffectCDO, EffectData.Level, AbilitySystemComponent->MakeEffectContext());
	GrantHandle.AddActiveGameplayEffectHandle(EffectSpecHandle);
}

void UExpandedAbilitySet::GiveAttributeSetToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, FExpandedAbilitySet_GrantHandle& GrantHandle, const FExpandedAbilitySet_AttributeSet& AttributeSetData)
{
	UAttributeSet* AttributeSet = NewObject<UAttributeSet>(AbilitySystemComponent->GetOwner(), AttributeSetData.AttributeSet);
	AbilitySystemComponent->AddAttributeSetSubobject(AttributeSet);

	GrantHandle.AddAttributeSet(AttributeSet);
}

void UExpandedAbilitySet::GiveToAbilitySystem(
	UExpandedAbilitySystemComponent* AbilitySystemComponent,
	UObject* SourceObject, 
	FExpandedAbilitySet_GrantHandle& GrantHandle)
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
