// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedGameplayAbility() {}
// Cross Module References
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	void UExpandedGameplayAbility::StaticRegisterNativesUExpandedGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedGameplayAbility);
	UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister()
	{
		return UExpandedGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExpandedGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedGameplayAbility_Statics::ClassParams = {
		&UExpandedGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UExpandedGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedGameplayAbility.OuterSingleton, Z_Construct_UClass_UExpandedGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedGameplayAbility.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedGameplayAbility>()
	{
		return UExpandedGameplayAbility::StaticClass();
	}
	UExpandedGameplayAbility::UExpandedGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedGameplayAbility);
	UExpandedGameplayAbility::~UExpandedGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedGameplayAbility, UExpandedGameplayAbility::StaticClass, TEXT("UExpandedGameplayAbility"), &Z_Registration_Info_UClass_UExpandedGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedGameplayAbility), 2997359333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_4039923977(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
