// Copyright 2024 CrystalVapor


#include "Fragments/EquipmentFragment_ModifierBase.h"

void UEquipmentFragment_ModifierBase::HandleChildOutsideInitialize(AEquipmentInstance* Instance)
{
	Super::HandleChildOutsideInitialize(Instance);
	for(auto& Modifier: FloatModifiers)
	{
		UEquipmentFragment* Fragment = Instance->GetFragment(Modifier.TargetFragment);
		if(Fragment)
		{
			Fragment->RegisterModifier(Modifier);
		}
	}
	for(auto& Modifier: TagContainerModifiers)
	{
		UEquipmentFragment* Fragment = Instance->GetFragment(Modifier.TargetFragment);
		if(Fragment)
		{
			Fragment->RegisterModifier(Modifier);
		}
	}
	for(auto& Modifier: CurveModifiers)
	{
		UEquipmentFragment* Fragment = Instance->GetFragment(Modifier.TargetFragment);
		if(Fragment)
		{
			Fragment->RegisterModifier(Modifier);
		}
	}
}
