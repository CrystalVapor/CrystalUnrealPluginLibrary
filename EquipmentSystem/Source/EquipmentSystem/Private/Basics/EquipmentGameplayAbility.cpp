// Copyright 2024 CrystalVapor


#include "Basics/EquipmentGameplayAbility.h"

#include "AbilitySystemGlobals.h"
#include "AbilitySystemLog.h"
#include "Basics/EquipmentFeature.h"
#include "Basics/EquipmentInstance.h"
#include "Basics/EquipmentVisualActor.h"

AEquipmentInstance* UEquipmentGameplayAbility::GetEquipmentInstance()
{
	return Cast<AEquipmentInstance>(GetCurrentSourceObject());
}

bool UEquipmentGameplayAbility::K2_GetPropertyByFeatureName(
	const FName& FeatureName, FGameplayTag PropertyTag, int32& OutProperty)
{
	checkNoEntry();
	return false;
}

DEFINE_FUNCTION(UEquipmentGameplayAbility::execK2_GetPropertyByFeatureName)
{
	P_GET_STRUCT_REF(FName, FeatureName);
	P_GET_STRUCT(FGameplayTag, PropertyTag);
	UEquipmentGameplayAbility* Ability = Cast<UEquipmentGameplayAbility>(Stack.Object);
	Stack.MostRecentProperty = nullptr;
	Stack.StepCompiledIn<FStructProperty>(nullptr);
	void* PropertyPtr = Stack.MostRecentPropertyAddress;
	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	P_FINISH;
	P_NATIVE_BEGIN
	bool bSuccess = false;
	if(PropertyPtr&& StructProp)
	{
		bSuccess = InternalK2_GetPropertyByFeatureName(Ability, FeatureName, PropertyTag, PropertyPtr, StructProp);
	}
	*(bool*)RESULT_PARAM = bSuccess;
	P_NATIVE_END
}

bool UEquipmentGameplayAbility::InternalK2_GetPropertyByFeatureName(UEquipmentGameplayAbility* Ability,
	const FName& FeatureName, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType)
{
	AEquipmentInstance* Instance = Ability->GetEquipmentInstance();
	UEquipmentFeature* Feature = Instance->GetFeature<UEquipmentFeature>(FeatureName);
	if(!Feature)
	{
		return false;
	}
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(PropertyTag);
	FProperty* Property = Feature->GetPropertyReflectInfo(PropertyName);
	if(!Property)
	{
		return false;
	}
	Property->CopySingleValue(OutProperty, Property->ContainerPtrToValuePtr<void>(Feature));
	return true;
}

bool UEquipmentGameplayAbility::K2_GetPropertyByFeatureClass(
	TSubclassOf<UEquipmentFeature> FeatureClass, FGameplayTag PropertyTag, int32& OutProperty)
{
	checkNoEntry();
	return false;
}

DEFINE_FUNCTION(UEquipmentGameplayAbility::execK2_GetPropertyByFeatureClass)
{
	P_GET_OBJECT(UClass, FeatureClass);
	P_GET_STRUCT(FGameplayTag, PropertyTag);
	UEquipmentGameplayAbility* Ability = Cast<UEquipmentGameplayAbility>(Stack.Object);
	Stack.MostRecentProperty = nullptr;
	Stack.StepCompiledIn<FStructProperty>(nullptr);
	void* PropertyPtr = Stack.MostRecentPropertyAddress;
	FProperty* PropertyInfo = Stack.MostRecentProperty;
	P_FINISH;
	P_NATIVE_BEGIN
	bool bSuccess = false;
	if(PropertyPtr && PropertyInfo)
	{
		bSuccess = InternalK2_GetPropertyByFeatureClass(Ability, FeatureClass, PropertyTag, PropertyPtr, PropertyInfo);
	}
	*(bool*)RESULT_PARAM = bSuccess;
	P_NATIVE_END
}


bool UEquipmentGameplayAbility::InternalK2_GetPropertyByFeatureClass(UEquipmentGameplayAbility* Ability,
	TSubclassOf<UEquipmentFeature> FeatureClass, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType)
{
	AEquipmentInstance* Instance = Ability->GetEquipmentInstance();
	UEquipmentFeature* Feature = Instance->GetFeature<UEquipmentFeature>(FeatureClass);
	if(!Feature)
	{
		return false;
	}
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(PropertyTag);
	FProperty* Property = Feature->GetPropertyReflectInfo(PropertyName);
	if(!Property)
	{
		return false;
	}
	Property->CopySingleValue(OutProperty, Property->ContainerPtrToValuePtr<void>(Feature));
	return true;
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
