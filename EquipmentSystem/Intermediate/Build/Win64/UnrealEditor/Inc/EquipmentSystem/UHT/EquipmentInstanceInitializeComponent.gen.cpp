// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Private/EquipmentInstanceInitializeComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentInstanceInitializeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentDefinition_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentInstanceInitializeComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentInstanceInitializeComponent_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentManagerComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	DEFINE_FUNCTION(UEquipmentInstanceInitializeComponent::execOnRep_ManagerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManagerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentInstanceInitializeComponent::execOnRep_FeatureTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FeatureTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentInstanceInitializeComponent::execOnRep_Definition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Definition();
		P_NATIVE_END;
	}
	void UEquipmentInstanceInitializeComponent::StaticRegisterNativesUEquipmentInstanceInitializeComponent()
	{
		UClass* Class = UEquipmentInstanceInitializeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Definition", &UEquipmentInstanceInitializeComponent::execOnRep_Definition },
			{ "OnRep_FeatureTags", &UEquipmentInstanceInitializeComponent::execOnRep_FeatureTags },
			{ "OnRep_ManagerComponent", &UEquipmentInstanceInitializeComponent::execOnRep_ManagerComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInstanceInitializeComponent, nullptr, "OnRep_Definition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInstanceInitializeComponent, nullptr, "OnRep_FeatureTags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInstanceInitializeComponent, nullptr, "OnRep_ManagerComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentInstanceInitializeComponent);
	UClass* Z_Construct_UClass_UEquipmentInstanceInitializeComponent_NoRegister()
	{
		return UEquipmentInstanceInitializeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeatureTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_Definition, "OnRep_Definition" }, // 2965095183
		{ &Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_FeatureTags, "OnRep_FeatureTags" }, // 371005405
		{ &Z_Construct_UFunction_UEquipmentInstanceInitializeComponent_OnRep_ManagerComponent, "OnRep_ManagerComponent" }, // 3008794198
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentInstanceInitializeComponent.h" },
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_Definition = { "Definition", "OnRep_Definition", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentInstanceInitializeComponent, Definition), Z_Construct_UClass_UEquipmentDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_FeatureTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_FeatureTags = { "FeatureTags", "OnRep_FeatureTags", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentInstanceInitializeComponent, FeatureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_FeatureTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_FeatureTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_ManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EquipmentInstanceInitializeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_ManagerComponent = { "ManagerComponent", "OnRep_ManagerComponent", (EPropertyFlags)0x0020080100080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentInstanceInitializeComponent, ManagerComponent), Z_Construct_UClass_UEquipmentManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_ManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_ManagerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_FeatureTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::NewProp_ManagerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentInstanceInitializeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::ClassParams = {
		&UEquipmentInstanceInitializeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentInstanceInitializeComponent()
	{
		if (!Z_Registration_Info_UClass_UEquipmentInstanceInitializeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentInstanceInitializeComponent.OuterSingleton, Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentInstanceInitializeComponent.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentInstanceInitializeComponent>()
	{
		return UEquipmentInstanceInitializeComponent::StaticClass();
	}

	void UEquipmentInstanceInitializeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Definition(TEXT("Definition"));
		static const FName Name_FeatureTags(TEXT("FeatureTags"));
		static const FName Name_ManagerComponent(TEXT("ManagerComponent"));

		const bool bIsValid = true
			&& Name_Definition == ClassReps[(int32)ENetFields_Private::Definition].Property->GetFName()
			&& Name_FeatureTags == ClassReps[(int32)ENetFields_Private::FeatureTags].Property->GetFName()
			&& Name_ManagerComponent == ClassReps[(int32)ENetFields_Private::ManagerComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEquipmentInstanceInitializeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentInstanceInitializeComponent);
	UEquipmentInstanceInitializeComponent::~UEquipmentInstanceInitializeComponent() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentInstanceInitializeComponent, UEquipmentInstanceInitializeComponent::StaticClass, TEXT("UEquipmentInstanceInitializeComponent"), &Z_Registration_Info_UClass_UEquipmentInstanceInitializeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentInstanceInitializeComponent), 1305590053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_3000482602(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
