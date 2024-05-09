// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Features/EquipmentFeature_AddFragmentAndAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFeature_AddFragmentAndAbilitySet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFeature_AddFragmentAndAbilitySet::StaticRegisterNativesUEquipmentFeature_AddFragmentAndAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFeature_AddFragmentAndAbilitySet);
	UClass* Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_NoRegister()
	{
		return UEquipmentFeature_AddFragmentAndAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFeature_ConditionalBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Features/EquipmentFeature_AddFragmentAndAbilitySet.h" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_AddFragmentAndAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_AddFragmentAndAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_AddFragmentAndAbilitySet, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UExpandedAbilitySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets_MetaData[] = {
		{ "Category", "AbilitySet" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_AddFragmentAndAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_AddFragmentAndAbilitySet, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_Fragments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::NewProp_AbilitySets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFeature_AddFragmentAndAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::ClassParams = {
		&UEquipmentFeature_AddFragmentAndAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFeature_AddFragmentAndAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFeature_AddFragmentAndAbilitySet.OuterSingleton, Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFeature_AddFragmentAndAbilitySet.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFeature_AddFragmentAndAbilitySet>()
	{
		return UEquipmentFeature_AddFragmentAndAbilitySet::StaticClass();
	}
	UEquipmentFeature_AddFragmentAndAbilitySet::UEquipmentFeature_AddFragmentAndAbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFeature_AddFragmentAndAbilitySet);
	UEquipmentFeature_AddFragmentAndAbilitySet::~UEquipmentFeature_AddFragmentAndAbilitySet() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddFragmentAndAbilitySet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddFragmentAndAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFeature_AddFragmentAndAbilitySet, UEquipmentFeature_AddFragmentAndAbilitySet::StaticClass, TEXT("UEquipmentFeature_AddFragmentAndAbilitySet"), &Z_Registration_Info_UClass_UEquipmentFeature_AddFragmentAndAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFeature_AddFragmentAndAbilitySet), 3304395408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddFragmentAndAbilitySet_h_254624930(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddFragmentAndAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddFragmentAndAbilitySet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
