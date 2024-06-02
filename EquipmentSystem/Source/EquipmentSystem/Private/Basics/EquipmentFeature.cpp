// Copyright CrystalVapor 2024, All rights reserved.


#include "Basics/EquipmentFeature.h"

#include "Basics/EquipmentAbilitySet.h"
#include "Basics/EquipmentGameplayAbility.h"
#include "Utils/EquipmentSystemLogs.h"

UEquipmentFeature::UEquipmentFeature()
{
	SetIsReplicatedByDefault(true);
}

void UEquipmentFeature::BeginPlay()
{
	Super::BeginPlay();
	if(!GetOwner()->HasAuthority())
	{
		// we are client, notify instance that we are ready
		AEquipmentInstance* OwnerInstance = Cast<AEquipmentInstance>(GetOwner());
		if(OwnerInstance)
		{
			OwnerInstance->NotifyFeatureReplicated(GetFeatureName(), this);
		}
	}
}

void FEquipmentPropertyModifierAggregator::Apply(UEquipmentFeature* Feature, FProperty* PropertyToEdit)
{
	if(PropertyToEdit->IsA<FBoolProperty>())
	{
		bool* BoolValue = PropertyToEdit->ContainerPtrToValuePtr<bool>(Feature);
		Apply(BoolValue);
	}
	if(PropertyToEdit->IsA<FFloatProperty>())
	{
		float* FloatValue = PropertyToEdit->ContainerPtrToValuePtr<float>(Feature);
		Apply(FloatValue);
	}
}

void FEquipmentPropertyModifierAggregator::Apply(float* FloatValue)
{
	for(auto& Modifier: ModifierStack)
	{
		if(Modifier.Index%2 == 0)
		{
			*FloatValue += Modifier.FloatValue;
		}
		else
		{
			*FloatValue *= Modifier.FloatValue+1;
		}
	}
}

void FEquipmentPropertyModifierAggregator::Apply(bool* BoolValue)
{
	*BoolValue = ModifierStack.Last().BoolValue;
}

void FEquipmentPropertyModifierAggregator::AddToStack(const FEquipmentPropertyModifier& Modifier)
{
	if(Modifier.TargetPropertyType == EEquipmentPropertyType::Float)
	{
		AddToStack(Modifier.ValueToAdd, Modifier.ValueToAddPriority, Modifier.ValueToMultiply, Modifier.ValueToMultiplyPriority);
	}
	if(Modifier.TargetPropertyType == EEquipmentPropertyType::Bool)
	{
		AddToStack(Modifier.bBoolToOverride, Modifier.BoolToOverridePriority);
	}
}

void FEquipmentPropertyModifierAggregator::AddToStack(float ValueToAdd, int32 Priority1, float ValueToMultiply,
	int32 Priority2)
{
	FModifierStackItem& AddItem = FindOrAddModifierStackItem(Priority1*2);
	AddItem.FloatValue += ValueToAdd;
	FModifierStackItem& MultiplyItem = FindOrAddModifierStackItem(Priority2*2+1);
	MultiplyItem.FloatValue += ValueToMultiply;
}

void FEquipmentPropertyModifierAggregator::AddToStack(bool BoolValue, int32 Priority)
{
	FModifierStackItem& BoolItem = FindOrAddModifierStackItem(Priority);
	BoolItem.BoolValue = BoolValue;
}

void FEquipmentPropertyModifierAggregator::RemoveFromStack(const FEquipmentPropertyModifier& Modifier)
{
	if(Modifier.TargetPropertyType == EEquipmentPropertyType::Float)
	{
		RemoveFromStack(Modifier.ValueToAdd, Modifier.ValueToAddPriority, Modifier.ValueToMultiply, Modifier.ValueToMultiplyPriority);
	}
	if(Modifier.TargetPropertyType == EEquipmentPropertyType::Bool)
	{
		RemoveFromStack(Modifier.bBoolToOverride, Modifier.BoolToOverridePriority);
	}
}

