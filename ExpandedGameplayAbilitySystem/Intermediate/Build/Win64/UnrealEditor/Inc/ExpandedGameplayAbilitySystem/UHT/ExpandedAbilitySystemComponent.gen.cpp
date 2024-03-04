// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedAbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedAbilitySystemComponent() {}
// Cross Module References
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta;
class UScriptStruct* FGameplayAbilitySpecInputMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("GameplayAbilitySpecInputMeta"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGameplayAbilitySpecInputMeta>()
{
	return FGameplayAbilitySpecInputMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecInputMeta>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecInputMeta",
		sizeof(FGameplayAbilitySpecInputMeta),
		alignof(FGameplayAbilitySpecInputMeta),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer;
class UScriptStruct* FGameplayAbilitySpecHandleContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("GameplayAbilitySpecHandleContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer.OuterSingleton;
}
template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandleContainer>()
{
	return FGameplayAbilitySpecHandleContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandleContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecHandleContainer, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles_MetaData)) }; // 3562347300
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewProp_Handles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecHandleContainer",
		sizeof(FGameplayAbilitySpecHandleContainer),
		alignof(FGameplayAbilitySpecHandleContainer),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UExpandedAbilitySystemComponent::execHasMoreTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_STRUCT(FGameplayTag,Z_Param_OtherTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMoreTagStack(Z_Param_Tag,Z_Param_OtherTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedAbilitySystemComponent::execRemoveGameplayCueLocal)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameplayCueLocal(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedAbilitySystemComponent::execAddGameplayCueLocal)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGameplayCueLocal(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedAbilitySystemComponent::execExecuteGameplayCueLocal)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteGameplayCueLocal(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedAbilitySystemComponent::execClientAddSpecInputMapping)
	{
		P_GET_STRUCT(FGameplayAbilitySpec,Z_Param_AbilitySpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAddSpecInputMapping_Implementation(Z_Param_AbilitySpec);
		P_NATIVE_END;
	}
	struct ExpandedAbilitySystemComponent_eventClientAddSpecInputMapping_Parms
	{
		FGameplayAbilitySpec AbilitySpec;
	};
	static FName NAME_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping = FName(TEXT("ClientAddSpecInputMapping"));
	void UExpandedAbilitySystemComponent::ClientAddSpecInputMapping(FGameplayAbilitySpec const& AbilitySpec)
	{
		ExpandedAbilitySystemComponent_eventClientAddSpecInputMapping_Parms Parms;
		Parms.AbilitySpec=AbilitySpec;
		ProcessEvent(FindFunctionChecked(NAME_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping),&Parms);
	}
	void UExpandedAbilitySystemComponent::StaticRegisterNativesUExpandedAbilitySystemComponent()
	{
		UClass* Class = UExpandedAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayCueLocal", &UExpandedAbilitySystemComponent::execAddGameplayCueLocal },
			{ "ClientAddSpecInputMapping", &UExpandedAbilitySystemComponent::execClientAddSpecInputMapping },
			{ "ExecuteGameplayCueLocal", &UExpandedAbilitySystemComponent::execExecuteGameplayCueLocal },
			{ "HasMoreTagStack", &UExpandedAbilitySystemComponent::execHasMoreTagStack },
			{ "RemoveGameplayCueLocal", &UExpandedAbilitySystemComponent::execRemoveGameplayCueLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics
	{
		struct ExpandedAbilitySystemComponent_eventAddGameplayCueLocal_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters GameplayCueParameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventAddGameplayCueLocal_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventAddGameplayCueLocal_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::NewProp_GameplayCueParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "GameplayCue" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedAbilitySystemComponent, nullptr, "AddGameplayCueLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::ExpandedAbilitySystemComponent_eventAddGameplayCueLocal_Parms), Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::NewProp_AbilitySpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::NewProp_AbilitySpec = { "AbilitySpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventClientAddSpecInputMapping_Parms, AbilitySpec), Z_Construct_UScriptStruct_FGameplayAbilitySpec, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::NewProp_AbilitySpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::NewProp_AbilitySpec_MetaData)) }; // 3720105034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::NewProp_AbilitySpec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedAbilitySystemComponent, nullptr, "ClientAddSpecInputMapping", nullptr, nullptr, sizeof(ExpandedAbilitySystemComponent_eventClientAddSpecInputMapping_Parms), Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics
	{
		struct ExpandedAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters GameplayCueParameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "GameplayCue" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedAbilitySystemComponent, nullptr, "ExecuteGameplayCueLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::ExpandedAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms), Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics
	{
		struct ExpandedAbilitySystemComponent_eventHasMoreTagStack_Parms
		{
			FGameplayTag Tag;
			FGameplayTag OtherTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventHasMoreTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_Tag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_OtherTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_OtherTag = { "OtherTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventHasMoreTagStack_Parms, OtherTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_OtherTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_OtherTag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedAbilitySystemComponent_eventHasMoreTagStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedAbilitySystemComponent_eventHasMoreTagStack_Parms), &Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_OtherTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/**\n\x09 * Returns if the Tag's stack in this ability component is more than OtherTag's stack\n\x09 * Usually used for test the predicted removal tag.\n\x09 * @param Tag The tag to check\n\x09 * @param OtherTag The tag to compare\n\x09 * @return if the Tag's stack in this ability component is more than OtherTag's stack\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
		{ "ToolTip", "Returns if the Tag's stack in this ability component is more than OtherTag's stack\nUsually used for test the predicted removal tag.\n@param Tag The tag to check\n@param OtherTag The tag to compare\n@return if the Tag's stack in this ability component is more than OtherTag's stack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedAbilitySystemComponent, nullptr, "HasMoreTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::ExpandedAbilitySystemComponent_eventHasMoreTagStack_Parms), Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics
	{
		struct ExpandedAbilitySystemComponent_eventRemoveGameplayCueLocal_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters GameplayCueParameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventRemoveGameplayCueLocal_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedAbilitySystemComponent_eventRemoveGameplayCueLocal_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::NewProp_GameplayCueParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "GameplayCue" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedAbilitySystemComponent, nullptr, "RemoveGameplayCueLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::ExpandedAbilitySystemComponent_eventRemoveGameplayCueLocal_Parms), Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedAbilitySystemComponent);
	UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent_NoRegister()
	{
		return UExpandedAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTagMapping_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTagMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTagMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputTagMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandedAbilitySystemComponent_AddGameplayCueLocal, "AddGameplayCueLocal" }, // 3332519693
		{ &Z_Construct_UFunction_UExpandedAbilitySystemComponent_ClientAddSpecInputMapping, "ClientAddSpecInputMapping" }, // 297442657
		{ &Z_Construct_UFunction_UExpandedAbilitySystemComponent_ExecuteGameplayCueLocal, "ExecuteGameplayCueLocal" }, // 2667642388
		{ &Z_Construct_UFunction_UExpandedAbilitySystemComponent_HasMoreTagStack, "HasMoreTagStack" }, // 3327959912
		{ &Z_Construct_UFunction_UExpandedAbilitySystemComponent_RemoveGameplayCueLocal, "RemoveGameplayCueLocal" }, // 1628608707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "ExpandedAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_ValueProp = { "InputTagMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer, METADATA_PARAMS(nullptr, 0) }; // 3665543078
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_Key_KeyProp = { "InputTagMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_MetaData[] = {
		{ "Comment", "// InputTag internals\n" },
		{ "ModuleRelativePath", "Public/ExpandedAbilitySystemComponent.h" },
		{ "ToolTip", "InputTag internals" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping = { "InputTagMapping", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedAbilitySystemComponent, InputTagMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_MetaData)) }; // 1225434376 3665543078
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::NewProp_InputTagMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::ClassParams = {
		&UExpandedAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UExpandedAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UExpandedAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedAbilitySystemComponent.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedAbilitySystemComponent>()
	{
		return UExpandedAbilitySystemComponent::StaticClass();
	}
	UExpandedAbilitySystemComponent::UExpandedAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedAbilitySystemComponent);
	UExpandedAbilitySystemComponent::~UExpandedAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilitySpecInputMeta::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecInputMeta_Statics::NewStructOps, TEXT("GameplayAbilitySpecInputMeta"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecInputMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecInputMeta), 3080835700U) },
		{ FGameplayAbilitySpecHandleContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleContainer_Statics::NewStructOps, TEXT("GameplayAbilitySpecHandleContainer"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecHandleContainer), 3665543078U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedAbilitySystemComponent, UExpandedAbilitySystemComponent::StaticClass, TEXT("UExpandedAbilitySystemComponent"), &Z_Registration_Info_UClass_UExpandedAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedAbilitySystemComponent), 2992302987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_4198217075(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedAbilitySystemComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
