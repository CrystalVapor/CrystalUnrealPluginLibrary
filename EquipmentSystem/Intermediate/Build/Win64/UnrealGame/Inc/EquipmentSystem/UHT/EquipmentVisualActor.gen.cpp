// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentVisualActor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentVisualActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	struct EquipmentVisualActor_eventK2_NotifiedEquipped_Parms
	{
		AEquipmentInstance* EquippedInstance;
	};
	struct EquipmentVisualActor_eventK2_NotifiedUnequipped_Parms
	{
		AEquipmentInstance* UnequippedInstance;
	};
	static FName NAME_AEquipmentVisualActor_K2_NotifiedEquipped = FName(TEXT("K2_NotifiedEquipped"));
	void AEquipmentVisualActor::K2_NotifiedEquipped(AEquipmentInstance* EquippedInstance)
	{
		EquipmentVisualActor_eventK2_NotifiedEquipped_Parms Parms;
		Parms.EquippedInstance=EquippedInstance;
		ProcessEvent(FindFunctionChecked(NAME_AEquipmentVisualActor_K2_NotifiedEquipped),&Parms);
	}
	static FName NAME_AEquipmentVisualActor_K2_NotifiedUnequipped = FName(TEXT("K2_NotifiedUnequipped"));
	void AEquipmentVisualActor::K2_NotifiedUnequipped(AEquipmentInstance* UnequippedInstance)
	{
		EquipmentVisualActor_eventK2_NotifiedUnequipped_Parms Parms;
		Parms.UnequippedInstance=UnequippedInstance;
		ProcessEvent(FindFunctionChecked(NAME_AEquipmentVisualActor_K2_NotifiedUnequipped),&Parms);
	}
	void AEquipmentVisualActor::StaticRegisterNativesAEquipmentVisualActor()
	{
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::NewProp_EquippedInstance = { "EquippedInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_eventK2_NotifiedEquipped_Parms, EquippedInstance), Z_Construct_UClass_AEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::NewProp_EquippedInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "K2_NotifiedEquipped", nullptr, nullptr, sizeof(EquipmentVisualActor_eventK2_NotifiedEquipped_Parms), Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnequippedInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::NewProp_UnequippedInstance = { "UnequippedInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_eventK2_NotifiedUnequipped_Parms, UnequippedInstance), Z_Construct_UClass_AEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::NewProp_UnequippedInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "K2_NotifiedUnequipped", nullptr, nullptr, sizeof(EquipmentVisualActor_eventK2_NotifiedUnequipped_Parms), Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEquipmentVisualActor);
	UClass* Z_Construct_UClass_AEquipmentVisualActor_NoRegister()
	{
		return AEquipmentVisualActor::StaticClass();
	}
	struct Z_Construct_UClass_AEquipmentVisualActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualActorTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEquipmentVisualActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEquipmentVisualActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped, "K2_NotifiedEquipped" }, // 1049052628
		{ &Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped, "K2_NotifiedUnequipped" }, // 622511221
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentVisualActor.h" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance = { "OwnerInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentVisualActor, OwnerInstance), Z_Construct_UClass_AEquipmentInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EquipmentVisualActor" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags = { "VisualActorTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentVisualActor, VisualActorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquipmentVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEquipmentVisualActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AEquipmentVisualActor, IGameplayCueInterface), false },  // 462976300
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEquipmentVisualActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipmentVisualActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquipmentVisualActor_Statics::ClassParams = {
		&AEquipmentVisualActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEquipmentVisualActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEquipmentVisualActor()
	{
		if (!Z_Registration_Info_UClass_AEquipmentVisualActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquipmentVisualActor.OuterSingleton, Z_Construct_UClass_AEquipmentVisualActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEquipmentVisualActor.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<AEquipmentVisualActor>()
	{
		return AEquipmentVisualActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipmentVisualActor);
	AEquipmentVisualActor::~AEquipmentVisualActor() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEquipmentVisualActor, AEquipmentVisualActor::StaticClass, TEXT("AEquipmentVisualActor"), &Z_Registration_Info_UClass_AEquipmentVisualActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipmentVisualActor), 1136005283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_486092610(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
