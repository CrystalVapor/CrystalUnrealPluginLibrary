// Copyright 2024 CrystalVapor


#include "Features/EquipmentFeature_LimitedFeature.h"

#include "EquipmentDefinition.h"

bool UEquipmentFeature_LimitedFeature::CheckDependencyFeature(const TSet<TSubclassOf<UEquipmentFeature>> Features,
                                                              FString& OutFailedString) const
{
	for(auto& DepencyFeature:DependencyFeatures)
	{
		if(!Features.Contains(DepencyFeature))
		{
			OutFailedString = FString::Printf(TEXT("DependencyFeature %s for Feature %s is not found"), *DepencyFeature->GetName(), *GetName());
			return false;
		}
	}
	return true;
}

void UEquipmentFeature_LimitedFeature::UnlockFeatureDetails()
{
	bDetailsUnlocked = true;
	for(auto& Fragment:LimitedFragment)
	{
		Fragment.UnlockFeature = true;
	}
	for(auto& Ability:LimitedAbilityList)
	{
		Ability.UnlockFeature = true;
	}
	for(auto& Effect:LimitedEffectList)
	{
		Effect.UnlockFeature = true;
	}
	for(auto& AttributeSet:LimitedAttributeSetList)
	{
		AttributeSet.UnlockFeature = true;
	}
}

void UEquipmentFeature_LimitedFeature::LockFeatureDetails()
{
	bDetailsUnlocked = false;
	for(auto& Fragment:LimitedFragment)
	{
		Fragment.UnlockFeature = false;
	}
	for(auto& Ability:LimitedAbilityList)
	{
		Ability.UnlockFeature = false;
	}
	for(auto& Effect:LimitedEffectList)
	{
		Effect.UnlockFeature = false;
	}
	for(auto& AttributeSet:LimitedAttributeSetList)
	{
		AttributeSet.UnlockFeature = false;
	}
}

void UEquipmentFeature_LimitedFeature::SyncWithCDO()
{
	UEquipmentFeature_LimitedFeature* CDOFeature = GetCDOFeature();
	for(int i =0;i<CDOFeature->LimitedFragment.Num();i++)
	{
		LimitedFragment[i].RequiredFragmentClass = CDOFeature->LimitedFragment[i].RequiredFragmentClass;
	}
	for(int i =0;i<CDOFeature->LimitedAbilityList.Num();i++)
	{
		LimitedAbilityList[i].RequiredAbilityClass = CDOFeature->LimitedAbilityList[i].RequiredAbilityClass;
	}
	for(int i =0;i<CDOFeature->LimitedEffectList.Num();i++)
	{
		LimitedEffectList[i].RequiredEffectClass = CDOFeature->LimitedEffectList[i].RequiredEffectClass;
	}
	for(int i =0;i<CDOFeature->LimitedAttributeSetList.Num();i++)
	{
		LimitedAttributeSetList[i].RequiredAttributeSetClass = CDOFeature->LimitedAttributeSetList[i].RequiredAttributeSetClass;
	}
}

#if WITH_EDITOR
void UEquipmentFeature_LimitedFeature::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if(!bDetailsUnlocked)
	{
		LockFeatureDetails();
	}
	else
	{
		UnlockFeatureDetails();
	}
}

EDataValidationResult UEquipmentFeature_LimitedFeature::IsDataValid(TArray<FText>& ValidationErrors)
{
	EDataValidationResult Result = Super::IsDataValid(ValidationErrors);

	if(LimitedFragment.Num()!= GetCDOFeature()->LimitedFragment.Num())
	{
		ValidationErrors.Add(FText::FromString(TEXT("LimitedFragment Num is not equal to CDO")));
		Result = EDataValidationResult::Invalid;
	}
	for(int32 i = 0; i < LimitedFragment.Num(); i++)
    {
     	if(LimitedFragment[i].IsDataValid(ValidationErrors) == EDataValidationResult::Invalid)
     	{
     		Result = EDataValidationResult::Invalid;
     	}
    }
	if(LimitedAbilityList.Num()!= GetCDOFeature()->LimitedAbilityList.Num())
	{
		ValidationErrors.Add(FText::FromString(TEXT("LimitedAbilityList Num is not equal to CDO")));
		Result = EDataValidationResult::Invalid;
	}
	for(int32 i = 0; i < LimitedAbilityList.Num(); i++)
    {
     	if(LimitedAbilityList[i].IsDataValid(ValidationErrors) == EDataValidationResult::Invalid)
     	{
     		Result = EDataValidationResult::Invalid;
     	}
    }
	if(LimitedEffectList.Num()!= GetCDOFeature()->LimitedEffectList.Num())
	{
		ValidationErrors.Add(FText::FromString(TEXT("LimitedEffectList Num is not equal to CDO")));
		Result = EDataValidationResult::Invalid;
	}
	for(int32 i = 0; i < LimitedEffectList.Num(); i++)
    {
    	if(LimitedEffectList[i].IsDataValid(ValidationErrors) == EDataValidationResult::Invalid)
    	{
    		Result = EDataValidationResult::Invalid;
    	}
    }
	if(LimitedAttributeSetList.Num()!= GetCDOFeature()->LimitedAttributeSetList.Num())
	{
		ValidationErrors.Add(FText::FromString(TEXT("LimitedAttributeSetList Num is not equal to CDO")));
		Result = EDataValidationResult::Invalid;
	}
	for(int32 i = 0; i < LimitedAttributeSetList.Num(); i++)
	{
		if(LimitedAttributeSetList[i].IsDataValid(ValidationErrors) == EDataValidationResult::Invalid)
		{
			Result = EDataValidationResult::Invalid;
		}
	}
	return Result;
}

#endif

void UEquipmentFeature_LimitedFeature::GetFeaturesConditional(const FGameplayTagContainer& FeatureTags,
                                                              FEquipmentFeatureData& OutFeatures) const
{
	Super::GetFeaturesConditional(FeatureTags, OutFeatures);
	for(auto& LimitedFragmentEntry:LimitedFragment)
	{
		OutFeatures.FragmentClasses.Add(LimitedFragmentEntry.FragmentClass);
	}
	OutFeatures.AbilityGrantSources.Add(const_cast<UEquipmentFeature_LimitedFeature*>(this));
}

void UEquipmentFeature_LimitedFeature::GiveToAbilitySystem(UExpandedAbilitySystemComponent* AbilitySystemComponent,
	UObject* SourceObject, FExpandedAbilityGrantSource_GrantHandle& GrantHandle)
{
	for(auto& LimitedAbilityEntry : LimitedAbilityList)
	{
		GiveAbilityToAbilitySystem(AbilitySystemComponent, SourceObject, GrantHandle, LimitedAbilityEntry);
	}
	for(auto& LimitedEffectEntry : LimitedEffectList)
	{
		GiveEffectToAbilitySystem(AbilitySystemComponent, GrantHandle, LimitedEffectEntry);
	}
	for(auto& LimitedAttributeSetEntry : LimitedAttributeSetList)
	{
		GiveAttributeSetToAbilitySystem(AbilitySystemComponent, GrantHandle, LimitedAttributeSetEntry);
	}
}
