// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void AEquipmentInstance::StaticRegisterNativesAEquipmentInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEquipmentInstance);
	UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister()
	{
		return AEquipmentInstance::StaticClass();
	}
	struct Z_Construct_UClass_AEquipmentInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEquipmentInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentInstance.h" },
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEquipmentInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipmentInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquipmentInstance_Statics::ClassParams = {
		&AEquipmentInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEquipmentInstance()
	{
		if (!Z_Registration_Info_UClass_AEquipmentInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquipmentInstance.OuterSingleton, Z_Construct_UClass_AEquipmentInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEquipmentInstance.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<AEquipmentInstance>()
	{
		return AEquipmentInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipmentInstance);
	AEquipmentInstance::~AEquipmentInstance() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEquipmentInstance, AEquipmentInstance::StaticClass, TEXT("AEquipmentInstance"), &Z_Registration_Info_UClass_AEquipmentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipmentInstance), 2236969286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_2819341139(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
