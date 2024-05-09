// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Fragments/EquipmentFragment_Equippable.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFragment_Equippable() {}
// Cross Module References
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_Equippable();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_Equippable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFragment_Equippable::StaticRegisterNativesUEquipmentFragment_Equippable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFragment_Equippable);
	UClass* Z_Construct_UClass_UEquipmentFragment_Equippable_NoRegister()
	{
		return UEquipmentFragment_Equippable::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFragment_Equippable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroups_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fragments/EquipmentFragment_Equippable.h" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Equippable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::NewProp_ActivationGroups_MetaData[] = {
		{ "Category", "EquipmentFragment_Equippable" },
		{ "ModuleRelativePath", "Public/Fragments/EquipmentFragment_Equippable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::NewProp_ActivationGroups = { "ActivationGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFragment_Equippable, ActivationGroups), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::NewProp_ActivationGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::NewProp_ActivationGroups_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::NewProp_ActivationGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFragment_Equippable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::ClassParams = {
		&UEquipmentFragment_Equippable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFragment_Equippable()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFragment_Equippable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFragment_Equippable.OuterSingleton, Z_Construct_UClass_UEquipmentFragment_Equippable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFragment_Equippable.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFragment_Equippable>()
	{
		return UEquipmentFragment_Equippable::StaticClass();
	}
	UEquipmentFragment_Equippable::UEquipmentFragment_Equippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFragment_Equippable);
	UEquipmentFragment_Equippable::~UEquipmentFragment_Equippable() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Equippable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Equippable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFragment_Equippable, UEquipmentFragment_Equippable::StaticClass, TEXT("UEquipmentFragment_Equippable"), &Z_Registration_Info_UClass_UEquipmentFragment_Equippable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFragment_Equippable), 2542513241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Equippable_h_3523376840(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Equippable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Fragments_EquipmentFragment_Equippable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
