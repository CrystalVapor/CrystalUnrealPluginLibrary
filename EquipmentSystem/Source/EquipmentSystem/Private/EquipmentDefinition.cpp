// Copyright 2024 CrystalVapor


#include "EquipmentDefinition.h"

#include "Features/EquipmentFeature_LimitedFeature.h"

void UEquipmentDefinition::GetFeatureData(const FGameplayTagContainer& FeatureTags,
                                          FEquipmentFeatureData& OutFeatureData) const
{
	for(auto& Feature:Features)
	{
		Feature->GetFeatures(FeatureTags, OutFeatureData);
	}
}
#if WITH_EDITOR
void UEquipmentDefinition::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if(PropertyChangedEvent.GetMemberPropertyName() == GET_MEMBER_NAME_CHECKED(UEquipmentDefinition, Features)
		&& PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
	{
		for(auto& Feature:Features)
		{
			if(Feature.IsA(UEquipmentFeature_LimitedFeature::StaticClass()))
			{
				UEquipmentFeature_LimitedFeature* EquipmentFeature_LimitedFeature = Cast<UEquipmentFeature_LimitedFeature>(Feature);
				if(EquipmentFeature_LimitedFeature && EquipmentFeature_LimitedFeature->bDetailsUnlocked)
				{
					EquipmentFeature_LimitedFeature->LockFeatureDetails();
					EquipmentFeature_LimitedFeature->SyncWithCDO();
				}
			}
		}
	}
}

EDataValidationResult UEquipmentDefinition::IsDataValid(TArray<FText>& ValidationErrors)
{
	EDataValidationResult DataValidationResult = Super::IsDataValid(ValidationErrors);
	TSet<TSubclassOf<UEquipmentFeature>> FeatureSet;
	for(auto& Feature:Features)
	{
		FeatureSet.Add(Feature.GetClass());
	}
	for(auto& Feature:Features)
	{
		EDataValidationResult IsDataValid = Feature->IsDataValid(ValidationErrors);
		if(Feature->IsA(UEquipmentFeature_LimitedFeature::StaticClass()))
		{
			FString FailedString;
			if(!Cast<UEquipmentFeature_LimitedFeature>(Feature)->CheckDependencyFeature(FeatureSet, FailedString))
			{
				IsDataValid = EDataValidationResult::Invalid;
				ValidationErrors.Add(FText::FromString(FailedString));
			}
		}
		if(IsDataValid == EDataValidationResult::Invalid)
		{
			DataValidationResult = EDataValidationResult::Invalid;
		}
	}
	return DataValidationResult;
}
#endif