// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "ExpandedGameplayAbility.h"
#include "EquipmentGameplayAbility.generated.h"

class AEquipmentInstance;

UENUM()
enum class EEquipmentAbilityActivationLimit:uint8
{
	None,
	ActivatedOnly,
	DeactivatedOnly,
};

/**
 * 
 */
UCLASS()
class EQUIPMENTSYSTEM_API UEquipmentGameplayAbility : public UExpandedGameplayAbility
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	AEquipmentInstance* GetEquipmentInstance();

	template<class T>
	T* GetEquipmentFragment();

	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

	virtual void OnInstanceEquipped(AEquipmentInstance* Instance);
	virtual void OnInstanceUnequipped(AEquipmentInstance* Instance);

	/**
	 * Execute a gameplay cue on the visual actor associated with the equipment instance.
	 * *Note* The GameplayCue tag must be started with "GameplayCue.Equipment." to be routed to the visual actor.
	 * @param GameplayCueTag The tag of the gameplay cue to execute.
	 * @param Parameters The parameters to pass to the gameplay cue.
	 * @note This Function actually just execute gameplay cue one the avatar actor of the Equipment's associated ASC.
	 */
	UFUNCTION(BlueprintCallable, DisplayName = "Execute Gameplay Cue On Visual Actor (Burst)", Category = "Equipment|GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"))
	void ExecuteGameplayCueOnVisualActor(FGameplayTag GameplayCueTag, FGameplayCueParameters Parameters);

	/**
	 * Add a gameplay cue on the visual actor associated with the equipment instance.
	 * *Note* The GameplayCue tag must be started with "GameplayCue.Equipment." to be routed to the visual actor.
	 * @param GameplayCueTag The tag of the gameplay cue to execute.
	 * @param Parameters The parameters to pass to the gameplay cue.
	 * @note This Function actually just add a gameplay cue one the avatar actor of the Equipment's associated ASC.
	 */
	UFUNCTION(BlueprintCallable, DisplayName = "Add Gameplay Cue On Visual Actor (Looping)", Category = "Equipment|GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"))
	void AddGameplayCueOnVisualActor(FGameplayTag GameplayCueTag, FGameplayCueParameters Parameters);

	/**
	 * Remove a gameplay cue on the visual actor associated with the equipment instance.
	 * *Note* The GameplayCue tag must be started with "GameplayCue.Equipment." to be routed to the visual actor.
	 * @param GameplayCueTag The tag of the gameplay cue to execute.
	 * @note This Function actually just remove a gameplay cue one the avatar actor of the Equipment's associated ASC.
	 */
	UFUNCTION(BlueprintCallable, DisplayName = "Remove Gameplay Cue On Visual Actor (Looping)", Category = "Equipment|GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"))
	void RemoveGameplayCueOnVisualActor(FGameplayTag GameplayCueTag);
	/**
	 * Execute a gameplay cue on the visual actor associated with the equipment instance.
	 * *Note* The GameplayCue tag must be started with "GameplayCue.Equipment." to be routed to the visual actor.
	 * This function will only execute the gameplay cue on the local client.
	 * @param GameplayCueTag The tag of the gameplay cue to execute.
	 * @param Parameters The parameters to pass to the gameplay cue.
	 * @note This Function actually just execute gameplay cue one the avatar actor of the Equipment's associated ASC.
	 */
	UFUNCTION(BlueprintCallable, DisplayName = "Locally Execute Gameplay Cue On Visual Actor (Burst)", Category = "Equipment|GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"))
	void LocallyExecuteGameplayCueOnVisualActor(FGameplayTag GameplayCueTag, FGameplayCueParameters Parameters);

	/**
	 * Add a gameplay cue on the visual actor associated with the equipment instance.
	 * *Note* The GameplayCue tag must be started with "GameplayCue.Equipment." to be routed to the visual actor.
	* This function will only execute the gameplay cue on the local client.
	 * @param GameplayCueTag The tag of the gameplay cue to execute.
	 * @param Parameters The parameters to pass to the gameplay cue.
	 * @note This Function actually just add a gameplay cue one the avatar actor of the Equipment's associated ASC.
	 */
	UFUNCTION(BlueprintCallable, DisplayName = "Locally Add Gameplay Cue On Visual Actor (Looping)", Category = "Equipment|GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"))
	void LocallyAddGameplayCueOnVisualActor(FGameplayTag GameplayCueTag, FGameplayCueParameters Parameters);

	/**
	 * Remove a gameplay cue on the visual actor associated with the equipment instance.
	 * *Note* The GameplayCue tag must be started with "GameplayCue.Equipment." to be routed to the visual actor.
	 * This function will only execute the gameplay cue on the local client.
	 * @param GameplayCueTag The tag of the gameplay cue to execute.
	 * @note This Function actually just remove a gameplay cue one the avatar actor of the Equipment's associated ASC.
	 */
	UFUNCTION(BlueprintCallable, DisplayName = "Locally Remove Gameplay Cue On Visual Actor (Looping)", Category = "Equipment|GameplayCue", Meta = (GameplayTagFilter = "GameplayCue"))
	void LocallyRemoveGameplayCueOnVisualActor(FGameplayTag GameplayCueTag);
	
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(TArray<FText>& ValidationErrors) override;
#endif
	
protected:
	UPROPERTY(EditDefaultsOnly)
	EEquipmentAbilityActivationLimit ActivationLimit = EEquipmentAbilityActivationLimit::None;

	UPROPERTY(EditDefaultsOnly)
	bool bActivateOnEquip = false;
	UPROPERTY(EditDefaultsOnly)
	bool bActivateOnUnequip = false;
};

template <class T>
T* UEquipmentGameplayAbility::GetEquipmentFragment()
{
	AEquipmentInstance* Instance = GetEquipmentInstance();
	if (Instance)
	{
		return Instance->GetFragment<T>();
	}
	return nullptr;
}
