// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentFeature.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFeature() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFeature::StaticRegisterNativesUEquipmentFeature()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFeature);
	UClass* Z_Construct_UClass_UEquipmentFeature_NoRegister()
	{
		return UEquipmentFeature::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentFeature.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquipmentFeature.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFeature>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFeature_Statics::ClassParams = {
		&UEquipmentFeature::StaticClass,
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
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFeature()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFeature.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFeature.OuterSingleton, Z_Construct_UClass_UEquipmentFeature_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFeature.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFeature>()
	{
		return UEquipmentFeature::StaticClass();
	}
	UEquipmentFeature::UEquipmentFeature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFeature);
	UEquipmentFeature::~UEquipmentFeature() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFeature_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFeature_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFeature, UEquipmentFeature::StaticClass, TEXT("UEquipmentFeature"), &Z_Registration_Info_UClass_UEquipmentFeature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFeature), 1212089185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFeature_h_362560248(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFeature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFeature_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
