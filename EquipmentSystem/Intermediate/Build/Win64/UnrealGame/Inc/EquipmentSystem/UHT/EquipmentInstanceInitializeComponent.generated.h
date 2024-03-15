// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentInstanceInitializeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EQUIPMENTSYSTEM_EquipmentInstanceInitializeComponent_generated_h
#error "EquipmentInstanceInitializeComponent.generated.h already included, missing '#pragma once' in EquipmentInstanceInitializeComponent.h"
#endif
#define EQUIPMENTSYSTEM_EquipmentInstanceInitializeComponent_generated_h

#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_SPARSE_DATA
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ManagerComponent); \
	DECLARE_FUNCTION(execOnRep_FeatureTags); \
	DECLARE_FUNCTION(execOnRep_Definition);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ManagerComponent); \
	DECLARE_FUNCTION(execOnRep_FeatureTags); \
	DECLARE_FUNCTION(execOnRep_Definition);


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_ACCESSORS
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentInstanceInitializeComponent(); \
	friend struct Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentInstanceInitializeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentInstanceInitializeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Definition=NETFIELD_REP_START, \
		FeatureTags, \
		ManagerComponent, \
		NETFIELD_REP_END=ManagerComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentInstanceInitializeComponent(); \
	friend struct Z_Construct_UClass_UEquipmentInstanceInitializeComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentInstanceInitializeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EquipmentSystem"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentInstanceInitializeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Definition=NETFIELD_REP_START, \
		FeatureTags, \
		ManagerComponent, \
		NETFIELD_REP_END=ManagerComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentInstanceInitializeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentInstanceInitializeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentInstanceInitializeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentInstanceInitializeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentInstanceInitializeComponent(UEquipmentInstanceInitializeComponent&&); \
	NO_API UEquipmentInstanceInitializeComponent(const UEquipmentInstanceInitializeComponent&); \
public: \
	NO_API virtual ~UEquipmentInstanceInitializeComponent();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentInstanceInitializeComponent(UEquipmentInstanceInitializeComponent&&); \
	NO_API UEquipmentInstanceInitializeComponent(const UEquipmentInstanceInitializeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentInstanceInitializeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentInstanceInitializeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipmentInstanceInitializeComponent) \
	NO_API virtual ~UEquipmentInstanceInitializeComponent();


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_16_PROLOG
#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_RPC_WRAPPERS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_INCLASS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_SPARSE_DATA \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_ACCESSORS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EQUIPMENTSYSTEM_API UClass* StaticClass<class UEquipmentInstanceInitializeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_CrystalPluginLibrary_EquipmentSystem_Source_EquipmentSystem_Private_EquipmentInstanceInitializeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
