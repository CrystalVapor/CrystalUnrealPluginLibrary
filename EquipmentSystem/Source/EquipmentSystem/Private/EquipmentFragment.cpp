// Copyright 2024 CrystalVapor


#include "EquipmentFragment.h"

FFragmentRegisteredModifier& FFragmentRegisteredModifier::Append(const FFragmentRegisteredModifier& Other)
{
	if(PropertyTag != Other.PropertyTag)
	{
		return *this;
	}
	Adder += Other.Adder;
	Multiplier += Other.Multiplier - 1;
	AddTags.AppendTags(Other.AddTags);
	RemoveTags.AppendTags(Other.RemoveTags);
	if(Other.CurvePriority > CurvePriority)
	{
		Curve = Other.Curve;
		CurvePriority = Other.CurvePriority;
	}
	return *this;
}

void FFragmentRegisteredModifier::Apply(float& Value)
{
	Value*=Multiplier;
	Value+=Adder;
}

void FFragmentRegisteredModifier::Apply(FRuntimeFloatCurve& InCurve)
{
	if(Curve)
	{
		InCurve = *Curve;
	}
}

void FFragmentRegisteredModifier::Apply(FGameplayTagContainer& Tags)
{
	Tags.RemoveTags(RemoveTags);
	Tags.AppendTags(AddTags);
}


FFragmentRegisteredModifierContainer& FFragmentRegisteredModifierContainer::Append(
	const FFragmentRegisteredModifierContainer& Other)
{
	for(const FFragmentRegisteredModifier& Modifier : Other.Modifiers)
	{
		Append(Modifier);
	}
	return *this;
}

FFragmentRegisteredModifierContainer& FFragmentRegisteredModifierContainer::Append(
	const FFragmentRegisteredModifier& Other)
{
	for(auto& Modifier : Modifiers)
	{
		if(Modifier.PropertyTag == Other.PropertyTag)
		{
			Modifier.Append(Other);
			return *this;
		}
	}
	FFragmentRegisteredModifier NewModifier = Other;
	Modifiers.Add(NewModifier);
	return *this;
}

bool UEquipmentFragment::HasProperty(FGameplayTag PropertyTag) const
{
	return PropertyTags.HasTagExact(PropertyTag);
}

const float& UEquipmentFragment::GetFloatProperty(FGameplayTag PropertyTag)
{
	return InternalGetFloatProperty(PropertyTag);
}

const FRuntimeFloatCurve& UEquipmentFragment::GetCurveProperty(FGameplayTag PropertyTag)
{
	return InternalGetCurveProperty(PropertyTag);
}

const FGameplayTagContainer& UEquipmentFragment::GetTagContainerProperty(FGameplayTag PropertyTag)
{
	return InternalGetTagContainerProperty(PropertyTag);
}

void UEquipmentFragment::NotifyStartInsideInitialize(AEquipmentInstance* Instance,
                                                     FSimpleDelegate* InstanceNotifyDelegate)
{
	InstanceNotifyDelegate_InsideInitialized = InstanceNotifyDelegate;
	HandleChildInsideInitialize(Instance);
	CheckInsideInitializationFinished();
}

void UEquipmentFragment::NotifyStartOutsideInitialize(AEquipmentInstance* Instance,
	FSimpleDelegate* InstanceNotifyDelegate)
{
	InstanceNotifyDelegate_OnOutsideInitialized = InstanceNotifyDelegate;
	HandleChildOutsideInitialize(Instance);
	CheckOutsideInitializationFinished();
}

void UEquipmentFragment::NotifyStartRuminativeInitialize(AEquipmentInstance* Instance,
	FSimpleDelegate* InstanceNotifyDelegate)
{
	InstanceNotifyDelegate_OnRuminativeInitialized = InstanceNotifyDelegate;
	PerformModifiers();
	HandleChildRuminativeInitialize(Instance);
	AsyncLoadAssets();
	CheckRuminativeInitializationFinished();
}

void UEquipmentFragment::NotifyStartFinalInitialize(AEquipmentInstance* Instance,
	FSimpleDelegate* InstanceNotifyDelegate)
{
	InstanceNotifyDelegate_OnFinialInitialized = InstanceNotifyDelegate;
	HandleChildFinialInitialize(Instance);
	CheckFinialInitializationFinished();
}

void UEquipmentFragment::CheckInsideInitializationFinished()
{
	HandleInsideInitialized();
}

void UEquipmentFragment::CheckOutsideInitializationFinished()
{
	HandleOutsideInitialized();
}

void UEquipmentFragment::CheckRuminativeInitializationFinished()
{
	bool bAssetsFullyLoaded = true;
	CheckAssetsFullyLoaded(bAssetsFullyLoaded);
	if(bAssetsFullyLoaded)
	{
		HandleRuminativeInitialized();
	}
}

void UEquipmentFragment::CheckFinialInitializationFinished()
{
	HandleFinialInitialized();
}

void UEquipmentFragment::NotifyInstanceUninitialized()
{
	bIsInsideInitialized = false;
	bIsOutsideInitialized = false;
	bIsRuminativeInitialized = false;
	bIsFinialInitialized = false;
}

void UEquipmentFragment::RegisterModifier(FFragmentRegisteredModifier Modifier)
{
	Modifiers.Append(Modifier);
}

void UEquipmentFragment::PerformModifiers()
{
	for(auto& FloatPropertyPair : FloatPropertyGetters)
	{
		float& Property = FloatPropertyPair.Value.Execute();
		for(auto& Modifier : Modifiers.Modifiers)
		{
			if(Modifier.PropertyTag.MatchesTagExact(FloatPropertyPair.Key))
			{
				Modifier.Apply(Property);
			}
		}
	}
	for(auto& CurvePropertyPair : CurvePropertyGetters)
	{
		FRuntimeFloatCurve& Property = CurvePropertyPair.Value.Execute();
		for(auto& Modifier : Modifiers.Modifiers)
		{
			if(Modifier.PropertyTag.MatchesTagExact(CurvePropertyPair.Key))
			{
				Modifier.Apply(Property);
			}
		}
	}
	for(auto& TagPropertyPair : TagContainerPropertyGetters)
	{
		FGameplayTagContainer& Property = TagPropertyPair.Value.Execute();
		for(auto& Modifier : Modifiers.Modifiers)
		{
			if(Modifier.PropertyTag.MatchesTagExact(TagPropertyPair.Key))
			{
				Modifier.Apply(Property);
			}
		}
	}
}

float& UEquipmentFragment::InternalGetFloatProperty(FGameplayTag PropertyTag)
{
	return FloatPropertyGetters.FindChecked(PropertyTag).Execute();
}

FRuntimeFloatCurve& UEquipmentFragment::InternalGetCurveProperty(FGameplayTag PropertyTag)
{
	return CurvePropertyGetters.FindChecked(PropertyTag).Execute();
}

FGameplayTagContainer& UEquipmentFragment::InternalGetTagContainerProperty(FGameplayTag PropertyTag)
{
	return TagContainerPropertyGetters.FindChecked(PropertyTag).Execute();
}

