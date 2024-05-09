// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/BatchedGameplayCueParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatchedGameplayCueParameter() {}
// Cross Module References
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedGameplayCueParameter();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter;
class UScriptStruct* FBatchedGameplayCueParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedGameplayCueParameter, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("BatchedGameplayCueParameter"));
	}
	return Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FBatchedGameplayCueParameter>()
{
	return FBatchedGameplayCueParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchedGameplayCueParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedGameplayCueParameter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"BatchedGameplayCueParameter",
		sizeof(FBatchedGameplayCueParameter),
		alignof(FBatchedGameplayCueParameter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedGameplayCueParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter.InnerSingleton, Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle;
class UScriptStruct* FBatchedGameplayCueParameterHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("BatchedGameplayCueParameterHandle"));
	}
	return Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FBatchedGameplayCueParameterHandle>()
{
	return FBatchedGameplayCueParameterHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchedGameplayCueParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedGameplayCueParameterHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"BatchedGameplayCueParameterHandle",
		sizeof(FBatchedGameplayCueParameterHandle),
		alignof(FBatchedGameplayCueParameterHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle.InnerSingleton, Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBatchedGameplayCueParameter_HitResult>() == std::is_polymorphic<FBatchedGameplayCueParameter>(), "USTRUCT FBatchedGameplayCueParameter_HitResult cannot be polymorphic unless super FBatchedGameplayCueParameter is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult;
class UScriptStruct* FBatchedGameplayCueParameter_HitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("BatchedGameplayCueParameter_HitResult"));
	}
	return Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FBatchedGameplayCueParameter_HitResult>()
{
	return FBatchedGameplayCueParameter_HitResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatchedGameplayCueParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedGameplayCueParameter_HitResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		Z_Construct_UScriptStruct_FBatchedGameplayCueParameter,
		&NewStructOps,
		"BatchedGameplayCueParameter_HitResult",
		sizeof(FBatchedGameplayCueParameter_HitResult),
		alignof(FBatchedGameplayCueParameter_HitResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult()
	{
		if (!Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult.InnerSingleton, Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_BatchedGameplayCueParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_BatchedGameplayCueParameter_h_Statics::ScriptStructInfo[] = {
		{ FBatchedGameplayCueParameter::StaticStruct, Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_Statics::NewStructOps, TEXT("BatchedGameplayCueParameter"), &Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBatchedGameplayCueParameter), 422737038U) },
		{ FBatchedGameplayCueParameterHandle::StaticStruct, Z_Construct_UScriptStruct_FBatchedGameplayCueParameterHandle_Statics::NewStructOps, TEXT("BatchedGameplayCueParameterHandle"), &Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameterHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBatchedGameplayCueParameterHandle), 2226460467U) },
		{ FBatchedGameplayCueParameter_HitResult::StaticStruct, Z_Construct_UScriptStruct_FBatchedGameplayCueParameter_HitResult_Statics::NewStructOps, TEXT("BatchedGameplayCueParameter_HitResult"), &Z_Registration_Info_UScriptStruct_BatchedGameplayCueParameter_HitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBatchedGameplayCueParameter_HitResult), 2431266138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_BatchedGameplayCueParameter_h_3181800677(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_BatchedGameplayCueParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_BatchedGameplayCueParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
