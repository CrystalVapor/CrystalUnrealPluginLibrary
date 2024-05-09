// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CRRecoilInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCRRecoilComponent;
#ifdef CRYSTALRECOIL_CRRecoilInterface_generated_h
#error "CRRecoilInterface.generated.h already included, missing '#pragma once' in CRRecoilInterface.h"
#endif
#define CRYSTALRECOIL_CRRecoilInterface_generated_h

#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_SPARSE_DATA
#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetRecoilComponent); \
	DECLARE_FUNCTION(execK2_ApplyShot); \
	DECLARE_FUNCTION(execK2_EndShooting); \
	DECLARE_FUNCTION(execK2_StartShooting);


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetRecoilComponent); \
	DECLARE_FUNCTION(execK2_ApplyShot); \
	DECLARE_FUNCTION(execK2_EndShooting); \
	DECLARE_FUNCTION(execK2_StartShooting);


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_ACCESSORS
#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCRRecoilInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCRRecoilInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCRRecoilInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCRRecoilInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCRRecoilInterface(UCRRecoilInterface&&); \
	NO_API UCRRecoilInterface(const UCRRecoilInterface&); \
public: \
	NO_API virtual ~UCRRecoilInterface();


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCRRecoilInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCRRecoilInterface(UCRRecoilInterface&&); \
	NO_API UCRRecoilInterface(const UCRRecoilInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCRRecoilInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCRRecoilInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCRRecoilInterface) \
	NO_API virtual ~UCRRecoilInterface();


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCRRecoilInterface(); \
	friend struct Z_Construct_UClass_UCRRecoilInterface_Statics; \
public: \
	DECLARE_CLASS(UCRRecoilInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CrystalRecoil"), NO_API) \
	DECLARE_SERIALIZER(UCRRecoilInterface)


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICRRecoilInterface() {} \
public: \
	typedef UCRRecoilInterface UClassType; \
	typedef ICRRecoilInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ICRRecoilInterface() {} \
public: \
	typedef UCRRecoilInterface UClassType; \
	typedef ICRRecoilInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_11_PROLOG
#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_RPC_WRAPPERS \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_SPARSE_DATA \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_ACCESSORS \
	FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYSTALRECOIL_API UClass* StaticClass<class UCRRecoilInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aether_Plugins_CrystalPluginLibrary_CrystalRecoil_Source_CrystalRecoil_Public_CRRecoilInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
