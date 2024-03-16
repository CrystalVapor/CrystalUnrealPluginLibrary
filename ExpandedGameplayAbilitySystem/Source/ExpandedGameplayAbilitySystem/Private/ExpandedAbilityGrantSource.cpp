// Copyright 2024 CrystalVapor


#include "ExpandedAbilityGrantSource.h"

void FExpandedAbilityGrantSource_GrantHandle::AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle)
{
	if(Handle.IsValid())
	{
		AbilitySpecHandles.Add(Handle);
	}
}

void FExpandedAbilityGrantSource_GrantHandle::AddActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle)
{
	if(Handle.IsValid())
	{
		ActiveGameplayEffectHandles.Add(Handle);
	}
}

void FExpandedAbilityGrantSource_GrantHandle::AddAttributeSet(UAttributeSet* AttributeSet)
{
	GrantedAttributeSets.Add(AttributeSet);
}

void FExpandedAbilityGrantSource_GrantHandle::SetAbilitySystemComponent(UAbilitySystemComponent* InAbilitySystemComponent)
{
	AbilitySystemComponent = InAbilitySystemComponent;
}

void FExpandedAbilityGrantSource_GrantHandle::RemoveFromAbilitySystem()
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

FExpandedAbilityGrantSource_GrantHandle& FExpandedAbilityGrantSource_GrantHandle::Append(const FExpandedAbilityGrantSource_GrantHandle& Other)
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

void IExpandedAbilityGrantSource::GiveAbilityToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject, FExpandedAbilityGrantSource_GrantHandle& GrantHandle, const FExpandedAbilityGrantSource_Ability& AbilityData)
{
	FGameplayAbilitySpec AbilitySpec(AbilityData.Ability, AbilityData.Level, INDEX_NONE, SourceObject);
	AbilitySpec.DynamicAbilityTags.AppendTags(AbilityData.DynamicTags);
	AbilitySpec.SourceObject = SourceObject;

	FGameplayAbilitySpecHandle SpecHandle = AbilitySystemComponent->GiveAbility(AbilitySpec);

	GrantHandle.AddAbilitySpecHandle(SpecHandle);
}

void IExpandedAbilityGrantSource::GiveEffectToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, FExpandedAbilityGrantSource_GrantHandle& GrantHandle, const FExpandedAbilityGrantSource_Effect& EffectData)
{
	UGameplayEffect* EffectCDO = EffectData.Effect->GetDefaultObject<UGameplayEffect>();
		
	FActiveGameplayEffectHandle EffectSpecHandle = AbilitySystemComponent->ApplyGameplayEffectToSelf(EffectCDO, EffectData.Level, AbilitySystemComponent->MakeEffectContext());
	GrantHandle.AddActiveGameplayEffectHandle(EffectSpecHandle);
}

void IExpandedAbilityGrantSource::GiveAttributeSetToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, FExpandedAbilityGrantSource_GrantHandle& GrantHandle, const FExpandedAbilityGrantSource_AttributeSet& AttributeSetData)
{
	UAttributeSet* AttributeSet = NewObject<UAttributeSet>(AbilitySystemComponent->GetOwner(), AttributeSetData.AttributeSet);
	AbilitySystemComponent->AddAttributeSetSubobject(AttributeSet);

	GrantHandle.AddAttributeSet(AttributeSet);
}