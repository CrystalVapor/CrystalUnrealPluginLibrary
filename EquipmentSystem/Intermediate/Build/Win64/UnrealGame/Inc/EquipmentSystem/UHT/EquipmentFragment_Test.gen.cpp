// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Fragments/EquipmentFragment_Test.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFragment_Test() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_Test();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_Test_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFragment_Test::StaticRegisterNativesUEquipmentFragment_Test()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFragment_Test);
	UClass* Z_Construct_UClass_UEquipmentFragment_Test_NoRegister()
	{
		return UEquipmentFragment_Test::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFragment_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TestValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestValueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestValueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTagsTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTagsTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestCurveTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestCurveTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFragment_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fragments/EquipmentFragment_Test.h" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValue_MetaData[] = {
		{ "Category", "EquipmentFragment_Test" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValue = { "TestValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Test, TestValue), METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValueTag_MetaData[] = {
		{ "Categories", "Equipment.Property" },
		{ "Category", "PropertyTags" },
		{ "DisplayName", "Test Value" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValueTag = { "TestValueTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Test, TestValueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTags_MetaData[] = {
		{ "Category", "EquipmentFragment_Test" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTags = { "TestTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Test, TestTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTagsTag_MetaData[] = {
		{ "Categories", "Equipment.Property" },
		{ "Category", "PropertyTags" },
		{ "DisplayName", "Test Tags" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTagsTag = { "TestTagsTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Test, TestTagsTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTagsTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTagsTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurve_MetaData[] = {
		{ "Category", "EquipmentFragment_Test" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurve = { "TestCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Test, TestCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurveTag_MetaData[] = {
		{ "Categories", "Equipment.Property" },
		{ "Category", "PropertyTags" },
		{ "DisplayName", "Test Curve" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Test.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurveTag = { "TestCurveTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Test, TestCurveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurveTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurveTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFragment_Test_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestValueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestTagsTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Test_Statics::NewProp_TestCurveTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFragment_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFragment_Test>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFragment_Test_Statics::ClassParams = {
		&UEquipmentFragment_Test::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFragment_Test_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Test_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFragment_Test()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFragment_Test.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFragment_Test.OuterSingleton, Z_Construct_UClass_UEquipmentFragment_Test_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFragment_Test.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFragment_Test>()
	{
		return UEquipmentFragment_Test::StaticClass();
	}
	UEquipmentFragment_Test::UEquipmentFragment_Test(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFragment_Test);
	UEquipmentFragment_Test::~UEquipmentFragment_Test() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFragment_Test, UEquipmentFragment_Test::StaticClass, TEXT("UEquipmentFragment_Test"), &Z_Registration_Info_UClass_UEquipmentFragment_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFragment_Test), 2962933078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Test_h_542390474(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
