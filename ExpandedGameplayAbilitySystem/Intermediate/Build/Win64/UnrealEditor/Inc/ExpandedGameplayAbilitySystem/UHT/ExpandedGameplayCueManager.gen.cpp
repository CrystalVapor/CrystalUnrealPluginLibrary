// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedGameplayCueManager() {}
// Cross Module References
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayCueManager();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayCueManager_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	void UExpandedGameplayCueManager::StaticRegisterNativesUExpandedGameplayCueManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedGameplayCueManager);
	UClass* Z_Construct_UClass_UExpandedGameplayCueManager_NoRegister()
	{
		return UExpandedGameplayCueManager::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedGameplayCueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedGameplayCueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedGameplayCueManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExpandedGameplayCueManager.h" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayCueManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedGameplayCueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedGameplayCueManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedGameplayCueManager_Statics::ClassParams = {
		&UExpandedGameplayCueManager::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedGameplayCueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedGameplayCueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedGameplayCueManager()
	{
		if (!Z_Registration_Info_UClass_UExpandedGameplayCueManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedGameplayCueManager.OuterSingleton, Z_Construct_UClass_UExpandedGameplayCueManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedGameplayCueManager.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedGameplayCueManager>()
	{
		return UExpandedGameplayCueManager::StaticClass();
	}
	UExpandedGameplayCueManager::UExpandedGameplayCueManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedGameplayCueManager);
	UExpandedGameplayCueManager::~UExpandedGameplayCueManager() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayCueManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayCueManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedGameplayCueManager, UExpandedGameplayCueManager::StaticClass, TEXT("UExpandedGameplayCueManager"), &Z_Registration_Info_UClass_UExpandedGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedGameplayCueManager), 1693555642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayCueManager_h_889718612(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayCueManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