void FEquipmentPropertyModifierAggregator::RemoveFromStack(float ValueToAdd, int32 Priority1, float ValueToMultiply,
	int32 Priority2)
{
	FModifierStackItem& AddItem = FindOrAddModifierStackItem(Priority1*2);
	AddItem.FloatValue -= ValueToAdd;
	if(FMath::IsNearlyZero(AddItem.FloatValue))
	{
		RemoveModifierStackItem(Priority1*2);
	}
	FModifierStackItem& MultiplyItem = FindOrAddModifierStackItem(Priority2*2+1);
	MultiplyItem.FloatValue -= ValueToMultiply;
	if(FMath::IsNearlyZero(MultiplyItem.FloatValue))
	{
		RemoveModifierStackItem(Priority2*2+1);
	}
}

void FEquipmentPropertyModifierAggregator::RemoveFromStack(bool BoolValue, int32 Priority)
{
	RemoveModifierStackItem(Priority);
}

FEquipmentPropertyModifierAggregator::FModifierStackItem& FEquipmentPropertyModifierAggregator::FindOrAddModifierStackItem(int32 Index)
{
	for(int i = 0; i<ModifierStack.Num(); i++)
	{
		if(ModifierStack[i].Index == Index)
		{
			return ModifierStack[i];
		}
		if(ModifierStack[i].Index > Index)
		{
			FModifierStackItem NewItem;
			NewItem.Index = Index;
			ModifierStack.Insert(NewItem, i);
			return ModifierStack[i];
		}
	}
	FModifierStackItem NewItem;
	NewItem.Index = Index;
	ModifierStack.Add(NewItem);
	return ModifierStack.Last();
}

void FEquipmentPropertyModifierAggregator::RemoveModifierStackItem(int32 Index)
{
	int IndexToRemove = -1;
	for(int i = 0; i<ModifierStack.Num(); i++)
	{
		if(ModifierStack[i].Index == Index)
		{
			IndexToRemove = i;
			break;
		}
	}
	if(IndexToRemove != -1)
	{
		ModifierStack.RemoveAt(IndexToRemove);
	}
}

void FEquipmentPropertyModifierAggregatorContainer::RegisterModifier(const FName FeatureName, const FName ModifierName,
                                                                     const FEquipmentPropertyModifier& Modifier)
{
	FEquipmentPropertyModifierHandle ModifierHandle;
	ModifierHandle.FeatureName = FeatureName;
	ModifierHandle.ModifierName = ModifierName;
	if(RegisteredModifiers.Contains(ModifierHandle))
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Modifier named \"%s\" is already registered in feature named \"%s\""), *ModifierName.ToString(), *FeatureName.ToString());
		return;
	}
	RegisteredModifiers.Add(ModifierHandle);
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(Modifier.PropertyTag);
	AggregatorsPerProperty.FindOrAdd(PropertyName).AddToStack(Modifier);
}

void FEquipmentPropertyModifierAggregatorContainer::UnregisterModifier(const FName FeatureName,
                                                                       const FName ModifierName, const FEquipmentPropertyModifier& Modifier)
{
	FEquipmentPropertyModifierHandle ModifierHandle;
	ModifierHandle.FeatureName = FeatureName;
	ModifierHandle.ModifierName = ModifierName;
	if(!RegisteredModifiers.Contains(ModifierHandle))
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Modifier named \"%s\" is not registered in feature named \"%s\""), *ModifierName.ToString(), *FeatureName.ToString());
		return;
	}
	RegisteredModifiers.Remove(ModifierHandle);
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(Modifier.PropertyTag);
	AggregatorsPerProperty.FindOrAdd(PropertyName).RemoveFromStack(Modifier);
}

