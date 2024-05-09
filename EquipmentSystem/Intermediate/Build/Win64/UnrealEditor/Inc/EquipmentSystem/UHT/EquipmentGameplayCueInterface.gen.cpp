// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Interfaces/EquipmentGameplayCueInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentGameplayCueInterface() {}
// Cross Module References
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayCueInterface();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayCueInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentGameplayCueInterface::StaticRegisterNativesUEquipmentGameplayCueInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentGameplayCueInterface);
	UClass* Z_Construct_UClass_UEquipmentGameplayCueInterface_NoRegister()
	{
		return UEquipmentGameplayCueInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/EquipmentGameplayCueInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentGameplayCueInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::ClassParams = {
		&UEquipmentGameplayCueInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentGameplayCueInterface()
	{
		if (!Z_Registration_Info_UClass_UEquipmentGameplayCueInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentGameplayCueInterface.OuterSingleton, Z_Construct_UClass_UEquipmentGameplayCueInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentGameplayCueInterface.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentGameplayCueInterface>()
	{
		return UEquipmentGameplayCueInterface::StaticClass();
	}
	UEquipmentGameplayCueInterface::UEquipmentGameplayCueInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentGameplayCueInterface);
	UEquipmentGameplayCueInterface::~UEquipmentGameplayCueInterface() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Interfaces_EquipmentGameplayCueInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Interfaces_EquipmentGameplayCueInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentGameplayCueInterface, UEquipmentGameplayCueInterface::StaticClass, TEXT("UEquipmentGameplayCueInterface"), &Z_Registration_Info_UClass_UEquipmentGameplayCueInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentGameplayCueInterface), 828394972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Interfaces_EquipmentGameplayCueInterface_h_1901339755(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Interfaces_EquipmentGameplayCueInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Interfaces_EquipmentGameplayCueInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
