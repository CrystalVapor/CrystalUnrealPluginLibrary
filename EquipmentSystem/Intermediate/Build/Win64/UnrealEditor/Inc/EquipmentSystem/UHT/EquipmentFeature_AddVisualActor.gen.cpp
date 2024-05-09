// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/Features/EquipmentFeature_AddVisualActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentFeature_AddVisualActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_AddVisualActor();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_AddVisualActor_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFeature_ConditionalBase();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	void UEquipmentFeature_AddVisualActor::StaticRegisterNativesUEquipmentFeature_AddVisualActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentFeature_AddVisualActor);
	UClass* Z_Construct_UClass_UEquipmentFeature_AddVisualActor_NoRegister()
	{
		return UEquipmentFeature_AddVisualActor::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VisualActorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualActorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualActorClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquipmentFeature_ConditionalBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Features/EquipmentFeature_AddVisualActor.h" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_AddVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses_Inner = { "VisualActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEquipmentVisualActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses_MetaData[] = {
		{ "Category", "EquipmentFeature_AddVisualActor" },
		{ "ModuleRelativePath", "Public/Features/EquipmentFeature_AddVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses = { "VisualActorClasses", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentFeature_AddVisualActor, VisualActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::NewProp_VisualActorClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentFeature_AddVisualActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::ClassParams = {
		&UEquipmentFeature_AddVisualActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentFeature_AddVisualActor()
	{
		if (!Z_Registration_Info_UClass_UEquipmentFeature_AddVisualActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentFeature_AddVisualActor.OuterSingleton, Z_Construct_UClass_UEquipmentFeature_AddVisualActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentFeature_AddVisualActor.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentFeature_AddVisualActor>()
	{
		return UEquipmentFeature_AddVisualActor::StaticClass();
	}
	UEquipmentFeature_AddVisualActor::UEquipmentFeature_AddVisualActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentFeature_AddVisualActor);
	UEquipmentFeature_AddVisualActor::~UEquipmentFeature_AddVisualActor() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddVisualActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddVisualActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentFeature_AddVisualActor, UEquipmentFeature_AddVisualActor::StaticClass, TEXT("UEquipmentFeature_AddVisualActor"), &Z_Registration_Info_UClass_UEquipmentFeature_AddVisualActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentFeature_AddVisualActor), 2612296680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddVisualActor_h_2626025366(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddVisualActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_Features_EquipmentFeature_AddVisualActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
