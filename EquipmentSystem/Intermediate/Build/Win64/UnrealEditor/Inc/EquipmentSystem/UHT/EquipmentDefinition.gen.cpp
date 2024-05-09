// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentDefinition();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentDefinition_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFeatureData();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentFeatureData;
class UScriptStruct* FEquipmentFeatureData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentFeatureData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentFeatureData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentFeatureData, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentFeatureData"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentFeatureData.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentFeatureData>()
{
	return FEquipmentFeatureData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FragmentClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_VisualActorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualActorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualActorClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityGrantSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityGrantSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityGrantSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentFeatureData>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses_Inner = { "FragmentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses = { "FragmentClasses", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFeatureData, FragmentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses_Inner = { "VisualActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEquipmentVisualActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses = { "VisualActorClasses", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFeatureData, VisualActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources_Inner = { "AbilityGrantSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources = { "AbilityGrantSources", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentFeatureData, AbilityGrantSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_FragmentClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_VisualActorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewProp_AbilityGrantSources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"EquipmentFeatureData",
		sizeof(FEquipmentFeatureData),
		alignof(FEquipmentFeatureData),
		Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentFeatureData()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentFeatureData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentFeatureData.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentFeatureData.InnerSingleton;
	}
	void UEquipmentDefinition::StaticRegisterNativesUEquipmentDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentDefinition);
	UClass* Z_Construct_UClass_UEquipmentDefinition_NoRegister()
	{
		return UEquipmentDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EquipmentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Features_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Features_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentDefinition.h" },
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_EquipmentName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_EquipmentName = { "EquipmentName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentDefinition, EquipmentName), METADATA_PARAMS(Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_EquipmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_EquipmentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_Inner_MetaData[] = {
		{ "Category", "Features" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEquipmentFeature_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_MetaData[] = {
		{ "Category", "Features" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x002408800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentDefinition, Features), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_EquipmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentDefinition_Statics::NewProp_Features,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentDefinition_Statics::ClassParams = {
		&UEquipmentDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentDefinition_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentDefinition()
	{
		if (!Z_Registration_Info_UClass_UEquipmentDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentDefinition.OuterSingleton, Z_Construct_UClass_UEquipmentDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentDefinition.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentDefinition>()
	{
		return UEquipmentDefinition::StaticClass();
	}
	UEquipmentDefinition::UEquipmentDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentDefinition);
	UEquipmentDefinition::~UEquipmentDefinition() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentFeatureData::StaticStruct, Z_Construct_UScriptStruct_FEquipmentFeatureData_Statics::NewStructOps, TEXT("EquipmentFeatureData"), &Z_Registration_Info_UScriptStruct_EquipmentFeatureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentFeatureData), 2408444804U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentDefinition, UEquipmentDefinition::StaticClass, TEXT("UEquipmentDefinition"), &Z_Registration_Info_UClass_UEquipmentDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentDefinition), 2769560964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_2704187071(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentDefinition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
