// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedTargetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedTargetData() {}
// Cross Module References
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_HitResultWithInt>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_HitResultWithInt cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt;
class UScriptStruct* FGameplayAbilityTargetData_HitResultWithInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("GameplayAbilityTargetData_HitResultWithInt"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_HitResultWithInt>()
{
	return FGameplayAbilityTargetData_HitResultWithInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_HitResultWithInt>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_HitResultWithInt",
		sizeof(FGameplayAbilityTargetData_HitResultWithInt),
		alignof(FGameplayAbilityTargetData_HitResultWithInt),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedTargetData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedTargetData_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityTargetData_HitResultWithInt::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_HitResultWithInt_Statics::NewStructOps, TEXT("GameplayAbilityTargetData_HitResultWithInt"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_HitResultWithInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetData_HitResultWithInt), 2021683161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedTargetData_h_776927540(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedTargetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedTargetData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
