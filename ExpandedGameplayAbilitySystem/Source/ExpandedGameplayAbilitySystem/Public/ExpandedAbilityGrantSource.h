// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExpandedAbilitySystemComponent.h"
#include "ExpandedGameplayAbility.h"
#include "ExpandedAbilityGrantSource.generated.h"

USTRUCT()
struct FExpandedAbilityGrantSource_Ability
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UExpandedGameplayAbility> Ability;
	
	UPROPERTY(EditDefaultsOnly)
	uint32 Level = 0;
	
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer DynamicTags;
};

USTRUCT()
struct FExpandedAbilityGrantSource_Effect
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> Effect;

	UPROPERTY(EditDefaultsOnly)
	float Level = 0.f;
};

USTRUCT()
struct FExpandedAbilityGrantSource_AttributeSet
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAttributeSet> AttributeSet;
};

USTRUCT()
struct FExpandedAbilityGrantSource_GrantHandle
{
	GENERATED_BODY()
	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	void AddActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	void AddAttributeSet(UAttributeSet* AttributeSet);
	void SetAbilitySystemComponent(UAbilitySystemComponent* AbilitySystemComponent);

	void RemoveFromAbilitySystem();

	FExpandedAbilityGrantSource_GrantHandle& Append(const FExpandedAbilityGrantSource_GrantHandle& Other);

protected:
	UPROPERTY()
	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;

	UPROPERTY()
	TArray<FActiveGameplayEffectHandle> ActiveGameplayEffectHandles;

	UPROPERTY()
	TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;
};

// This class does not need to be modified.
UINTERFACE()
class UExpandedAbilityGrantSource : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EXPANDEDGAMEPLAYABILITYSYSTEM_API IExpandedAbilityGrantSource
{
	GENERATED_BODY()
public:
	virtual void GiveToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
	                                 FExpandedAbilityGrantSource_GrantHandle& GrantHandle) = 0;
protected:
	virtual void GiveAbilityToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
	                                        FExpandedAbilityGrantSource_GrantHandle& GrantHandle,
	                                        const FExpandedAbilityGrantSource_Ability& AbilityData);
	
	virtual void GiveEffectToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent,
	                                       FExpandedAbilityGrantSource_GrantHandle& GrantHandle,
	                                       const FExpandedAbilityGrantSource_Effect& EffectData);
	
	virtual void GiveAttributeSetToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent,
	                                             FExpandedAbilityGrantSource_GrantHandle& GrantHandle,
	                                             const FExpandedAbilityGrantSource_AttributeSet& AttributeSetData);
};
