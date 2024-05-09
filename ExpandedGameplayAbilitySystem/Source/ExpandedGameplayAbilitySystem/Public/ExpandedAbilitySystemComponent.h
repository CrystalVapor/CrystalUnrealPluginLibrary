// Wrote by Crystal 2024

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ExpandedGameplayCueManager.h"
#include "BatchedGameplayCueParameter.h"
#include "ExpandedAbilitySystemComponent.generated.h"


USTRUCT()
struct FGameplayAbilitySpecInputMeta
{
	GENERATED_BODY()
	// Tags that are currently activating ability's input
	// Ability will be released when this container is empty
	FGameplayTagContainer RelatedTags = FGameplayTagContainer();
};

USTRUCT()
struct FGameplayAbilitySpecHandleContainer
{
	GENERATED_BODY()
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> Handles;
	FGameplayAbilitySpecHandleContainer& operator=(const FGameplayAbilitySpecHandleContainer& Other)
	{
		Handles = Other.Handles;
		return *this;
	}
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class EXPANDEDGAMEPLAYABILITYSYSTEM_API UExpandedAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	// UAbilitySystemComponent overrides
	virtual void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;
	// ~UAbilitySystemComponent overrides
	
	void InputTagTriggered(FGameplayTag InputTag);
	void InputTagReleased(FGameplayTag InputTag);
	void SpecInputTagTriggered(FGameplayAbilitySpecHandle Handle, FGameplayTag InputTag);
	void SpecInputTagReleased(FGameplayAbilitySpecHandle Handle, FGameplayTag InputTag);
	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;

	UFUNCTION(Client, Reliable)
	void ClientAddSpecInputMapping(const FGameplayAbilitySpec & AbilitySpec);

	void TryActivateAbilitiesOnActorInfoSet();

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"), DisplayName = "Locally Execute Gameplay Cue On Owner")
	void LocallyExecuteGameplayCueOnOwner(const FGameplayTag GameplayCueTag, UPARAM(ref) const FGameplayCueParameters& GameplayCueParameters);

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"), DisplayName = "Locally Add Gameplay Cue On Owner")
	void LocallyAddGameplayCueOnOwner(const FGameplayTag GameplayCueTag, UPARAM(ref) const FGameplayCueParameters& GameplayCueParameters);

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"), DisplayName = "Locally Remove Gameplay Cue On Owner")
	void LocallyRemoveGameplayCueOnOwner(const FGameplayTag GameplayCueTag);

	/**
	 * Returns if the Tag's stack in this ability component is more than OtherTag's stack
	 * Usually used for test the predicted removal tag.
	 * @param Tag The tag to check
	 * @param OtherTag The tag to compare
	 * @return if the Tag's stack in this ability component is more than OtherTag's stack
	 */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
	bool HasMoreTagStack(const FGameplayTag Tag, const FGameplayTag OtherTag);

	UFUNCTION(BlueprintCallable, Category = "GameplayCue", DisplayName = "Add Hit Result To Batched Gameplay Cue Parameter")
	void AddBatchGameplayCueParam_HitResult(const FGameplayTag BatchedCueTag, const FHitResult& HitResult);
	
	void Call_ReplicateBatchedGameplayCueParameters(const FGameplayTag& BatchedCueTag, FPredictionKey PredictionKey);
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_ReplicateBatchedGameplayCueParameters(const FGameplayTag& BatchedCueTag, FPredictionKey PredictionKey, const FBatchedGameplayCueParameterHandle& BatchedCueParams);
	void InvokeBatchedGameplayCueEvent(const FGameplayTag& BatchedCueTag);
	void ExecuteBatchedGameplayCue(const FGameplayTag& BatchedCueTag, const FBatchedGameplayCueParameterHandle& BatchedCueParams);
protected:
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	// UAbilitySystemComponent overrides
	virtual void OnGiveAbility(FGameplayAbilitySpec& AbilitySpec) override;
	// ~UAbilitySystemComponent overrides

	// InputTag internals
	UPROPERTY()
	TMap<FGameplayTag, FGameplayAbilitySpecHandleContainer> InputTagMapping;
	TMap<FGameplayAbilitySpecHandle, FGameplayAbilitySpecInputMeta> SpecInputMeta;
	// ~InputTag internals

	UPROPERTY()
	TMap<FGameplayTag, FBatchedGameplayCueParameterHandle> BatchedGameplayCueParams;
};
