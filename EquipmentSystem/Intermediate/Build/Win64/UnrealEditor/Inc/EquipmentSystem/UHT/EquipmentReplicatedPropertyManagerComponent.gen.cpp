// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentReplicatedPropertyManagerComponent.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentReplicatedPropertyManagerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentReplicatedProperty();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FEquipmentReplicatedProperty>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FEquipmentReplicatedProperty cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty;
class UScriptStruct* FEquipmentReplicatedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentReplicatedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentReplicatedProperty>()
{
	return FEquipmentReplicatedProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoteValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncOnEndPrediction_MetaData[];
#endif
		static void NewProp_bSyncOnEndPrediction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncOnEndPrediction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentReplicatedProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_PropertyTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentReplicatedProperty, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_PropertyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_PropertyTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_RemoteValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_RemoteValue = { "RemoteValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentReplicatedProperty, RemoteValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_RemoteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_RemoteValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction_SetBit(void* Obj)
	{
		((FEquipmentReplicatedProperty*)Obj)->bSyncOnEndPrediction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction = { "bSyncOnEndPrediction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEquipmentReplicatedProperty), &Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_RemoteValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewProp_bSyncOnEndPrediction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"EquipmentReplicatedProperty",
		sizeof(FEquipmentReplicatedProperty),
		alignof(FEquipmentReplicatedProperty),
		Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentReplicatedProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEquipmentReplicatedPropertySet>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FEquipmentReplicatedPropertySet cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet;
class UScriptStruct* FEquipmentReplicatedPropertySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentReplicatedPropertySet"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentReplicatedPropertySet>()
{
	return FEquipmentReplicatedPropertySet::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FEquipmentReplicatedPropertySet);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FEquipmentReplicatedPropertySet);
#endif
	struct Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentReplicatedPropertySet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentReplicatedProperty, METADATA_PARAMS(nullptr, 0) }; // 1489900174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentReplicatedPropertySet, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items_MetaData)) }; // 1489900174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentReplicatedPropertySet, Owner), Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"EquipmentReplicatedPropertySet",
		sizeof(FEquipmentReplicatedPropertySet),
		alignof(FEquipmentReplicatedPropertySet),
		Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet.InnerSingleton;
	}
	DEFINE_FUNCTION(UEquipmentReplicatedPropertyManagerComponent::execClientSyncProperty)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PropertyTag);
		P_GET_PROPERTY(FByteProperty,Z_Param_RequestSyncKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RemoteValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSyncProperty_Implementation(Z_Param_PropertyTag,Z_Param_RequestSyncKey,Z_Param_RemoteValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentReplicatedPropertyManagerComponent::execServerSyncProperty)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_PropertyTag);
		P_GET_PROPERTY(FByteProperty,Z_Param_RequestSyncKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSyncProperty_Implementation(Z_Param_PropertyTag,Z_Param_RequestSyncKey);
		P_NATIVE_END;
	}
	struct EquipmentReplicatedPropertyManagerComponent_eventClientSyncProperty_Parms
	{
		FGameplayTag PropertyTag;
		uint8 RequestSyncKey;
		float RemoteValue;
	};
	struct EquipmentReplicatedPropertyManagerComponent_eventServerSyncProperty_Parms
	{
		FGameplayTag PropertyTag;
		uint8 RequestSyncKey;
	};
	static FName NAME_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty = FName(TEXT("ClientSyncProperty"));
	void UEquipmentReplicatedPropertyManagerComponent::ClientSyncProperty(FGameplayTag PropertyTag, uint8 RequestSyncKey, float RemoteValue)
	{
		EquipmentReplicatedPropertyManagerComponent_eventClientSyncProperty_Parms Parms;
		Parms.PropertyTag=PropertyTag;
		Parms.RequestSyncKey=RequestSyncKey;
		Parms.RemoteValue=RemoteValue;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty),&Parms);
	}
	static FName NAME_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty = FName(TEXT("ServerSyncProperty"));
	void UEquipmentReplicatedPropertyManagerComponent::ServerSyncProperty(FGameplayTag PropertyTag, uint8 RequestSyncKey)
	{
		EquipmentReplicatedPropertyManagerComponent_eventServerSyncProperty_Parms Parms;
		Parms.PropertyTag=PropertyTag;
		Parms.RequestSyncKey=RequestSyncKey;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty),&Parms);
	}
	void UEquipmentReplicatedPropertyManagerComponent::StaticRegisterNativesUEquipmentReplicatedPropertyManagerComponent()
	{
		UClass* Class = UEquipmentReplicatedPropertyManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientSyncProperty", &UEquipmentReplicatedPropertyManagerComponent::execClientSyncProperty },
			{ "ServerSyncProperty", &UEquipmentReplicatedPropertyManagerComponent::execServerSyncProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestSyncKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoteValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentReplicatedPropertyManagerComponent_eventClientSyncProperty_Parms, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::NewProp_RequestSyncKey = { "RequestSyncKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentReplicatedPropertyManagerComponent_eventClientSyncProperty_Parms, RequestSyncKey), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::NewProp_RemoteValue = { "RemoteValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentReplicatedPropertyManagerComponent_eventClientSyncProperty_Parms, RemoteValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::NewProp_RequestSyncKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::NewProp_RemoteValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent, nullptr, "ClientSyncProperty", nullptr, nullptr, sizeof(EquipmentReplicatedPropertyManagerComponent_eventClientSyncProperty_Parms), Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestSyncKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::NewProp_PropertyTag = { "PropertyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentReplicatedPropertyManagerComponent_eventServerSyncProperty_Parms, PropertyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::NewProp_RequestSyncKey = { "RequestSyncKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentReplicatedPropertyManagerComponent_eventServerSyncProperty_Parms, RequestSyncKey), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::NewProp_PropertyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::NewProp_RequestSyncKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent, nullptr, "ServerSyncProperty", nullptr, nullptr, sizeof(EquipmentReplicatedPropertyManagerComponent_eventServerSyncProperty_Parms), Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentReplicatedPropertyManagerComponent);
	UClass* Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_NoRegister()
	{
		return UEquipmentReplicatedPropertyManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ClientSyncProperty, "ClientSyncProperty" }, // 597646825
		{ &Z_Construct_UFunction_UEquipmentReplicatedPropertyManagerComponent_ServerSyncProperty, "ServerSyncProperty" }, // 1002100997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentReplicatedPropertyManagerComponent.h" },
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentReplicatedPropertyManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0020088000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentReplicatedPropertyManagerComponent, Properties), Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet, METADATA_PARAMS(Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::NewProp_Properties_MetaData)) }; // 1493019172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentReplicatedPropertyManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::ClassParams = {
		&UEquipmentReplicatedPropertyManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UEquipmentReplicatedPropertyManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentReplicatedPropertyManagerComponent.OuterSingleton, Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentReplicatedPropertyManagerComponent.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentReplicatedPropertyManagerComponent>()
	{
		return UEquipmentReplicatedPropertyManagerComponent::StaticClass();
	}

	void UEquipmentReplicatedPropertyManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Properties(TEXT("Properties"));

		const bool bIsValid = true
			&& Name_Properties == ClassReps[(int32)ENetFields_Private::Properties].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEquipmentReplicatedPropertyManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentReplicatedPropertyManagerComponent);
	UEquipmentReplicatedPropertyManagerComponent::~UEquipmentReplicatedPropertyManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentReplicatedProperty::StaticStruct, Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics::NewStructOps, TEXT("EquipmentReplicatedProperty"), &Z_Registration_Info_UScriptStruct_EquipmentReplicatedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentReplicatedProperty), 1489900174U) },
		{ FEquipmentReplicatedPropertySet::StaticStruct, Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics::NewStructOps, TEXT("EquipmentReplicatedPropertySet"), &Z_Registration_Info_UScriptStruct_EquipmentReplicatedPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentReplicatedPropertySet), 1493019172U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent, UEquipmentReplicatedPropertyManagerComponent::StaticClass, TEXT("UEquipmentReplicatedPropertyManagerComponent"), &Z_Registration_Info_UClass_UEquipmentReplicatedPropertyManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentReplicatedPropertyManagerComponent), 3892252957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_3722011978(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
