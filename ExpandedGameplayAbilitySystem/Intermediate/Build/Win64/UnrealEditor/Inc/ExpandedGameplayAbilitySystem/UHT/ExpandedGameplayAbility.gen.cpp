// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpandedGameplayAbilitySystem/Public/ExpandedGameplayAbility.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandedGameplayAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityActivationPolicy;
	static UEnum* EAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem(), TEXT("EAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_EAbilityActivationPolicy.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EAbilityActivationPolicy>()
	{
		return EAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "EAbilityActivationPolicy::OnInputTriggered", (int64)EAbilityActivationPolicy::OnInputTriggered },
		{ "EAbilityActivationPolicy::OnSpawnOrGranted", (int64)EAbilityActivationPolicy::OnSpawnOrGranted },
		{ "EAbilityActivationPolicy::EventOnly", (int64)EAbilityActivationPolicy::EventOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EventOnly.Comment", "// Only Activate by Event, ignore input.\n" },
		{ "EventOnly.Name", "EAbilityActivationPolicy::EventOnly" },
		{ "EventOnly.ToolTip", "Only Activate by Event, ignore input." },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "EAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawnOrGranted.Comment", "// The Ability will be activated as soon as it is granted or Avatar is set.\n" },
		{ "OnSpawnOrGranted.Name", "EAbilityActivationPolicy::OnSpawnOrGranted" },
		{ "OnSpawnOrGranted.ToolTip", "The Ability will be activated as soon as it is granted or Avatar is set." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
		nullptr,
		"EAbilityActivationPolicy",
		"EAbilityActivationPolicy",
		Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityActivationPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execAddBatchGameplayCueParam_HitResult)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_BatchedCueTag);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBatchGameplayCueParam_HitResult(Z_Param_BatchedCueTag,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execIsInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execK2_GetSourceObject)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayAbilityActorInfo,Z_Param_Out_ActorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->K2_GetSourceObject(Z_Param_Handle,Z_Param_Out_ActorInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execCustomApplyCost)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayAbilityActorInfo,Z_Param_Out_ActorInfo);
		P_GET_STRUCT(FGameplayAbilityActivationInfo,Z_Param_ActivationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CustomApplyCost_Implementation(Z_Param_Handle,Z_Param_Out_ActorInfo,Z_Param_ActivationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execCustomCheckCost)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayAbilityActorInfo,Z_Param_Out_ActorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CustomCheckCost_Implementation(Z_Param_Handle,Z_Param_Out_ActorInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execLocallyRemoveGameplayCueOnOwner)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyRemoveGameplayCueOnOwner(Z_Param_GameplayCueTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execLocallyAddGameplayCueOnOwner)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayCueParameters,Z_Param_GameplayCueParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyAddGameplayCueOnOwner(Z_Param_GameplayCueTag,Z_Param_GameplayCueParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandedGameplayAbility::execLocallyExecuteGameplayCueOnOwner)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayCueParameters,Z_Param_GameplayCueParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyExecuteGameplayCueOnOwner(Z_Param_GameplayCueTag,Z_Param_GameplayCueParameters);
		P_NATIVE_END;
	}
	struct ExpandedGameplayAbility_eventCustomApplyCost_Parms
	{
		FGameplayAbilitySpecHandle Handle;
		FGameplayAbilityActorInfo ActorInfo;
		FGameplayAbilityActivationInfo ActivationInfo;
	};
	struct ExpandedGameplayAbility_eventCustomCheckCost_Parms
	{
		FGameplayAbilitySpecHandle Handle;
		FGameplayAbilityActorInfo ActorInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ExpandedGameplayAbility_eventCustomCheckCost_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UExpandedGameplayAbility_CustomApplyCost = FName(TEXT("CustomApplyCost"));
	void UExpandedGameplayAbility::CustomApplyCost(const FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo const& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
	{
		ExpandedGameplayAbility_eventCustomApplyCost_Parms Parms;
		Parms.Handle=Handle;
		Parms.ActorInfo=ActorInfo;
		Parms.ActivationInfo=ActivationInfo;
		const_cast<UExpandedGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UExpandedGameplayAbility_CustomApplyCost),&Parms);
	}
	static FName NAME_UExpandedGameplayAbility_CustomCheckCost = FName(TEXT("CustomCheckCost"));
	bool UExpandedGameplayAbility::CustomCheckCost(const FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo const& ActorInfo) const
	{
		ExpandedGameplayAbility_eventCustomCheckCost_Parms Parms;
		Parms.Handle=Handle;
		Parms.ActorInfo=ActorInfo;
		const_cast<UExpandedGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UExpandedGameplayAbility_CustomCheckCost),&Parms);
		return !!Parms.ReturnValue;
	}
	void UExpandedGameplayAbility::StaticRegisterNativesUExpandedGameplayAbility()
	{
		UClass* Class = UExpandedGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBatchGameplayCueParam_HitResult", &UExpandedGameplayAbility::execAddBatchGameplayCueParam_HitResult },
			{ "CustomApplyCost", &UExpandedGameplayAbility::execCustomApplyCost },
			{ "CustomCheckCost", &UExpandedGameplayAbility::execCustomCheckCost },
			{ "IsInputPressed", &UExpandedGameplayAbility::execIsInputPressed },
			{ "K2_GetSourceObject", &UExpandedGameplayAbility::execK2_GetSourceObject },
			{ "LocallyAddGameplayCueOnOwner", &UExpandedGameplayAbility::execLocallyAddGameplayCueOnOwner },
			{ "LocallyExecuteGameplayCueOnOwner", &UExpandedGameplayAbility::execLocallyExecuteGameplayCueOnOwner },
			{ "LocallyRemoveGameplayCueOnOwner", &UExpandedGameplayAbility::execLocallyRemoveGameplayCueOnOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics
	{
		struct ExpandedGameplayAbility_eventAddBatchGameplayCueParam_HitResult_Parms
		{
			FGameplayTag BatchedCueTag;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchedCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BatchedCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_BatchedCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_BatchedCueTag = { "BatchedCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventAddBatchGameplayCueParam_HitResult_Parms, BatchedCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_BatchedCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_BatchedCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventAddBatchGameplayCueParam_HitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_BatchedCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "DisplayName", "Add Hit Result To Batched Gameplay Cue Parameter" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "AddBatchGameplayCueParam_HitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::ExpandedGameplayAbility_eventAddBatchGameplayCueParam_HitResult_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventCustomApplyCost_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_Handle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventCustomApplyCost_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActorInfo_MetaData)) }; // 4078658179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActivationInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActivationInfo = { "ActivationInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventCustomApplyCost_Parms, ActivationInfo), Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActivationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActivationInfo_MetaData)) }; // 4255034867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::NewProp_ActivationInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Customized version of the ApplyCost function, to add cost without using GameplayEffects\n// - Cannot be predicted\n" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
		{ "ToolTip", "Customized version of the ApplyCost function, to add cost without using GameplayEffects\n- Cannot be predicted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "CustomApplyCost", nullptr, nullptr, sizeof(ExpandedGameplayAbility_eventCustomApplyCost_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventCustomCheckCost_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_Handle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventCustomCheckCost_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ActorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ActorInfo_MetaData)) }; // 4078658179
	void Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedGameplayAbility_eventCustomCheckCost_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedGameplayAbility_eventCustomCheckCost_Parms), &Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Customized version of the CheckCost function, to add cost without using GameplayEffects\n// - Cannot be predicted\n" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
		{ "ToolTip", "Customized version of the CheckCost function, to add cost without using GameplayEffects\n- Cannot be predicted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "CustomCheckCost", nullptr, nullptr, sizeof(ExpandedGameplayAbility_eventCustomCheckCost_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics
	{
		struct ExpandedGameplayAbility_eventIsInputPressed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandedGameplayAbility_eventIsInputPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExpandedGameplayAbility_eventIsInputPressed_Parms), &Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Is the ability's input currently being pressed? Called on instanced abilities\n" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
		{ "ToolTip", "Is the ability's input currently being pressed? Called on instanced abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "IsInputPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::ExpandedGameplayAbility_eventIsInputPressed_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics
	{
		struct ExpandedGameplayAbility_eventK2_GetSourceObject_Parms
		{
			FGameplayAbilitySpecHandle Handle;
			FGameplayAbilityActorInfo ActorInfo;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventK2_GetSourceObject_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_Handle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventK2_GetSourceObject_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ActorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ActorInfo_MetaData)) }; // 4078658179
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventK2_GetSourceObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Exposed version of the GetSourceObject function, Called on non-instanced abilities\n" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
		{ "ToolTip", "Exposed version of the GetSourceObject function, Called on non-instanced abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "K2_GetSourceObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::ExpandedGameplayAbility_eventK2_GetSourceObject_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics
	{
		struct ExpandedGameplayAbility_eventLocallyAddGameplayCueOnOwner_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventLocallyAddGameplayCueOnOwner_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventLocallyAddGameplayCueOnOwner_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "DisplayName", "Locally Add Gameplay Cue On Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "LocallyAddGameplayCueOnOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::ExpandedGameplayAbility_eventLocallyAddGameplayCueOnOwner_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics
	{
		struct ExpandedGameplayAbility_eventLocallyExecuteGameplayCueOnOwner_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventLocallyExecuteGameplayCueOnOwner_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventLocallyExecuteGameplayCueOnOwner_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::NewProp_GameplayCueParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "DisplayName", "Locally Execute Gameplay Cue On Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "LocallyExecuteGameplayCueOnOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::ExpandedGameplayAbility_eventLocallyExecuteGameplayCueOnOwner_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics
	{
		struct ExpandedGameplayAbility_eventLocallyRemoveGameplayCueOnOwner_Parms
		{
			FGameplayTag GameplayCueTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExpandedGameplayAbility_eventLocallyRemoveGameplayCueOnOwner_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::NewProp_GameplayCueTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "DisplayName", "Locally Remove Gameplay Cue On Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandedGameplayAbility, nullptr, "LocallyRemoveGameplayCueOnOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::ExpandedGameplayAbility_eventLocallyRemoveGameplayCueOnOwner_Parms), Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandedGameplayAbility);
	UClass* Z_Construct_UClass_UExpandedGameplayAbility_NoRegister()
	{
		return UExpandedGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UExpandedGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandedGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpandedGameplayAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpandedGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_AddBatchGameplayCueParam_HitResult, "AddBatchGameplayCueParam_HitResult" }, // 4279526037
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_CustomApplyCost, "CustomApplyCost" }, // 4250603868
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_CustomCheckCost, "CustomCheckCost" }, // 1947947883
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_IsInputPressed, "IsInputPressed" }, // 355322298
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_K2_GetSourceObject, "K2_GetSourceObject" }, // 2126190186
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_LocallyAddGameplayCueOnOwner, "LocallyAddGameplayCueOnOwner" }, // 2957529019
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_LocallyExecuteGameplayCueOnOwner, "LocallyExecuteGameplayCueOnOwner" }, // 157139105
		{ &Z_Construct_UFunction_UExpandedGameplayAbility_LocallyRemoveGameplayCueOnOwner, "LocallyRemoveGameplayCueOnOwner" }, // 3374338036
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExpandedGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedGameplayAbility, ActivationPolicy), Z_Construct_UEnum_ExpandedGameplayAbilitySystem_EAbilityActivationPolicy, METADATA_PARAMS(Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData)) }; // 830442427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_InputTags_MetaData[] = {
		{ "Categories", "Input" },
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/ExpandedGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_InputTags = { "InputTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExpandedGameplayAbility, InputTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_InputTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_InputTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandedGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_ActivationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandedGameplayAbility_Statics::NewProp_InputTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandedGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandedGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandedGameplayAbility_Statics::ClassParams = {
		&UExpandedGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExpandedGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandedGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandedGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandedGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UExpandedGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandedGameplayAbility.OuterSingleton, Z_Construct_UClass_UExpandedGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandedGameplayAbility.OuterSingleton;
	}
	template<> EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UExpandedGameplayAbility>()
	{
		return UExpandedGameplayAbility::StaticClass();
	}
	UExpandedGameplayAbility::UExpandedGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandedGameplayAbility);
	UExpandedGameplayAbility::~UExpandedGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::EnumInfo[] = {
		{ EAbilityActivationPolicy_StaticEnum, TEXT("EAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 830442427U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandedGameplayAbility, UExpandedGameplayAbility::StaticClass, TEXT("UExpandedGameplayAbility"), &Z_Registration_Info_UClass_UExpandedGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandedGameplayAbility), 737920250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_625096646(TEXT("/Script/ExpandedGameplayAbilitySystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_ExpandedGameplayAbilitySystem_Source_ExpandedGameplayAbilitySystem_Public_ExpandedGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