void FEquipmentPropertyModifierAggregatorContainer::ResetFeature(UEquipmentFeature* Feature)
{
	TArray<FName> ModifiedProperties;
	AggregatorsPerProperty.GetKeys(ModifiedProperties);
	UClass* FeatureClass = Feature->GetClass();
	UEquipmentFeature* DefaultFeature = FeatureClass->GetDefaultObject<UEquipmentFeature>();
	for(auto& PropertyName: ModifiedProperties)
	{
		FProperty* Property = DefaultFeature->GetPropertyReflectInfo(PropertyName);
		if(Property)
		{
			// Reset the property to its default value
			void* PropertyData = Property->ContainerPtrToValuePtr<void>(Feature);
			Property->InitializeValue(PropertyData);
		}
		else
		{
			UE_LOG(LogEquipmentSystem, Warning, TEXT("Property named \"%s\" does not exist in feature named \"%s\""), *PropertyName.ToString(), *Feature->GetFeatureName().ToString());
		}
	}
}

void FEquipmentPropertyModifierAggregatorContainer::ApplyModifiersToFeature(UEquipmentFeature* Feature)
{
	for(auto& AggregatorPair: AggregatorsPerProperty)
	{
		const FName& PropertyName = AggregatorPair.Key;
		FEquipmentPropertyModifierAggregator& Aggregator = AggregatorPair.Value;
		FProperty* Property = Feature->GetPropertyReflectInfo(PropertyName);
		if(Property)
		{
			Aggregator.Apply(Feature, Property);
		}
		else
		{
			UE_LOG(LogEquipmentSystem, Warning, TEXT("Property named \"%s\" does not exist in feature named \"%s\""), *PropertyName.ToString(), *Feature->GetFeatureName().ToString());
		}
	}
}

FName UEquipmentFeature::GetFeatureName() const
{
	return GetClass()->GetFName();
}

const TArray<FEquipmentVisualActorAction>& UEquipmentFeature::GetVisualActorActions() const
{return GetClass()->GetDefaultObject<UEquipmentFeature>()->VisualActorActions;}

const TArray<FEquipmentPropertyModifier>& UEquipmentFeature::GetPropertyModifiers() const
{return GetClass()->GetDefaultObject<UEquipmentFeature>()->PropertyModifiersOwned;}

const TArray<UEquipmentAbilitySet*>& UEquipmentFeature::GetAbilitySets() const
{
	return GetClass()->GetDefaultObject<UEquipmentFeature>()->AbilitySets;
}

const FEquipmentPropertyModifier* UEquipmentFeature::GetPropertyModifierOwnedByFeature(FName ModifierName) const
{
	const auto& DefaultPropertyModifiers = GetPropertyModifiers();
	for(auto& Modifier: DefaultPropertyModifiers)
	{
		if(Modifier.ModifierName == ModifierName)
		{
			return &Modifier;
		}
	}
	return nullptr;
}

void UEquipmentFeature::ApplyRegisteredPropertyModifiers(bool bResetFeatureBeforeApply)
{
	if(bResetFeatureBeforeApply)
	{
		ModifierAggregatorContainer.ResetFeature(this);
	}
	ModifierAggregatorContainer.ApplyModifiersToFeature(this);
}

void UEquipmentFeature::RegisterModifier(const FEquipmentPropertyModifierHandle& ModifierHandle)
{
	RegisterModifier(ModifierHandle.FeatureName, ModifierHandle.ModifierName);
}

void UEquipmentFeature::RegisterModifier(const FName InFeatureName, const FName ModifierName)
{
	const FEquipmentPropertyModifier* Modifier = UEquipmentSystemGlobal::GetPropertyModifier(InFeatureName, ModifierName);
    if(Modifier)
    {
    	ModifierAggregatorContainer.RegisterModifier(InFeatureName, ModifierName, *Modifier);
    }
    else
    {
    	UE_LOG(LogEquipmentSystem, Warning, TEXT("Modifier named \"%s\" does not exist in feature named \"%s\""), *ModifierName.ToString(), *InFeatureName.ToString());
    }
}

