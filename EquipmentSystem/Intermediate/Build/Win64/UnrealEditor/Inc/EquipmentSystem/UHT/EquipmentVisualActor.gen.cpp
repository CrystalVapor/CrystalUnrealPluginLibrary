// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentVisualActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentVisualActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentVisualActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	DEFINE_FUNCTION(AEquipmentVisualActor::execRegisterSubVisualActor)
	{
		P_GET_OBJECT(UClass,Z_Param_SubVisualActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterSubVisualActor(Z_Param_SubVisualActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentVisualActor::execIsEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentVisualActor::execGetOwnerPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwnerPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEquipmentVisualActor::execForceMakeGameplayCueParametersFromHitResult)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayCueParameters*)Z_Param__Result=AEquipmentVisualActor::ForceMakeGameplayCueParametersFromHitResult(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
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
	static FName NAME_AEquipmentVisualActor_K2_OnVisualActorInitialized = FName(TEXT("K2_OnVisualActorInitialized"));
	void AEquipmentVisualActor::K2_OnVisualActorInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEquipmentVisualActor_K2_OnVisualActorInitialized),NULL);
	}
	void AEquipmentVisualActor::StaticRegisterNativesAEquipmentVisualActor()
	{
		UClass* Class = AEquipmentVisualActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceMakeGameplayCueParametersFromHitResult", &AEquipmentVisualActor::execForceMakeGameplayCueParametersFromHitResult },
			{ "GetOwnerPawn", &AEquipmentVisualActor::execGetOwnerPawn },
			{ "IsEquipped", &AEquipmentVisualActor::execIsEquipped },
			{ "RegisterSubVisualActor", &AEquipmentVisualActor::execRegisterSubVisualActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics
	{
		struct EquipmentVisualActor_eventForceMakeGameplayCueParametersFromHitResult_Parms
		{
			FHitResult HitResult;
			FGameplayCueParameters ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_eventForceMakeGameplayCueParametersFromHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_eventForceMakeGameplayCueParametersFromHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Forced make gameplay cue parameters from hit result where the hit result is a blocking hit or not\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
		{ "ToolTip", "Forced make gameplay cue parameters from hit result where the hit result is a blocking hit or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "ForceMakeGameplayCueParametersFromHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::EquipmentVisualActor_eventForceMakeGameplayCueParametersFromHitResult_Parms), Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics
	{
		struct EquipmentVisualActor_eventGetOwnerPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_eventGetOwnerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// try to get the owner of the instance as a pawn.\n" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
		{ "ToolTip", "try to get the owner of the instance as a pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "GetOwnerPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::EquipmentVisualActor_eventGetOwnerPawn_Parms), Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics
	{
		struct EquipmentVisualActor_eventIsEquipped_Parms
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
	void Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EquipmentVisualActor_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EquipmentVisualActor_eventIsEquipped_Parms), &Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "IsEquipped", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::EquipmentVisualActor_eventIsEquipped_Parms), Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "K2_OnVisualActorInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics
	{
		struct EquipmentVisualActor_eventRegisterSubVisualActor_Parms
		{
			TSubclassOf<AEquipmentVisualActor>  SubVisualActorClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SubVisualActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::NewProp_SubVisualActorClass = { "SubVisualActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentVisualActor_eventRegisterSubVisualActor_Parms, SubVisualActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEquipmentVisualActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::NewProp_SubVisualActorClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// register a sub visual actor to the owner instance's visual actors list.\n" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
		{ "ToolTip", "register a sub visual actor to the owner instance's visual actors list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentVisualActor, nullptr, "RegisterSubVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::EquipmentVisualActor_eventRegisterSubVisualActor_Parms), Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterVisualActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterVisualActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubVisualActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubVisualActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubVisualActors;
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
		{ &Z_Construct_UFunction_AEquipmentVisualActor_ForceMakeGameplayCueParametersFromHitResult, "ForceMakeGameplayCueParametersFromHitResult" }, // 3295079095
		{ &Z_Construct_UFunction_AEquipmentVisualActor_GetOwnerPawn, "GetOwnerPawn" }, // 3573568816
		{ &Z_Construct_UFunction_AEquipmentVisualActor_IsEquipped, "IsEquipped" }, // 2363664895
		{ &Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedEquipped, "K2_NotifiedEquipped" }, // 1049052628
		{ &Z_Construct_UFunction_AEquipmentVisualActor_K2_NotifiedUnequipped, "K2_NotifiedUnequipped" }, // 622511221
		{ &Z_Construct_UFunction_AEquipmentVisualActor_K2_OnVisualActorInitialized, "K2_OnVisualActorInitialized" }, // 3738012881
		{ &Z_Construct_UFunction_AEquipmentVisualActor_RegisterSubVisualActor, "RegisterSubVisualActor" }, // 1648821180
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentVisualActor.h" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EquipmentVisualActor" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance = { "OwnerInstance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentVisualActor, OwnerInstance), Z_Construct_UClass_AEquipmentInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_MasterVisualActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EquipmentVisualActor" },
		{ "Comment", "// the Visual actor that registered this visual actor as a sub visual actor.\n" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
		{ "ToolTip", "the Visual actor that registered this visual actor as a sub visual actor." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_MasterVisualActor = { "MasterVisualActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentVisualActor, MasterVisualActor), Z_Construct_UClass_AEquipmentVisualActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_MasterVisualActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_MasterVisualActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors_Inner = { "SubVisualActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AEquipmentVisualActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EquipmentVisualActor" },
		{ "Comment", "// registered sub visual actors.\n" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
		{ "ToolTip", "registered sub visual actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors = { "SubVisualActors", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentVisualActor, SubVisualActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EquipmentVisualActor" },
		{ "Comment", "// Specific tags for this visual actor.\n" },
		{ "ModuleRelativePath", "Public/EquipmentVisualActor.h" },
		{ "ToolTip", "Specific tags for this visual actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags = { "VisualActorTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEquipmentVisualActor, VisualActorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquipmentVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_OwnerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_MasterVisualActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_SubVisualActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentVisualActor_Statics::NewProp_VisualActorTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEquipmentVisualActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AEquipmentVisualActor, IGameplayCueInterface), false },  // 462976300
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AEquipmentVisualActor, IAbilitySystemInterface), false },  // 220555618
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
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEquipmentVisualActor, AEquipmentVisualActor::StaticClass, TEXT("AEquipmentVisualActor"), &Z_Registration_Info_UClass_AEquipmentVisualActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipmentVisualActor), 2427851980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_4146558528(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentVisualActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
