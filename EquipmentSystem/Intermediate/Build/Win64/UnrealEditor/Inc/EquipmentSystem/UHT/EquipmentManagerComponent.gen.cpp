// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentSystem/Public/EquipmentManagerComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentManagerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_AEquipmentInstance_NoRegister();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentManagerComponent();
	EQUIPMENTSYSTEM_API UClass* Z_Construct_UClass_UEquipmentManagerComponent_NoRegister();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentInstanceEntry();
	EQUIPMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentInstancesContainer();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_EquipmentSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FEquipmentInstanceEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FEquipmentInstanceEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry;
class UScriptStruct* FEquipmentInstanceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentInstanceEntry, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentInstanceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentInstanceEntry>()
{
	return FEquipmentInstanceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteEquipped_MetaData[];
#endif
		static void NewProp_RemoteEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoteEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalEquipped_MetaData[];
#endif
		static void NewProp_LocalEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LocalEquipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentInstanceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentInstanceEntry, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentInstanceEntry, Instance), Z_Construct_UClass_AEquipmentInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped_SetBit(void* Obj)
	{
		((FEquipmentInstanceEntry*)Obj)->RemoteEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped = { "RemoteEquipped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEquipmentInstanceEntry), &Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped_SetBit(void* Obj)
	{
		((FEquipmentInstanceEntry*)Obj)->LocalEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped = { "LocalEquipped", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEquipmentInstanceEntry), &Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_RemoteEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewProp_LocalEquipped,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"EquipmentInstanceEntry",
		sizeof(FEquipmentInstanceEntry),
		alignof(FEquipmentInstanceEntry),
		Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentInstanceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEquipmentInstancesContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FEquipmentInstancesContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer;
class UScriptStruct* FEquipmentInstancesContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentInstancesContainer, (UObject*)Z_Construct_UPackage__Script_EquipmentSystem(), TEXT("EquipmentInstancesContainer"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer.OuterSingleton;
}
template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<FEquipmentInstancesContainer>()
{
	return FEquipmentInstancesContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FEquipmentInstancesContainer);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FEquipmentInstancesContainer);
#endif
	struct Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentInstancesContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEquipmentInstanceEntry, METADATA_PARAMS(nullptr, 0) }; // 3335086721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentInstancesContainer, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items_MetaData)) }; // 3335086721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEquipmentInstancesContainer, Manager), Z_Construct_UClass_UEquipmentManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Manager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewProp_Manager,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"EquipmentInstancesContainer",
		sizeof(FEquipmentInstancesContainer),
		alignof(FEquipmentInstancesContainer),
		Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentInstancesContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UEquipmentManagerComponent::execClientUnequipEquipment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUnequipEquipment_Implementation(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentManagerComponent::execClientEquipEquipment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEquipEquipment_Implementation(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentManagerComponent::execServerUnequipEquipment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUnequipEquipment_Implementation(Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentManagerComponent::execServerEquipEquipment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipEquipment_Implementation(Z_Param_Id);
		P_NATIVE_END;
	}
	struct EquipmentManagerComponent_eventClientEquipEquipment_Parms
	{
		int32 Id;
	};
	struct EquipmentManagerComponent_eventClientUnequipEquipment_Parms
	{
		int32 Id;
	};
	struct EquipmentManagerComponent_eventServerEquipEquipment_Parms
	{
		int32 Id;
	};
	struct EquipmentManagerComponent_eventServerUnequipEquipment_Parms
	{
		int32 Id;
	};
	static FName NAME_UEquipmentManagerComponent_ClientEquipEquipment = FName(TEXT("ClientEquipEquipment"));
	void UEquipmentManagerComponent::ClientEquipEquipment(int32 Id)
	{
		EquipmentManagerComponent_eventClientEquipEquipment_Parms Parms;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentManagerComponent_ClientEquipEquipment),&Parms);
	}
	static FName NAME_UEquipmentManagerComponent_ClientUnequipEquipment = FName(TEXT("ClientUnequipEquipment"));
	void UEquipmentManagerComponent::ClientUnequipEquipment(int32 Id)
	{
		EquipmentManagerComponent_eventClientUnequipEquipment_Parms Parms;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentManagerComponent_ClientUnequipEquipment),&Parms);
	}
	static FName NAME_UEquipmentManagerComponent_ServerEquipEquipment = FName(TEXT("ServerEquipEquipment"));
	void UEquipmentManagerComponent::ServerEquipEquipment(int32 Id)
	{
		EquipmentManagerComponent_eventServerEquipEquipment_Parms Parms;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentManagerComponent_ServerEquipEquipment),&Parms);
	}
	static FName NAME_UEquipmentManagerComponent_ServerUnequipEquipment = FName(TEXT("ServerUnequipEquipment"));
	void UEquipmentManagerComponent::ServerUnequipEquipment(int32 Id)
	{
		EquipmentManagerComponent_eventServerUnequipEquipment_Parms Parms;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_UEquipmentManagerComponent_ServerUnequipEquipment),&Parms);
	}
	void UEquipmentManagerComponent::StaticRegisterNativesUEquipmentManagerComponent()
	{
		UClass* Class = UEquipmentManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEquipEquipment", &UEquipmentManagerComponent::execClientEquipEquipment },
			{ "ClientUnequipEquipment", &UEquipmentManagerComponent::execClientUnequipEquipment },
			{ "ServerEquipEquipment", &UEquipmentManagerComponent::execServerEquipEquipment },
			{ "ServerUnequipEquipment", &UEquipmentManagerComponent::execServerUnequipEquipment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentManagerComponent_eventClientEquipEquipment_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentManagerComponent, nullptr, "ClientEquipEquipment", nullptr, nullptr, sizeof(EquipmentManagerComponent_eventClientEquipEquipment_Parms), Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentManagerComponent_eventClientUnequipEquipment_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentManagerComponent, nullptr, "ClientUnequipEquipment", nullptr, nullptr, sizeof(EquipmentManagerComponent_eventClientUnequipEquipment_Parms), Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentManagerComponent_eventServerEquipEquipment_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentManagerComponent, nullptr, "ServerEquipEquipment", nullptr, nullptr, sizeof(EquipmentManagerComponent_eventServerEquipEquipment_Parms), Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EquipmentManagerComponent_eventServerUnequipEquipment_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentManagerComponent, nullptr, "ServerUnequipEquipment", nullptr, nullptr, sizeof(EquipmentManagerComponent_eventServerUnequipEquipment_Parms), Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentManagerComponent);
	UClass* Z_Construct_UClass_UEquipmentManagerComponent_NoRegister()
	{
		return UEquipmentManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EquipmentSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentManagerComponent_ClientEquipEquipment, "ClientEquipEquipment" }, // 955307000
		{ &Z_Construct_UFunction_UEquipmentManagerComponent_ClientUnequipEquipment, "ClientUnequipEquipment" }, // 3377763749
		{ &Z_Construct_UFunction_UEquipmentManagerComponent_ServerEquipEquipment, "ServerEquipEquipment" }, // 4049918174
		{ &Z_Construct_UFunction_UEquipmentManagerComponent_ServerUnequipEquipment, "ServerUnequipEquipment" }, // 932664157
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Equipment manager component.\n * This component expected to be on a pawn owned by a player controller.\n */" },
		{ "IncludePath", "EquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
		{ "ToolTip", "Equipment manager component.\nThis component expected to be on a pawn owned by a player controller." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_Instances_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0020088000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentManagerComponent, Instances), Z_Construct_UScriptStruct_FEquipmentInstancesContainer, METADATA_PARAMS(Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_Instances_MetaData)) }; // 2993716091
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEquipmentManagerComponent, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentManagerComponent_Statics::NewProp_AbilitySystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentManagerComponent_Statics::ClassParams = {
		&UEquipmentManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UEquipmentManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_UEquipmentManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipmentManagerComponent.OuterSingleton;
	}
	template<> EQUIPMENTSYSTEM_API UClass* StaticClass<UEquipmentManagerComponent>()
	{
		return UEquipmentManagerComponent::StaticClass();
	}

	void UEquipmentManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Instances(TEXT("Instances"));

		const bool bIsValid = true
			&& Name_Instances == ClassReps[(int32)ENetFields_Private::Instances].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEquipmentManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentManagerComponent);
	UEquipmentManagerComponent::~UEquipmentManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics::ScriptStructInfo[] = {
		{ FEquipmentInstanceEntry::StaticStruct, Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics::NewStructOps, TEXT("EquipmentInstanceEntry"), &Z_Registration_Info_UScriptStruct_EquipmentInstanceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentInstanceEntry), 3335086721U) },
		{ FEquipmentInstancesContainer::StaticStruct, Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics::NewStructOps, TEXT("EquipmentInstancesContainer"), &Z_Registration_Info_UScriptStruct_EquipmentInstancesContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentInstancesContainer), 2993716091U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentManagerComponent, UEquipmentManagerComponent::StaticClass, TEXT("UEquipmentManagerComponent"), &Z_Registration_Info_UClass_UEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentManagerComponent), 890190387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_1704104036(TEXT("/Script/EquipmentSystem"),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
