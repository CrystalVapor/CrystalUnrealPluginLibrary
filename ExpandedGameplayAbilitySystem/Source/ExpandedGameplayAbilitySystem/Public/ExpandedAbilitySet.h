// Wrote by Crystal 2024

#pragma once

#include "CoreMinimal.h"
#include "ExpandedAbilitySystemComponent.h"
#include "ExpandedGameplayAbility.h"
#include "Engine/DataAsset.h"
#include "ExpandedAbilitySet.generated.h"

USTRUCT()
struct FExpandedAbilitySet_Ability
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
struct FExpandedAbilitySet_Effect
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> Effect;

	UPROPERTY(EditDefaultsOnly)
	float Level = 0.f;
};

USTRUCT()
struct FExpandedAbilitySet_AttributeSet
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAttributeSet> AttributeSet;
};

USTRUCT()
struct FExpandedAbilitySet_GrantHandle
{
	GENERATED_BODY()
	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	void AddActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	void AddAttributeSet(UAttributeSet* AttributeSet);
	void SetAbilitySystemComponent(UExpandedAbilitySystemComponent* AbilitySystemComponent);

	void RemoveFromAbilitySystem();

	FExpandedAbilitySet_GrantHandle& Append(const FExpandedAbilitySet_GrantHandle& Other);

protected:
	UPROPERTY()
	TWeakObjectPtr<UExpandedAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;

	UPROPERTY()
	TArray<FActiveGameplayEffectHandle> ActiveGameplayEffectHandles;

	UPROPERTY()
	TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;
};

/**
 * An AbilitySet for grant Ability, effect and attribute set in batch.
 */
UCLASS()
class EXPANDEDGAMEPLAYABILITYSYSTEM_API UExpandedAbilitySet : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
	                                 FExpandedAbilitySet_GrantHandle& GrantHandle);

protected:
	void GiveAbilityToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
	                                FExpandedAbilitySet_GrantHandle& GrantHandle,
	                                const FExpandedAbilitySet_Ability& AbilityData);
	void GiveEffectToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent,
	                               FExpandedAbilitySet_GrantHandle& GrantHandle,
	                               const FExpandedAbilitySet_Effect& EffectData);
	void GiveAttributeSetToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent,
	                                     FExpandedAbilitySet_GrantHandle& GrantHandle,
	                                     const FExpandedAbilitySet_AttributeSet& AttributeSetData);
	UPROPERTY(EditDefaultsOnly)
	TArray<FExpandedAbilitySet_Ability> Abilities;
	UPROPERTY(EditDefaultsOnly)
	TArray<FExpandedAbilitySet_Effect> Effects;
	UPROPERTY(EditDefaultsOnly)
	TArray<FExpandedAbilitySet_AttributeSet> AttributeSets;
};
