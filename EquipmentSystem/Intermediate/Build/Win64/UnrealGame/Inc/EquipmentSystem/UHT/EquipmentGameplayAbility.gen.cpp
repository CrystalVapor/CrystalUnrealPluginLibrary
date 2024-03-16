// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentGameplayAbility() {}
// Cross Module References
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentGameplayAbility::StaticRegisterNativesUEquipmentGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentGameplayAbility);
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility_NoRegister()
	{
		return UEquipmentGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExpandedGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentGameplayAbility_Statics::ClassParams = {
		&UEquipmentGameplayAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UEquipmentGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentGameplayAbility.OuterSingleton, Z_Construct_UClass_UEquipmentGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentGameplayAbility.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentGameplayAbility>()
	{
		return UEquipmentGameplayAbility::StaticClass();
	}
	UEquipmentGameplayAbility::UEquipmentGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentGameplayAbility);
	UEquipmentGameplayAbility::~UEquipmentGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentGameplayAbility, UEquipmentGameplayAbility::StaticClass, TEXT("UEquipmentGameplayAbility"), &Z_Registration_Info_UClass_UEquipmentGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentGameplayAbility), 3861571661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_1301183537(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
