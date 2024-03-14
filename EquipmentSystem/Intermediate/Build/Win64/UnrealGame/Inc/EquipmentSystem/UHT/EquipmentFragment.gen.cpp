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
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFragmentRegisteredModifier();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier;
class UScriptStruct* FFragmentRegisteredModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFragmentRegisteredModifier, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("FragmentRegisteredModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FFragmentRegisteredModifier>()
{
	return FFragmentRegisteredModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentFragment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFragmentRegisteredModifier>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"FragmentRegisteredModifier",
		sizeof(FFragmentRegisteredModifier),
		alignof(FFragmentRegisteredModifier),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFragmentRegisteredModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier.InnerSingleton, Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer;
class UScriptStruct* FFragmentRegisteredModifierContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("FragmentRegisteredModifierContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FFragmentRegisteredModifierContainer>()
{
	return FFragmentRegisteredModifierContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentFragment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFragmentRegisteredModifierContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFragmentRegisteredModifier, METADATA_PARAMS(nullptr, 0) }; // 1873785057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentFragment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFragmentRegisteredModifierContainer, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers_MetaData)) }; // 1873785057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewProp_Modifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		&NewStructOps,
		"FragmentRegisteredModifierContainer",
		sizeof(FFragmentRegisteredModifierContainer),
		alignof(FFragmentRegisteredModifierContainer),
		Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer.InnerSingleton, Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer.InnerSingleton;
	}
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
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentFragment.h" },
		{ "IsBlueprintBase", "true" },
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
		0x001000A1u,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ScriptStructInfo[] = {
		{ FFragmentRegisteredModifier::StaticStruct, Z_Construct_UScriptStruct_FFragmentRegisteredModifier_Statics::NewStructOps, TEXT("FragmentRegisteredModifier"), &Z_Registration_Info_UScriptStruct_FragmentRegisteredModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFragmentRegisteredModifier), 1873785057U) },
		{ FFragmentRegisteredModifierContainer::StaticStruct, Z_Construct_UScriptStruct_FFragmentRegisteredModifierContainer_Statics::NewStructOps, TEXT("FragmentRegisteredModifierContainer"), &Z_Registration_Info_UScriptStruct_FragmentRegisteredModifierContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFragmentRegisteredModifierContainer), 2052334735U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFragment, UEquipmentFragment::StaticClass, TEXT("UEquipmentFragment"), &Z_Registration_Info_UClass_UEquipmentFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFragment), 2424877463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_3037235048(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentFragment_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
