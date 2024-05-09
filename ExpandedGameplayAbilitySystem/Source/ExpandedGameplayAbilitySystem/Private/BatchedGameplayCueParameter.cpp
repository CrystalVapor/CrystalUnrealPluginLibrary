// Copyright CrystalVapor 2024, All rights reserved.


#include "BatchedGameplayCueParameter.h"

#include "AbilitySystemLog.h"

struct FBatchedGameplayCueParameterDeleter
{
	FORCEINLINE void operator()(FBatchedGameplayCueParameter* Object) const
	{
		check(Object);
		UScriptStruct* ScriptStruct = Object->GetScriptStruct();
		check(ScriptStruct)
		ScriptStruct->DestroyStruct(Object);
		FMemory::Free(Object);
	}
};

bool FBatchedGameplayCueParameterHandle::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	uint8 DataNum;
	if(Ar.IsSaving())
	{
		UE_CLOG(Data.Num()>MAX_uint8, LogAbilitySystem, Warning,
			TEXT("Too many batched gameplay cue parameters (%d) to serialize! Clamping to %d"), Data.Num(), MAX_uint8);
		DataNum = FMath::Min<int32>(Data.Num(), MAX_uint8);
	}
	Ar << DataNum;
	if(Ar.IsLoading())
	{
		Data.SetNum(DataNum);
		if(DataNum > 128)
		{
			ABILITY_LOG(Warning, TEXT("Received large batched gameplay cue parameters (%d)."), DataNum);
		}
	}
	if(DataNum>0)
	{
		TCheckedObjPtr<UScriptStruct> ScriptStruct = Data[0].IsValid() ? Data[0]->GetScriptStruct() : NULL;
		Ar<<ScriptStruct;
		for(int32 i = 0; i< DataNum && !Ar.IsError(); ++i)
		{
		
			if(ScriptStruct.IsValid())
			{
				if(Ar.IsLoading())
				{
					check(!Data[i].IsValid());

					FBatchedGameplayCueParameter* NewData = (FBatchedGameplayCueParameter*)FMemory::Malloc(ScriptStruct->GetStructureSize());
					ScriptStruct->InitializeStruct(NewData);

					Data[i] = TSharedPtr<FBatchedGameplayCueParameter>(NewData, FBatchedGameplayCueParameterDeleter());
				}

				void* ContainerPtr = Data[i].Get();

				if(ScriptStruct->StructFlags & STRUCT_NetSerializeNative)
				{
					ScriptStruct->GetCppStructOps()->NetSerialize(Ar, Map, bOutSuccess, Data[i].Get());
				}else
				{
					// This won't work since FStructProperty::NetSerializeItem is deprecrated.
					//	1) we have to manually crawl through the topmost struct's fields since we don't have a FStructProperty for it (just the UScriptProperty)
					//	2) if there are any UStructProperties in the topmost struct's fields, we will assert in FStructProperty::NetSerializeItem.

					ABILITY_LOG(Fatal,
						TEXT("FBatchedGameplayCueParameters::NetSerialize called on data struct %s without a native NetSerialize"),
						*ScriptStruct->GetName());

					for (TFieldIterator<FProperty> It(ScriptStruct.Get()); It; ++It)
					{
						if (It->PropertyFlags & CPF_RepSkip)
						{
							continue;
						}

						void* PropertyData = It->ContainerPtrToValuePtr<void*>(ContainerPtr);

						It->NetSerializeItem(Ar, Map, PropertyData);
					}
				}
			}
			else if(ScriptStruct.IsError())
			{
				ABILITY_LOG(Error, TEXT("FBatchedGameplayCueParameters::NetSerialize failed to load struct"));
				Ar.SetError();
				break;
			}
		}
	}

	if(Ar.IsError())
	{
		// Something bad happened, make sure to not return invalid shared ptrs
		for (int32 i=Data.Num()-1; i >= 0; --i)
		{
			if (Data[i].IsValid() == false)
			{
				Data.RemoveAt(i);
			}
		}
		bOutSuccess = false;
		return false;
	}
	bOutSuccess = true;
	return true;
}

FGameplayCueParameters FBatchedGameplayCueParameter_HitResult::ToGameplayCueParameters() const
{
	FGameplayCueParameters Result;
	Result.Location = Location;
	Result.Normal = Normal;
	Result.PhysicalMaterial = PhysicalMaterial;
	return Result;
}

UScriptStruct* FBatchedGameplayCueParameter_HitResult::GetScriptStruct() const
{
	return FBatchedGameplayCueParameter_HitResult::StaticStruct();
}

bool FBatchedGameplayCueParameter_HitResult::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	enum
	{
		Rep_Location = 0,
		Rep_Normal,
		Rep_PhysicalMaterial,
	};
	uint8 RepFlag = 0x00;
	if(Ar.IsSaving())
	{
		if(!Location.IsNearlyZero())
		{
			RepFlag |= (1 << Rep_Location);
		}
		if(!Normal.IsNearlyZero())
		{
			RepFlag |= (1 << Rep_Normal);
		}
		if(PhysicalMaterial.IsValid())
		{
			RepFlag |= (1 << Rep_PhysicalMaterial);
		}
	}
	Ar<<RepFlag;
	if(RepFlag & (1 << Rep_Location))
	{
		Ar<<Location;
	}else
	{
		Location = FVector::ZeroVector;
	}
	if(RepFlag & (1 << Rep_Normal))
	{
		Ar<<Normal;
	}else
	{
		Normal = FVector::ZeroVector;
	}
	if(RepFlag & (1 << Rep_PhysicalMaterial))
	{
		Ar<<PhysicalMaterial;
	}else
	{
		PhysicalMaterial = nullptr;
	}
	return true;
}
