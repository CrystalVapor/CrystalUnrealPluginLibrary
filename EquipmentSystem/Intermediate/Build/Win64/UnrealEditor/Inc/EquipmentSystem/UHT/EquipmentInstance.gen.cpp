// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentInstance.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentDefinition_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentFragment_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentInstanceInitializeComponent_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentManagerComponent_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_NoRegister();
	EQUIPMENTSYSTEM_API UEnum* Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentInstanceState;
	static UEnum* EEquipmentInstanceState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentInstanceState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipmentInstanceState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EEquipmentInstanceState"));
		}
		return Z_Registration_Info_UEnum_EEquipmentInstanceState.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UEnum* StaticEnum<EEquipmentInstanceState>()
	{
		return EEquipmentInstanceState_StaticEnum();
	}
	struct Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::Enumerators[] = {
		{ "NotInitialized", (int64)NotInitialized },
		{ "InsideInitializingFragments", (int64)InsideInitializingFragments },
		{ "OutsideInitializingFragments", (int64)OutsideInitializingFragments },
		{ "RuminativeInitializingFragments", (int64)RuminativeInitializingFragments },
		{ "FinalInitializingFragments", (int64)FinalInitializingFragments },
		{ "RegisteringVisualActors", (int64)RegisteringVisualActors },
		{ "GrantingAbility", (int64)GrantingAbility },
		{ "Initialized", (int64)Initialized },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::Enum_MetaDataParams[] = {
		{ "FinalInitializingFragments.Name", "FinalInitializingFragments" },
		{ "GrantingAbility.Name", "GrantingAbility" },
		{ "Initialized.Name", "Initialized" },
		{ "InsideInitializingFragments.Name", "InsideInitializingFragments" },
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
		{ "NotInitialized.Name", "NotInitialized" },
		{ "OutsideInitializingFragments.Name", "OutsideInitializingFragments" },
		{ "RegisteringVisualActors.Name", "RegisteringVisualActors" },
		{ "RuminativeInitializingFragments.Name", "RuminativeInitializingFragments" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		"EEquipmentInstanceState",
		"EEquipmentInstanceState",
		Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentInstanceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentInstanceState.InnerSingleton, Z_Construct_UEnum_EquipmentSystem_EEquipmentInstanceState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipmentInstanceState.InnerSingleton;
	}
	DEFINE_FUNCTION(AEquipmentInstance::execUninitializeInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninitializeInstance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentInstance::execGetCurveProperty)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PropertyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeFloatCurve*)Z_Param__Result=P_THIS->GetCurveProperty(Z_Param_PropertyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentInstance::execGetTagContainerProperty)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PropertyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTagContainerProperty(Z_Param_PropertyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentInstance::execGetFloatProperty)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PropertyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatProperty(Z_Param_PropertyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentInstance::execGetFragment)
	{
		P_GET_OBJECT(UClass,Z_Param_FragmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEquipmentFragment**)Z_Param__Result=P_THIS->GetFragment(Z_Param_FragmentClass);
		P_NATIVE_END;
	}
	static FName NAME_AEquipmentInstance_UninitializeInstance = FName(TEXT("UninitializeInstance"));
	void AEquipmentInstance::UninitializeInstance()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEquipmentInstance_UninitializeInstance),NULL);
	}
	void AEquipmentInstance::StaticRegisterNativesAEquipmentInstance()
	{
		UClass* Class = AEquipmentInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurveProperty", &AEquipmentInstance::execGetCurveProperty },
			{ "GetFloatProperty", &AEquipmentInstance::execGetFloatProperty },
			{ "GetFragment", &AEquipmentInstance::execGetFragment },
			{ "GetTagContainerProperty", &AEquipmentInstance::execGetTagContainerProperty },
			{ "UninitializeInstance", &AEquipmentInstance::execUninitializeInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics
	{
		struct EquipmentInstance_eventGetCurveProperty_Parms
		{
			FGameplayTag PropertyTag;
			FRuntimeFloatCurve ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetCurveProperty_Parms, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetCurveProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_ReturnValue_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentInstance, nullptr, "GetCurveProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::EquipmentInstance_eventGetCurveProperty_Parms), Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics
	{
		struct EquipmentInstance_eventGetFloatProperty_Parms
		{
			FGameplayTag PropertyTag;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetFloatProperty_Parms, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetFloatProperty_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentInstance, nullptr, "GetFloatProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::EquipmentInstance_eventGetFloatProperty_Parms), Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics
	{
		struct EquipmentInstance_eventGetFragment_Parms
		{
			TSubclassOf<UEquipmentFragment>  FragmentClass;
			UEquipmentFragment* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetFragment_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetFragment_Parms, ReturnValue), Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::NewProp_FragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentInstance, nullptr, "GetFragment", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::EquipmentInstance_eventGetFragment_Parms), Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentInstance_GetFragment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentInstance_GetFragment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics
	{
		struct EquipmentInstance_eventGetTagContainerProperty_Parms
		{
			FGameplayTag PropertyTag;
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetTagContainerProperty_Parms, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentInstance_eventGetTagContainerProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentInstance, nullptr, "GetTagContainerProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::EquipmentInstance_eventGetTagContainerProperty_Parms), Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentInstance, nullptr, "UninitializeInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEquipmentInstance);
	UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister()
	{
		return AEquipmentInstance::StaticClass();
	}
	struct Z_Construct_UClass_AEquipmentInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializeComponent;
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPropertyManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicatedPropertyManagerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEquipmentInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEquipmentInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEquipmentInstance_GetCurveProperty, "GetCurveProperty" }, // 2297932757
		{ &Z_Construct_UFunction_AEquipmentInstance_GetFloatProperty, "GetFloatProperty" }, // 4250781884
		{ &Z_Construct_UFunction_AEquipmentInstance_GetFragment, "GetFragment" }, // 1549770858
		{ &Z_Construct_UFunction_AEquipmentInstance_GetTagContainerProperty, "GetTagContainerProperty" }, // 520909175
		{ &Z_Construct_UFunction_AEquipmentInstance_UninitializeInstance, "UninitializeInstance" }, // 986334945
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentInstance.h" },
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_InitializeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_InitializeComponent = { "InitializeComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, InitializeComponent), Z_Construct_UClass_UEquipmentInstanceInitializeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_InitializeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_InitializeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, Definition), Z_Construct_UClass_UEquipmentDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_FeatureTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_FeatureTags = { "FeatureTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, FeatureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_FeatureTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_FeatureTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ManagerComponent = { "ManagerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, ManagerComponent), Z_Construct_UClass_UEquipmentManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ManagerComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEquipmentFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors_Inner = { "VisualActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AEquipmentVisualActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors = { "VisualActors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, VisualActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ReplicatedPropertyManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ReplicatedPropertyManagerComponent = { "ReplicatedPropertyManagerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentInstance, ReplicatedPropertyManagerComponent), Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ReplicatedPropertyManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ReplicatedPropertyManagerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquipmentInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_InitializeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_FeatureTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_Fragments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_VisualActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentInstance_Statics::NewProp_ReplicatedPropertyManagerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEquipmentInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipmentInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquipmentInstance_Statics::ClassParams = {
		&AEquipmentInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEquipmentInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEquipmentInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEquipmentInstance()
	{
		if (!Z_Registration_Info_UClass_AEquipmentInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquipmentInstance.OuterSingleton, Z_Construct_UClass_AEquipmentInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEquipmentInstance.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<AEquipmentInstance>()
	{
		return AEquipmentInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipmentInstance);
	AEquipmentInstance::~AEquipmentInstance() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::EnumInfo[] = {
		{ EEquipmentInstanceState_StaticEnum, TEXT("EEquipmentInstanceState"), &Z_Registration_Info_UEnum_EEquipmentInstanceState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3338534155U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEquipmentInstance, AEquipmentInstance::StaticClass, TEXT("AEquipmentInstance"), &Z_Registration_Info_UClass_AEquipmentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipmentInstance), 776660517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_4269676812(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
