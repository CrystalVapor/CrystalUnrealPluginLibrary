// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentReplicatedPropertyManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef EQUIPMENTSYSTEM_EquipmentReplicatedPropertyManagerComponent_generated_h
#error "EquipmentReplicatedPropertyManagerComponent.generated.h already included, missing '#pragma once' in EquipmentReplicatedPropertyManagerComponent.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentReplicatedPropertyManagerComponent_generated_h

#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentReplicatedProperty_Statics; \
	EQUIPMENTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<struct FEquipmentReplicatedProperty>();

#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentReplicatedPropertySet_Statics; \
	EQUIPMENTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FEquipmentReplicatedPropertySet, Items, EQUIPMENTSYSTEM_API );


template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<struct FEquipmentReplicatedPropertySet>();

#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_SPARSE_DATA
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_RPC_WRAPPERS \
	virtual void ClientSyncProperty_Implementation(FGameplayTag PropertyTag, uint8 RequestSyncKey, float RemoteValue); \
	virtual void ServerSyncProperty_Implementation(FGameplayTag PropertyTag, uint8 RequestSyncKey); \
 \
	DECLARE_FUNCTION(execClientSyncProperty); \
	DECLARE_FUNCTION(execServerSyncProperty);


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientSyncProperty_Implementation(FGameplayTag PropertyTag, uint8 RequestSyncKey, float RemoteValue); \
	virtual void ServerSyncProperty_Implementation(FGameplayTag PropertyTag, uint8 RequestSyncKey); \
 \
	DECLARE_FUNCTION(execClientSyncProperty); \
	DECLARE_FUNCTION(execServerSyncProperty);


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_ACCESSORS
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_CALLBACK_WRAPPERS
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentReplicatedPropertyManagerComponent(); \
	friend struct Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentReplicatedPropertyManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentReplicatedPropertyManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Properties=NETFIELD_REP_START, \
		NETFIELD_REP_END=Properties	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentReplicatedPropertyManagerComponent(); \
	friend struct Z_Construct_UClass_UEquipmentReplicatedPropertyManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentReplicatedPropertyManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentReplicatedPropertyManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Properties=NETFIELD_REP_START, \
		NETFIELD_REP_END=Properties	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentReplicatedPropertyManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentReplicatedPropertyManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentReplicatedPropertyManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentReplicatedPropertyManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentReplicatedPropertyManagerComponent(UEquipmentReplicatedPropertyManagerComponent&&); \
	NO_API UEquipmentReplicatedPropertyManagerComponent(const UEquipmentReplicatedPropertyManagerComponent&); \
public: \
	NO_API virtual ~UEquipmentReplicatedPropertyManagerComponent();


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentReplicatedPropertyManagerComponent(UEquipmentReplicatedPropertyManagerComponent&&); \
	NO_API UEquipmentReplicatedPropertyManagerComponent(const UEquipmentReplicatedPropertyManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentReplicatedPropertyManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentReplicatedPropertyManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipmentReplicatedPropertyManagerComponent) \
	NO_API virtual ~UEquipmentReplicatedPropertyManagerComponent();


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_69_PROLOG
#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_RPC_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_INCLASS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_CALLBACK_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_INCLASS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class UEquipmentReplicatedPropertyManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aether_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentReplicatedPropertyManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
