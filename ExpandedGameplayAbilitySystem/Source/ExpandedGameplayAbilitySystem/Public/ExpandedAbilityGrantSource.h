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
struct FLimitedAbilityGrantSource_Ability: public FExpandedAbilityGrantSource_Ability
{
	GENERATED_BODY()
	
	// used to limit the ability
	UPROPERTY(EditAnywhere, NoClear, meta = (AllowAbstract = true, EditCondition = "bCanEditRequiredAbilityClass"))
	TSubclassOf<UExpandedGameplayAbility> RequiredAbilityClass = UExpandedGameplayAbility::StaticClass();

	UPROPERTY()
	bool bCanEditRequiredAbilityClass = false;
	
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
			ValidationErrors.Add(FText::FromString(FString::Printf(TEXT("Ability is not a child of %ls"), *UExpandedGameplayAbility::StaticClass()->GetName())));
		}
		return Result;
	}
#endif
};


USTRUCT()
struct FExpandedAbilityGrantSource_GrantHandle
{
	GENERATED_BODY()
	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	void AddActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	void AddAttributeSet(UAttributeSet* AttributeSet);
	void SetAbilitySystemComponent(UExpandedAbilitySystemComponent* AbilitySystemComponent);

	void RemoveFromAbilitySystem();

	FExpandedAbilityGrantSource_GrantHandle& Append(const FExpandedAbilityGrantSource_GrantHandle& Other);

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
	virtual void GiveToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
									 FExpandedAbilityGrantSource_GrantHandle& GrantHandle) = 0;
protected:
	virtual void GiveAbilityToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
									FExpandedAbilityGrantSource_GrantHandle& GrantHandle,
									const FExpandedAbilityGrantSource_Ability& AbilityData);
	
	virtual void GiveEffectToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent,
								   FExpandedAbilityGrantSource_GrantHandle& GrantHandle,
								   const FExpandedAbilityGrantSource_Effect& EffectData);
	
	virtual void GiveAttributeSetToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent,
										 FExpandedAbilityGrantSource_GrantHandle& GrantHandle,
										 const FExpandedAbilityGrantSource_AttributeSet& AttributeSetData);
};
