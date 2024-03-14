// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Features/EquipmentFeature_ConditionalBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFeature_ConditionalBase() {}
// Cross Module References
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFeature_ConditionalBase::StaticRegisterNativesUEquipmentFeature_ConditionalBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFeature_ConditionalBase);
	UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase_NoRegister()
	{
		return UEquipmentFeature_ConditionalBase::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTagQuery_MetaData[];
#endif
		static void NewProp_bUseTagQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFeature,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Features/EquipmentFeature_ConditionalBase.h" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_ConditionalBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "// True will use Tag Query instead of \n" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_ConditionalBase.h" },
		{ "ToolTip", "True will use Tag Query instead of" },
	};
#endif
	void Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery_SetBit(void* Obj)
	{
		((UEquipmentFeature_ConditionalBase*)Obj)->bUseTagQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery = { "bUseTagQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEquipmentFeature_ConditionalBase), &Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_TagQuery_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "// Tag query to check if we should perform the action, true to perform.\n" },
		{ "EditCondition", "bUseTagQuery" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_ConditionalBase.h" },
		{ "ToolTip", "Tag query to check if we should perform the action, true to perform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_ConditionalBase, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "// Blocked tags, match any tags in the container to prevent the action.\n" },
		{ "EditCondition", "!bUseTagQuery" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_ConditionalBase.h" },
		{ "ToolTip", "Blocked tags, match any tags in the container to prevent the action." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_ConditionalBase, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_BlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_BlockedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_AllowedTags_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "// Allowed tags, must match all tags in the container to perform the action, Empty to disable.\n" },
		{ "EditCondition", "!bUseTagQuery" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_ConditionalBase.h" },
		{ "ToolTip", "Allowed tags, must match all tags in the container to perform the action, Empty to disable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_AllowedTags = { "AllowedTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_ConditionalBase, AllowedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_AllowedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_AllowedTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_bUseTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_BlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::NewProp_AllowedTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFeature_ConditionalBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::ClassParams = {
		&UEquipmentFeature_ConditionalBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::PropPointers),
		0,
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFeature_ConditionalBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFeature_ConditionalBase.OuterSingleton, Z_Construct_UClass_UEquipmentFeature_ConditionalBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFeature_ConditionalBase.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFeature_ConditionalBase>()
	{
		return UEquipmentFeature_ConditionalBase::StaticClass();
	}
	UEquipmentFeature_ConditionalBase::UEquipmentFeature_ConditionalBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFeature_ConditionalBase);
	UEquipmentFeature_ConditionalBase::~UEquipmentFeature_ConditionalBase() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_ConditionalBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_ConditionalBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFeature_ConditionalBase, UEquipmentFeature_ConditionalBase::StaticClass, TEXT("UEquipmentFeature_ConditionalBase"), &Z_Registration_Info_UClass_UEquipmentFeature_ConditionalBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFeature_ConditionalBase), 3096852116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_ConditionalBase_h_2411443584(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_ConditionalBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_ConditionalBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
