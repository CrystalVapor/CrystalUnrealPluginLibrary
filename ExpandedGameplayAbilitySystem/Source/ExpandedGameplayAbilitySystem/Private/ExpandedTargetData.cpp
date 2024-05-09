// Copyright CrystalVapor 2024, All rights reserved.


#include "ExpandedTargetData.h"

int32 FGameplayAbilityTargetData_HitResultWithInt::GetIntValue(const FGameplayAbilityTargetDataHandle& TargetData,
                                                               int32 Index)
{
	FGameplayAbilityTargetData_HitResultWithInt* GameplayAbilityTargetData_HitResultWithInt =
		reinterpret_cast<FGameplayAbilityTargetData_HitResultWithInt*>(TargetData.Data[Index].Get());
	return GameplayAbilityTargetData_HitResultWithInt ? GameplayAbilityTargetData_HitResultWithInt->IntValue : 0;
}

UScriptStruct* FGameplayAbilityTargetData_HitResultWithInt::GetScriptStruct() const
{
	return FGameplayAbilityTargetData_HitResultWithInt::StaticStruct();
}

bool FGameplayAbilityTargetData_HitResultWithInt::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	Ar<<IntValue;
	return HitResult.NetSerialize(Ar, Map, bOutSuccess);
}
