// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentGameplayAbility.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentGameplayAbility() {}
// Cross Module References
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentGameplayAbility_NoRegister();
	EQUIPMENTSYSTEM_API UEnum* Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit();
	EXPANDEDGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UExpandedGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit;
	static UEnum* EEquipmentAbilityActivationLimit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EEquipmentAbilityActivationLimit"));
		}
		return Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UEnum* StaticEnum<EEquipmentAbilityActivationLimit>()
	{
		return EEquipmentAbilityActivationLimit_StaticEnum();
	}
	struct Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::Enumerators[] = {
		{ "EEquipmentAbilityActivationLimit::None", (int64)EEquipmentAbilityActivationLimit::None },
		{ "EEquipmentAbilityActivationLimit::ActivatedOnly", (int64)EEquipmentAbilityActivationLimit::ActivatedOnly },
		{ "EEquipmentAbilityActivationLimit::DeactivatedOnly", (int64)EEquipmentAbilityActivationLimit::DeactivatedOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::Enum_MetaDataParams[] = {
		{ "ActivatedOnly.Name", "EEquipmentAbilityActivationLimit::ActivatedOnly" },
		{ "DeactivatedOnly.Name", "EEquipmentAbilityActivationLimit::DeactivatedOnly" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "None.Name", "EEquipmentAbilityActivationLimit::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EquipmentSystem,
		nullptr,
		"EEquipmentAbilityActivationLimit",
		"EEquipmentAbilityActivationLimit",
		Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit.InnerSingleton, Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit.InnerSingleton;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execLocallyRemoveGameplayCueOnVisualActor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyRemoveGameplayCueOnVisualActor(Z_Param_GameplayCueTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execLocallyAddGameplayCueOnVisualActor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayCueParameters,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyAddGameplayCueOnVisualActor(Z_Param_GameplayCueTag,Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execLocallyExecuteGameplayCueOnVisualActor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayCueParameters,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocallyExecuteGameplayCueOnVisualActor(Z_Param_GameplayCueTag,Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execRemoveGameplayCueOnVisualActor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameplayCueOnVisualActor(Z_Param_GameplayCueTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execAddGameplayCueOnVisualActor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayCueParameters,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGameplayCueOnVisualActor(Z_Param_GameplayCueTag,Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execExecuteGameplayCueOnVisualActor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayCueParameters,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteGameplayCueOnVisualActor(Z_Param_GameplayCueTag,Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentGameplayAbility::execGetEquipmentInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEquipmentInstance**)Z_Param__Result=P_THIS->GetEquipmentInstance();
		P_NATIVE_END;
	}
	void UEquipmentGameplayAbility::StaticRegisterNativesUEquipmentGameplayAbility()
	{
		UClass* Class = UEquipmentGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayCueOnVisualActor", &UEquipmentGameplayAbility::execAddGameplayCueOnVisualActor },
			{ "ExecuteGameplayCueOnVisualActor", &UEquipmentGameplayAbility::execExecuteGameplayCueOnVisualActor },
			{ "GetEquipmentInstance", &UEquipmentGameplayAbility::execGetEquipmentInstance },
			{ "LocallyAddGameplayCueOnVisualActor", &UEquipmentGameplayAbility::execLocallyAddGameplayCueOnVisualActor },
			{ "LocallyExecuteGameplayCueOnVisualActor", &UEquipmentGameplayAbility::execLocallyExecuteGameplayCueOnVisualActor },
			{ "LocallyRemoveGameplayCueOnVisualActor", &UEquipmentGameplayAbility::execLocallyRemoveGameplayCueOnVisualActor },
			{ "RemoveGameplayCueOnVisualActor", &UEquipmentGameplayAbility::execRemoveGameplayCueOnVisualActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics
	{
		struct EquipmentGameplayAbility_eventAddGameplayCueOnVisualActor_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventAddGameplayCueOnVisualActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventAddGameplayCueOnVisualActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|GameplayCue" },
		{ "Comment", "/**\n\x09 * Add a gameplay cue on the visual actor associated with the equipment instance.\n\x09 * *Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n\x09 * @param GameplayCueTag The tag of the gameplay cue to execute.\n\x09 * @param Parameters The parameters to pass to the gameplay cue.\n\x09 * @note This Function actually just add a gameplay cue one the avatar actor of the Equipment's associated ASC.\n\x09 */" },
		{ "DisplayName", "Add Gameplay Cue On Visual Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "ToolTip", "Add a gameplay cue on the visual actor associated with the equipment instance.\n*Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n@param GameplayCueTag The tag of the gameplay cue to execute.\n@param Parameters The parameters to pass to the gameplay cue.\n@note This Function actually just add a gameplay cue one the avatar actor of the Equipment's associated ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "AddGameplayCueOnVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::EquipmentGameplayAbility_eventAddGameplayCueOnVisualActor_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics
	{
		struct EquipmentGameplayAbility_eventExecuteGameplayCueOnVisualActor_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventExecuteGameplayCueOnVisualActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventExecuteGameplayCueOnVisualActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|GameplayCue" },
		{ "Comment", "/**\n\x09 * Execute a gameplay cue on the visual actor associated with the equipment instance.\n\x09 * *Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n\x09 * @param GameplayCueTag The tag of the gameplay cue to execute.\n\x09 * @param Parameters The parameters to pass to the gameplay cue.\n\x09 * @note This Function actually just execute gameplay cue one the avatar actor of the Equipment's associated ASC.\n\x09 */" },
		{ "DisplayName", "Execute Gameplay Cue On Visual Actor (Burst)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "ToolTip", "Execute a gameplay cue on the visual actor associated with the equipment instance.\n*Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n@param GameplayCueTag The tag of the gameplay cue to execute.\n@param Parameters The parameters to pass to the gameplay cue.\n@note This Function actually just execute gameplay cue one the avatar actor of the Equipment's associated ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "ExecuteGameplayCueOnVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::EquipmentGameplayAbility_eventExecuteGameplayCueOnVisualActor_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics
	{
		struct EquipmentGameplayAbility_eventGetEquipmentInstance_Parms
		{
			AEquipmentInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventGetEquipmentInstance_Parms, ReturnValue), Z_Construct_UClass_AEquipmentInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "GetEquipmentInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::EquipmentGameplayAbility_eventGetEquipmentInstance_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics
	{
		struct EquipmentGameplayAbility_eventLocallyAddGameplayCueOnVisualActor_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventLocallyAddGameplayCueOnVisualActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventLocallyAddGameplayCueOnVisualActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|GameplayCue" },
		{ "Comment", "/**\n\x09 * Add a gameplay cue on the visual actor associated with the equipment instance.\n\x09 * *Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n\x09* This function will only execute the gameplay cue on the local client.\n\x09 * @param GameplayCueTag The tag of the gameplay cue to execute.\n\x09 * @param Parameters The parameters to pass to the gameplay cue.\n\x09 * @note This Function actually just add a gameplay cue one the avatar actor of the Equipment's associated ASC.\n\x09 */" },
		{ "DisplayName", "Locally Add Gameplay Cue On Visual Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "ToolTip", "Add a gameplay cue on the visual actor associated with the equipment instance.\n*Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\nThis function will only execute the gameplay cue on the local client.\n@param GameplayCueTag The tag of the gameplay cue to execute.\n@param Parameters The parameters to pass to the gameplay cue.\n@note This Function actually just add a gameplay cue one the avatar actor of the Equipment's associated ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "LocallyAddGameplayCueOnVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::EquipmentGameplayAbility_eventLocallyAddGameplayCueOnVisualActor_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics
	{
		struct EquipmentGameplayAbility_eventLocallyExecuteGameplayCueOnVisualActor_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventLocallyExecuteGameplayCueOnVisualActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventLocallyExecuteGameplayCueOnVisualActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|GameplayCue" },
		{ "Comment", "/**\n\x09 * Execute a gameplay cue on the visual actor associated with the equipment instance.\n\x09 * *Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n\x09 * This function will only execute the gameplay cue on the local client.\n\x09 * @param GameplayCueTag The tag of the gameplay cue to execute.\n\x09 * @param Parameters The parameters to pass to the gameplay cue.\n\x09 * @note This Function actually just execute gameplay cue one the avatar actor of the Equipment's associated ASC.\n\x09 */" },
		{ "DisplayName", "Locally Execute Gameplay Cue On Visual Actor (Burst)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "ToolTip", "Execute a gameplay cue on the visual actor associated with the equipment instance.\n*Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\nThis function will only execute the gameplay cue on the local client.\n@param GameplayCueTag The tag of the gameplay cue to execute.\n@param Parameters The parameters to pass to the gameplay cue.\n@note This Function actually just execute gameplay cue one the avatar actor of the Equipment's associated ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "LocallyExecuteGameplayCueOnVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::EquipmentGameplayAbility_eventLocallyExecuteGameplayCueOnVisualActor_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics
	{
		struct EquipmentGameplayAbility_eventLocallyRemoveGameplayCueOnVisualActor_Parms
		{
			FGameplayTag GameplayCueTag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventLocallyRemoveGameplayCueOnVisualActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|GameplayCue" },
		{ "Comment", "/**\n\x09 * Remove a gameplay cue on the visual actor associated with the equipment instance.\n\x09 * *Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n\x09 * This function will only execute the gameplay cue on the local client.\n\x09 * @param GameplayCueTag The tag of the gameplay cue to execute.\n\x09 * @note This Function actually just remove a gameplay cue one the avatar actor of the Equipment's associated ASC.\n\x09 */" },
		{ "DisplayName", "Locally Remove Gameplay Cue On Visual Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "ToolTip", "Remove a gameplay cue on the visual actor associated with the equipment instance.\n*Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\nThis function will only execute the gameplay cue on the local client.\n@param GameplayCueTag The tag of the gameplay cue to execute.\n@note This Function actually just remove a gameplay cue one the avatar actor of the Equipment's associated ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "LocallyRemoveGameplayCueOnVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::EquipmentGameplayAbility_eventLocallyRemoveGameplayCueOnVisualActor_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics
	{
		struct EquipmentGameplayAbility_eventRemoveGameplayCueOnVisualActor_Parms
		{
			FGameplayTag GameplayCueTag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentGameplayAbility_eventRemoveGameplayCueOnVisualActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::NewProp_GameplayCueTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|GameplayCue" },
		{ "Comment", "/**\n\x09 * Remove a gameplay cue on the visual actor associated with the equipment instance.\n\x09 * *Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n\x09 * @param GameplayCueTag The tag of the gameplay cue to execute.\n\x09 * @note This Function actually just remove a gameplay cue one the avatar actor of the Equipment's associated ASC.\n\x09 */" },
		{ "DisplayName", "Remove Gameplay Cue On Visual Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
		{ "ToolTip", "Remove a gameplay cue on the visual actor associated with the equipment instance.\n*Note* The GameplayCue tag must be started with \"GameplayCue.Equipment.\" to be routed to the visual actor.\n@param GameplayCueTag The tag of the gameplay cue to execute.\n@note This Function actually just remove a gameplay cue one the avatar actor of the Equipment's associated ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentGameplayAbility, nullptr, "RemoveGameplayCueOnVisualActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::EquipmentGameplayAbility_eventRemoveGameplayCueOnVisualActor_Parms), Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentGameplayAbility);
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility_NoRegister()
	{
		return UEquipmentGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationLimit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationLimit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnEquip_MetaData[];
#endif
		static void NewProp_bActivateOnEquip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnEquip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnUnequip_MetaData[];
#endif
		static void NewProp_bActivateOnUnequip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnUnequip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExpandedGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_AddGameplayCueOnVisualActor, "AddGameplayCueOnVisualActor" }, // 3799768098
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_ExecuteGameplayCueOnVisualActor, "ExecuteGameplayCueOnVisualActor" }, // 900072657
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_GetEquipmentInstance, "GetEquipmentInstance" }, // 3174728181
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyAddGameplayCueOnVisualActor, "LocallyAddGameplayCueOnVisualActor" }, // 431047160
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyExecuteGameplayCueOnVisualActor, "LocallyExecuteGameplayCueOnVisualActor" }, // 3820880151
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_LocallyRemoveGameplayCueOnVisualActor, "LocallyRemoveGameplayCueOnVisualActor" }, // 4009076109
		{ &Z_Construct_UFunction_UEquipmentGameplayAbility_RemoveGameplayCueOnVisualActor, "RemoveGameplayCueOnVisualActor" }, // 2775535447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipmentGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit_MetaData[] = {
		{ "Category", "EquipmentGameplayAbility" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit = { "ActivationLimit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentGameplayAbility, ActivationLimit), Z_Construct_UEnum_EquipmentSystem_EEquipmentAbilityActivationLimit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit_MetaData)) }; // 2474307057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip_MetaData[] = {
		{ "Category", "EquipmentGameplayAbility" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip_SetBit(void* Obj)
	{
		((UEquipmentGameplayAbility*)Obj)->bActivateOnEquip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip = { "bActivateOnEquip", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEquipmentGameplayAbility), &Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip_MetaData[] = {
		{ "Category", "EquipmentGameplayAbility" },
		{ "ModuleRelativePath", "Public/EquipmentGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip_SetBit(void* Obj)
	{
		((UEquipmentGameplayAbility*)Obj)->bActivateOnUnequip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip = { "bActivateOnUnequip", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEquipmentGameplayAbility), &Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_ActivationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnEquip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentGameplayAbility_Statics::NewProp_bActivateOnUnequip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentGameplayAbility_Statics::ClassParams = {
		&UEquipmentGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UEquipmentGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentGameplayAbility.OuterSingleton, Z_Construct_UClass_UEquipmentGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentGameplayAbility.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentGameplayAbility>()
	{
		return UEquipmentGameplayAbility::StaticClass();
	}
	UEquipmentGameplayAbility::UEquipmentGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentGameplayAbility);
	UEquipmentGameplayAbility::~UEquipmentGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::EnumInfo[] = {
		{ EEquipmentAbilityActivationLimit_StaticEnum, TEXT("EEquipmentAbilityActivationLimit"), &Z_Registration_Info_UEnum_EEquipmentAbilityActivationLimit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2474307057U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentGameplayAbility, UEquipmentGameplayAbility::StaticClass, TEXT("UEquipmentGameplayAbility"), &Z_Registration_Info_UClass_UEquipmentGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentGameplayAbility), 402546294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_3372847311(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