void UEquipmentFeature::UnregisterModifier(const FEquipmentPropertyModifierHandle& ModifierHandle)
{
	UnregisterModifier(ModifierHandle.FeatureName, ModifierHandle.ModifierName);
}

void UEquipmentFeature::UnregisterModifier(const FName InFeatureName, const FName ModifierName)
{
	const FEquipmentPropertyModifier* Modifier = UEquipmentSystemGlobal::GetPropertyModifier(InFeatureName, ModifierName);
	if(Modifier)
	{
		ModifierAggregatorContainer.UnregisterModifier(InFeatureName, ModifierName, *Modifier);
	}
	else
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Modifier named \"%s\" does not exist in feature named \"%s\""), *ModifierName.ToString(), *InFeatureName.ToString());
	}
}

void UEquipmentFeature::NotifyFullySpawnedOrReplicated()
{
}

bool UEquipmentFeature::K2_GetProperty(FGameplayTag PropertyTag, int32& OutProperty)
{
	// this should not be called directly.
	checkNoEntry()
	return false;
}

DEFINE_FUNCTION(UEquipmentFeature::execK2_GetProperty)
{
	P_GET_STRUCT(FGameplayTag, PropertyTag);
	UEquipmentFeature* OwnerFeature = Cast<UEquipmentFeature>(Stack.Object);
	Stack.MostRecentProperty = nullptr;
	Stack.StepCompiledIn<FStructProperty>(nullptr);
	void* PropertyPtr = Stack.MostRecentPropertyAddress;
	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	P_FINISH;
	P_NATIVE_BEGIN
	bool bSuccess = false;
	if(PropertyPtr&& StructProp)
	{
		bSuccess = InternalK2_GetProperty(OwnerFeature, PropertyTag, PropertyPtr, StructProp);
	}
	*(bool*)RESULT_PARAM = bSuccess;
	P_NATIVE_END
}

bool UEquipmentFeature::InternalK2_GetProperty(UEquipmentFeature* Feature, FGameplayTag PropertyTag, void* OutProperty,
	FProperty* PropertyType)
{
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(PropertyTag);
	FProperty* Property = Feature->GetPropertyReflectInfo(PropertyName);
	if(!Property)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("GetProperty: Property named \"%s\" does not exist in feature named \"%s\""), *PropertyName.ToString(), *Feature->GetFeatureName().ToString());
		return false;
	}
	if(Property->GetClass()!=PropertyType->GetClass())
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("GetProperty: Property type mismatch. Expected %s, but got %s"), *PropertyType->GetClass()->GetName(), *Property->GetClass()->GetName());
		return false;
	}
	Property->CopySingleValue(OutProperty, Property->ContainerPtrToValuePtr<void>(Feature));
	return true;
}


FProperty* UEquipmentFeature::GetPropertyReflectInfo(FGameplayTag PropertyTag) const
{
	return GetPropertyReflectInfo(UEquipmentSystemGlobal::GetPropertyName(PropertyTag));
}

FProperty* UEquipmentFeature::GetPropertyReflectInfo(FName PropertyName) const
{
	return GetClass()->FindPropertyByName(PropertyName);
}

#if WITH_EDITOR
void UEquipmentFeature::PostCDOContruct()
{
	Super::PostCDOContruct();
	UEquipmentSystemGlobal::GetDisplayAbilitySetRequirement(GetClass(), AbilitySetRequirements);
}

EDataValidationResult UEquipmentFeature::IsDataValid(TArray<FText>& ValidationErrors)
{
	EDataValidationResult DataValidationResult = Super::IsDataValid(ValidationErrors);
	TArray<FText> FailedMessages;
	bool bIsValid = UEquipmentSystemGlobal::ValidateFeatureAbilityRequirements(GetClass()->GetFName(), AbilitySets, FailedMessages);
	if(!bIsValid)
	{
		DataValidationResult = EDataValidationResult::Invalid;
		ValidationErrors.Append(FailedMessages);
	}
	return DataValidationResult;
}
#endif


