// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedAbilitySet.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedAbilityGrantSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedAbilitySet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilityGrantSource_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySet_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	void UExpandedAbilitySet::StaticRegisterNativesUExpandedAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedAbilitySet);
	UClass* Z_Construct_UClass_UExpandedAbilitySet_NoRegister()
	{
		return UExpandedAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An AbilitySet for grant Ability, effect and attribute set in batch.\n */" },
		{ "IncludePath", "ExpandedAbilitySet.h" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
		{ "ToolTip", "An AbilitySet for grant Ability, effect and attribute set in batch." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Ability, METADATA_PARAMS(nullptr, 0) }; // 2303708370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "ExpandedAbilitySet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySet, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_MetaData)) }; // 2303708370
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_Effect, METADATA_PARAMS(nullptr, 0) }; // 1338536718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "ExpandedAbilitySet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySet, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_MetaData)) }; // 1338536718
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_Inner = { "AttributeSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpandedAbilityGrantSource_AttributeSet, METADATA_PARAMS(nullptr, 0) }; // 1388743448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_MetaData[] = {
		{ "Category", "ExpandedAbilitySet" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets = { "AttributeSets", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySet, AttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_MetaData)) }; // 1388743448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandedAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySet_Statics::NewProp_AttributeSets,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UExpandedAbilitySet_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UExpandedAbilityGrantSource_NoRegister, (int32)VTABLE_OFFSET(UExpandedAbilitySet, IExpandedAbilityGrantSource), false },  // 1976364162
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedAbilitySet_Statics::ClassParams = {
		&UExpandedAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExpandedAbilitySet_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedAbilitySet()
	{
		if (!Z_Registration_Info_UClass_UExpandedAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedAbilitySet.OuterSingleton, Z_Construct_UClass_UExpandedAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedAbilitySet.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedAbilitySet>()
	{
		return UExpandedAbilitySet::StaticClass();
	}
	UExpandedAbilitySet::UExpandedAbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedAbilitySet);
	UExpandedAbilitySet::~UExpandedAbilitySet() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedAbilitySet, UExpandedAbilitySet::StaticClass, TEXT("UExpandedAbilitySet"), &Z_Registration_Info_UClass_UExpandedAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedAbilitySet), 1049779585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_2436075020(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
