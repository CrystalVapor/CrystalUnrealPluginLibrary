// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFragment() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFragment::StaticRegisterNativesUEquipmentFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFragment);
	UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister()
	{
		return UEquipmentFragment::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentFragment.h" },
		{ "ModuleRelativePath", "Public/EquipmentFragment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFragment_Statics::ClassParams = {
		&UEquipmentFragment::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFragment()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFragment.OuterSingleton, Z_Construct_UClass_UEquipmentFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFragment.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFragment>()
	{
		return UEquipmentFragment::StaticClass();
	}
	UEquipmentFragment::UEquipmentFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFragment);
	UEquipmentFragment::~UEquipmentFragment() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFragment, UEquipmentFragment::StaticClass, TEXT("UEquipmentFragment"), &Z_Registration_Info_UClass_UEquipmentFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFragment), 963014380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_1405775474(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
