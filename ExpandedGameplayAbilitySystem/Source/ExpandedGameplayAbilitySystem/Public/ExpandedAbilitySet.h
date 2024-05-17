// Wrote by Crystal 2024

#pragma once

#include "CoreMinimal.h"
#include "ExpandedAbilityGrantSource.h"
#include "ExpandedAbilitySystemComponent.h"
#include "Engine/DataAsset.h"
#include "ExpandedAbilitySet.generated.h"



/**
 * An AbilitySet for grant Ability, effect and attribute set in batch.
 */
UCLASS()
class EXPANDEDGAMEPLAYABILITYSYSTEM_API UExpandedAbilitySet : public UDataAsset, public IExpandedAbilityGrantSource
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystem(UAbilitySystemComponent* AbilitySystemComponent, UObject* SourceObject,
	                                 FExpandedAbilityGrantSource_GrantHandle& GrantHandle);
	const TArray<FExpandedAbilityGrantSource_Ability>& GetAbilities() const { return Abilities; }
	const TArray<FExpandedAbilityGrantSource_Effect>& GetEffects() const { return Effects; }
	const TArray<FExpandedAbilityGrantSource_AttributeSet>& GetAttributeSets() const { return AttributeSets; }
protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FExpandedAbilityGrantSource_Ability> Abilities;
	UPROPERTY(EditDefaultsOnly)
	TArray<FExpandedAbilityGrantSource_Effect> Effects;
	UPROPERTY(EditDefaultsOnly)
	TArray<FExpandedAbilityGrantSource_AttributeSet> AttributeSets;
};
