// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EQUIPMENTSYSTEM_EquipmentManagerComponent_generated_h
#error "EquipmentManagerComponent.generated.h already included, missing '#pragma once' in EquipmentManagerComponent.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentManagerComponent_generated_h

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentInstanceEntry_Statics; \
	EQUIPMENTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<struct FEquipmentInstanceEntry>();

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentInstancesContainer_Statics; \
	EQUIPMENTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FEquipmentInstancesContainer, Items, EQUIPMENTSYSTEM_API );


template<> EQUIPMENTSYSTEM_API UScriptStruct* StaticStruct<struct FEquipmentInstancesContainer>();

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_SPARSE_DATA
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_RPC_WRAPPERS \
	virtual void ClientUnequipEquipment_Implementation(int32 Id); \
	virtual void ClientEquipEquipment_Implementation(int32 Id); \
	virtual void ServerUnequipEquipment_Implementation(int32 Id); \
	virtual void ServerEquipEquipment_Implementation(int32 Id); \
 \
	DECLARE_FUNCTION(execClientUnequipEquipment); \
	DECLARE_FUNCTION(execClientEquipEquipment); \
	DECLARE_FUNCTION(execServerUnequipEquipment); \
	DECLARE_FUNCTION(execServerEquipEquipment);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientUnequipEquipment_Implementation(int32 Id); \
	virtual void ClientEquipEquipment_Implementation(int32 Id); \
	virtual void ServerUnequipEquipment_Implementation(int32 Id); \
	virtual void ServerEquipEquipment_Implementation(int32 Id); \
 \
	DECLARE_FUNCTION(execClientUnequipEquipment); \
	DECLARE_FUNCTION(execClientEquipEquipment); \
	DECLARE_FUNCTION(execServerUnequipEquipment); \
	DECLARE_FUNCTION(execServerEquipEquipment);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_ACCESSORS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_CALLBACK_WRAPPERS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_UEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Instances=NETFIELD_REP_START, \
		NETFIELD_REP_END=Instances	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_UEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Instances=NETFIELD_REP_START, \
		NETFIELD_REP_END=Instances	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentManagerComponent(UEquipmentManagerComponent&&); \
	NO_API UEquipmentManagerComponent(const UEquipmentManagerComponent&); \
public: \
	NO_API virtual ~UEquipmentManagerComponent();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentManagerComponent(UEquipmentManagerComponent&&); \
	NO_API UEquipmentManagerComponent(const UEquipmentManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipmentManagerComponent) \
	NO_API virtual ~UEquipmentManagerComponent();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_69_PROLOG
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_RPC_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_CALLBACK_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_INCLASS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_CALLBACK_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class UEquipmentManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Public_EquipmentManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
