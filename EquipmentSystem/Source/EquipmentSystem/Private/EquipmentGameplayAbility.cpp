// Copyright 2024 CrystalVapor


#include "EquipmentGameplayAbility.h"

#include "AbilitySystemGlobals.h"
#include "AbilitySystemLog.h"
#include "EquipmentInstance.h"
#include "EquipmentVisualActor.h"
#include "GameplayCueFunctionLibrary.h"

AEquipmentInstance* UEquipmentGameplayAbility::GetEquipmentInstance()
{
	return Cast<AEquipmentInstance>(GetCurrentSourceObject());
}

void UEquipmentGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);
	// Current Spec is invalid when Granting the ability, so we need to get the source object directly from the spec.
	AEquipmentInstance* Instance = Cast<AEquipmentInstance>(Spec.SourceObject);
	if(Instance)
	{
		Instance->OnEquipped.AddUObject(this, &UEquipmentGameplayAbility::OnInstanceEquipped);
		Instance->OnUnequipped.AddUObject(this, &UEquipmentGameplayAbility::OnInstanceUnequipped);
	}
}

void UEquipmentGameplayAbility::OnInstanceEquipped(AEquipmentInstance* Instance)
{
	if(bActivateOnEquip)
	{
		TryActivateAbility(*GetCurrentAbilitySpec());
	}
	if(ActivationLimit == EEquipmentAbilityActivationLimit::DeactivatedOnly)
	{
		CancelAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true);
	}
}

void UEquipmentGameplayAbility::OnInstanceUnequipped(AEquipmentInstance* Instance)
{
	if(bActivateOnUnequip)
	{
		TryActivateAbility(*GetCurrentAbilitySpec());
	}
	if(ActivationLimit == EEquipmentAbilityActivationLimit::ActivatedOnly)
	{
		CancelAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true);
	}
}

void UEquipmentGameplayAbility::ExecuteGameplayCueOnVisualActor(FGameplayTag GameplayCueTag,
																FGameplayCueParameters Parameters)
{
#if WITH_EDITOR
	if(!GameplayCueTag.MatchesTag(UGameplayTagsManager::Get().RequestGameplayTag(FName(TEXT("GameplayCue.Equipment")))))
	{
		ABILITY_LOG(Warning, TEXT("The Gameplay cue '%s' will not be route to equipment, since it must start with 'GameplayCue.Equipment'."), *GameplayCueTag.ToString());
	}
#endif
	UAbilitySystemComponent* const AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo_Checked();
	AbilitySystemComponent->ExecuteGameplayCue(GameplayCueTag, Parameters);
}

void UEquipmentGameplayAbility::AddGameplayCueOnVisualActor(FGameplayTag GameplayCueTag,
                                                            FGameplayCueParameters Parameters)
{
#if WITH_EDITOR
	if(!GameplayCueTag.MatchesTag(UGameplayTagsManager::Get().RequestGameplayTag(FName(TEXT("GameplayCue.Equipment")))))
	{
		ABILITY_LOG(Warning, TEXT("The Gameplay cue '%s' will not be route to equipment, since it must start with 'GameplayCue.Equipment'."), *GameplayCueTag.ToString());
	}
#endif
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	AbilitySystemComponent->AddGameplayCue(GameplayCueTag, Parameters);
}

void UEquipmentGameplayAbility::RemoveGameplayCueOnVisualActor(FGameplayTag GameplayCueTag)
{
#if WITH_EDITOR
	if(!GameplayCueTag.MatchesTag(UGameplayTagsManager::Get().RequestGameplayTag(FName(TEXT("GameplayCue.Equipment")))))
	{
		ABILITY_LOG(Warning, TEXT("The Gameplay cue '%s' will not be route to equipment, since it must start with 'GameplayCue.Equipment'."), *GameplayCueTag.ToString());
	}
#endif
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	AbilitySystemComponent->RemoveGameplayCue(GameplayCueTag);
}

void UEquipmentGameplayAbility::LocallyExecuteGameplayCueOnVisualActor(FGameplayTag GameplayCueTag,
	FGameplayCueParameters Parameters)
{
	LocallyExecuteGameplayCueOnOwner(GameplayCueTag, Parameters);
}

void UEquipmentGameplayAbility::LocallyAddGameplayCueOnVisualActor(FGameplayTag GameplayCueTag,
	FGameplayCueParameters Parameters)
{
	LocallyAddGameplayCueOnOwner(GameplayCueTag, Parameters);
}

void UEquipmentGameplayAbility::LocallyRemoveGameplayCueOnVisualActor(FGameplayTag GameplayCueTag)
{
	LocallyRemoveGameplayCueOnOwner(GameplayCueTag);
}

#if WITH_EDITOR
EDataValidationResult UEquipmentGameplayAbility::IsDataValid(TArray<FText>& ValidationErrors)
{
	EDataValidationResult Result = Super::IsDataValid(ValidationErrors);

	if(InstancingPolicy == EGameplayAbilityInstancingPolicy::NonInstanced)
	{
		ValidationErrors.Add(FText::FromString(TEXT("Equipment ability must be instanced")));
		Result = EDataValidationResult::Invalid;
	}

	return Result;
}
#endif
