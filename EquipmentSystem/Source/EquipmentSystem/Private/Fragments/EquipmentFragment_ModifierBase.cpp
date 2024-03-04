// Copyright 2024 CrystalVapor


#include "Fragments/EquipmentFragment_ModifierBase.h"

#include "EquipmentInstance.h"

void UEquipmentFragment_ModifierBase::HandleChildOutsideInitialize(AEquipmentInstance* Instance)
{
	Super::HandleChildOutsideInitialize(Instance);
	for(auto& Modifier: FloatModifiers)
	{
		UEquipmentFragment* Fragment = Instance->GetFragment(Modifier.TargetFragment);
		if(Fragment)
		{
			Fragment->RegisterModifier(Modifier.MakeModifier());
		}
	}
	for(auto& Modifier: TagContainerModifiers)
	{
		UEquipmentFragment* Fragment = Instance->GetFragment(Modifier.TargetFragment);
		if(Fragment)
		{
			Fragment->RegisterModifier(Modifier.MakeModifier());
		}
	}
	for(auto& Modifier: CurveModifiers)
	{
		UEquipmentFragment* Fragment = Instance->GetFragment(Modifier.TargetFragment);
		if(Fragment)
		{
			Fragment->RegisterModifier(Modifier.MakeModifier());
		}
	}
}
