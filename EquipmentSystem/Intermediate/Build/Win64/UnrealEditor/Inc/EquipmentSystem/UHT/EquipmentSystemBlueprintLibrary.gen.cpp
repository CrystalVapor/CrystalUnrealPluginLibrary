// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentSystemBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentSystemBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentSystemBlueprintLibrary();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentSystemBlueprintLibrary::StaticRegisterNativesUEquipmentSystemBlueprintLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentSystemBlueprintLibrary);
	UClass* Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_NoRegister()
	{
		return UEquipmentSystemBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentSystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/EquipmentSystemBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentSystemBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::ClassParams = {
		&UEquipmentSystemBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentSystemBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UEquipmentSystemBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentSystemBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UEquipmentSystemBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentSystemBlueprintLibrary.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentSystemBlueprintLibrary>()
	{
		return UEquipmentSystemBlueprintLibrary::StaticClass();
	}
	UEquipmentSystemBlueprintLibrary::UEquipmentSystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentSystemBlueprintLibrary);
	UEquipmentSystemBlueprintLibrary::~UEquipmentSystemBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentSystemBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentSystemBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentSystemBlueprintLibrary, UEquipmentSystemBlueprintLibrary::StaticClass, TEXT("UEquipmentSystemBlueprintLibrary"), &Z_Registration_Info_UClass_UEquipmentSystemBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentSystemBlueprintLibrary), 2895837586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentSystemBlueprintLibrary_h_3923919836(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentSystemBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentSystemBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
