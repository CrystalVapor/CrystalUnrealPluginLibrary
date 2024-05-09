// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentQuickBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentQuickBarComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentManagerComponent_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentQuickBarComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentQuickBarComponent_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentQuickBarInfo();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo;
class UScriptStruct* FEquipmentQuickBarInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentQuickBarInfo, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentQuickBarInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentQuickBarInfo>()
{
	return FEquipmentQuickBarInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentQuickBarComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentQuickBarInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"EquipmentQuickBarInfo",
		sizeof(FEquipmentQuickBarInfo),
		alignof(FEquipmentQuickBarInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentQuickBarInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo.InnerSingleton;
	}
	void UEquipmentQuickBarComponent::StaticRegisterNativesUEquipmentQuickBarComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentQuickBarComponent);
	UClass* Z_Construct_UClass_UEquipmentQuickBarComponent_NoRegister()
	{
		return UEquipmentQuickBarComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentQuickBarComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentManagerComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentQuickBarComponent.h" },
		{ "ModuleRelativePath", "Public/EquipmentQuickBarComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentManagerComponent = { "EquipmentManagerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentQuickBarComponent, EquipmentManagerComponent), Z_Construct_UClass_UEquipmentManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentManagerComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos_Inner = { "EquipmentInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentQuickBarInfo, METADATA_PARAMS(nullptr, 0) }; // 12746367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentQuickBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos = { "EquipmentInfos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentQuickBarComponent, EquipmentInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos_MetaData)) }; // 12746367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::NewProp_EquipmentInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentQuickBarComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::ClassParams = {
		&UEquipmentQuickBarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentQuickBarComponent()
	{
		if (!Z_Registration_Info_UClass_UEquipmentQuickBarComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentQuickBarComponent.OuterSingleton, Z_Construct_UClass_UEquipmentQuickBarComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentQuickBarComponent.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentQuickBarComponent>()
	{
		return UEquipmentQuickBarComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentQuickBarComponent);
	UEquipmentQuickBarComponent::~UEquipmentQuickBarComponent() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentQuickBarInfo::StaticStruct, Z_Construct_UScriptStruct_FEquipmentQuickBarInfo_Statics::NewStructOps, TEXT("EquipmentQuickBarInfo"), &Z_Registration_Info_UScriptStruct_EquipmentQuickBarInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentQuickBarInfo), 12746367U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentQuickBarComponent, UEquipmentQuickBarComponent::StaticClass, TEXT("UEquipmentQuickBarComponent"), &Z_Registration_Info_UClass_UEquipmentQuickBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentQuickBarComponent), 866319210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_2292862446(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentQuickBarComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
