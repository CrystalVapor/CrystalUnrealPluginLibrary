// Wrote by Crystal 2024

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ExpandedGameplayAbility.generated.h"

UENUM(BlueprintType)
enum class EAbilityActivationPolicy:uint8
{
	// Try to activate the ability when the input is triggered.
	OnInputTriggered,
	// The Ability will be activated as soon as it is granted or Avatar is set.
	OnSpawnOrGranted,
	// Only Activate by Event, ignore input.
	EventOnly
};

/**
 * 
 */
UCLASS()
class EXPANDEDGAMEPLAYABILITYSYSTEM_API UExpandedGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	// UGameplayAbility overrides
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	                       FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	                       const FGameplayAbilityActivationInfo ActivationInfo) const override;
	// ~UGameplayAbility overrides
	
	void TryActivateOnSpawnOrGranted(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec);

	
	// Customized version of the CheckCost function, to add cost without using GameplayEffects
	// - Cannot be predicted
	UFUNCTION(BlueprintNativeEvent)
	bool CustomCheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;
	
	// Customized version of the ApplyCost function, to add cost without using GameplayEffects
	// - Cannot be predicted
	UFUNCTION(BlueprintNativeEvent)
	void CustomApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo,
						 const FGameplayAbilityActivationInfo ActivationInfo) const;

	// Exposed version of the GetSourceObject function, Called on non-instanced abilities
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UObject* K2_GetSourceObject(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;

	// Is the ability's input currently being pressed? Called on instanced abilities
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsInputPressed() const;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Settings")
	EAbilityActivationPolicy ActivationPolicy = EAbilityActivationPolicy::OnInputTriggered;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Settings", meta = (Categories = "Input"))
	FGameplayTagContainer InputTags;
protected:
	void TryActivateAbility(const FGameplayAbilitySpec& Spec);
};
