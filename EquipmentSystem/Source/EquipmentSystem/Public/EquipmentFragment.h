// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "NativeGameplayTags.h"
#include "Engine/AssetManager.h"
#include "EquipmentFragment.generated.h"

class AEquipmentInstance;
DECLARE_DELEGATE_RetVal(float, FSimpleFloatGetter)

DECLARE_DELEGATE_RetVal(float&, FFragmentFloatPropertyGetter)
DECLARE_DELEGATE_RetVal(FGameplayTagContainer&, FFragmentTagContainerPropertyGetter)
DECLARE_DELEGATE_RetVal(FRuntimeFloatCurve&, FFragmentCurvePropertyGetter)

/**
 * Life Saver Macros for defining and declaring property tags
 * Use Declarer in header and Definer in cpp
 */
#define FRAGMENT_DECLARE_PROPERTY_TAG(PropertyName) \
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Equipment_Property_##PropertyName##)
#define FRAGMENT_DEFINE_PROPERTY_TAG(PropertyName) \
	UE_DEFINE_GAMEPLAY_TAG(Equipment_Property_##PropertyName##, "Equipment.Property."#PropertyName)
#define PROPERTY_TAG(PropertyName) Equipment_Property_##PropertyName

/**
 * Life Saver Macros for declaring and defining property getters
 * requires property tag to be defined
 * use them in fragment class's definition
 */
#define FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(PropertyName) \
	FFragmentFloatPropertyGetter Get##PropertyName##Delegate;\
	virtual float& Get##PropertyName(){ return PropertyName; }\
	float& InternalGet##PropertyName(){ return PropertyName; }\
	FGameplayTag PropertyName##Tag = PROPERTY_TAG(PropertyName);
#define FRAGMENT_DECLARE_TAG_PROPERTY_GETTER(PropertyName) \
	FFragmentTagContainerPropertyGetter Get##PropertyName##Delegate;\
	virtual FGameplayTagContainer& Get##PropertyName(){ return PropertyName; }\
	FGameplayTagContainer& InternalGet##PropertyName(){ return PropertyName; }\
	FGameplayTag PropertyName##Tag = PROPERTY_TAG(PropertyName);
#define FRAGMENT_DECLARE_CURVE_PROPERTY_GETTER(PropertyName) \
	FFragmentCurvePropertyGetter Get##PropertyName##Delegate;\
	virtual FRuntimeFloatCurve& Get##PropertyName(){ return PropertyName; }\
	FRuntimeFloatCurve& InternalGet##PropertyName(){ return PropertyName; }\
	FGameplayTag PropertyName##Tag = PROPERTY_TAG(PropertyName);

/**
 * Used for declaring meta float property
 * meta property is the property that does not concern about the default value
 * used as some cached value that locally calculated
 * remember all the value in Fragment will not be replicated.
 */
#define FRAGMENT_DECLARE_FLOAT_PROPERTY_SETTER(PropertyName) \
	virtual void Set##PropertyName(float Value){ PropertyName = Value; }
#define FRAGMENT_DEFINE_META_FLOAT_PROPERTY(PropertyName, DefaultValue) \
	float PropertyName = DefaultValue;\
	FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(PropertyName)\
	FRAGMENT_DECLARE_FLOAT_PROPERTY_SETTER(PropertyName)

// use these in HandleChildInsideInitialize
#define FRAGMENT_REGISTER_FLOAT_PROPERTY_GETTER(ClassName ,PropertyName) \
	Get##PropertyName##Delegate.BindUObject(this, &##ClassName##::Get##PropertyName);\
	FloatPropertyGetters.Add(PropertyName##Tag, Get##PropertyName##Delegate);\
	PropertyTags.AddTag(PropertyName##Tag);
#define FRAGMENT_REGISTER_TAG_PROPERTY_GETTER(ClassName ,PropertyName) \
	Get##PropertyName##Delegate.BindUObject(this, &##ClassName##::Get##PropertyName);\
	TagContainerPropertyGetters.Add(PropertyName##Tag, Get##PropertyName##Delegate);\
	PropertyTags.AddTag(PropertyName##Tag);
#define FRAGMENT_REGISTER_CURVE_PROPERTY_GETTER(ClassName ,PropertyName) \
	Get##PropertyName##Delegate.BindUObject(this, &##ClassName##::Get##PropertyName);\
	CurvePropertyGetters.Add(PropertyName##Tag, Get##PropertyName##Delegate);\
	PropertyTags.AddTag(PropertyName##Tag);

// use this in AsyncLoadAssets
#define FRAGMENT_REGISTER_ASSET_ASYNC_LOADER(AssetName) \
	if(!AssetName.IsValid())\
		GEngine->AssetManager->GetStreamableManager().RequestAsyncLoad(AssetName.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UEquipmentFragment::CheckRuminativeInitializationFinished))

// use this in CheckAssetsFullyLoaded
#define FRAGMENT_REGISTER_ASSET_ASYNC_CHECKER(AsssetName) \
	bIsFullyLoaded &= AsssetName.IsValid()

USTRUCT()
struct FFragmentRegisteredModifier
{
	GENERATED_BODY()
	FGameplayTag PropertyTag;
	float Adder = 0.f;
	float Multiplier = 1.f;
	FGameplayTagContainer AddTags;
	FGameplayTagContainer RemoveTags;
	FRuntimeFloatCurve* Curve = nullptr;
	int32 CurvePriority = -1;
	
	FFragmentRegisteredModifier& Append(const FFragmentRegisteredModifier& Other);
	void Apply(float& Value);
	void Apply(FRuntimeFloatCurve& InCurve);
	void Apply(FGameplayTagContainer& Tags);
};

USTRUCT()
struct FFragmentRegisteredModifierContainer
{
	GENERATED_BODY()
	UPROPERTY()
	TArray<FFragmentRegisteredModifier> Modifiers;
	
	FFragmentRegisteredModifierContainer& Append(const FFragmentRegisteredModifierContainer& Other);
	FFragmentRegisteredModifierContainer& Append(const FFragmentRegisteredModifier& Other);
};

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class EQUIPMENTSYSTEM_API UEquipmentFragment : public UObject
{
	GENERATED_BODY()
public:
	bool HasProperty(FGameplayTag PropertyTag) const;

	AEquipmentInstance* GetEquipmentInstance();
	
	const float& GetFloatProperty(FGameplayTag PropertyTag);
	const FRuntimeFloatCurve& GetCurveProperty(FGameplayTag PropertyTag);
	const FGameplayTagContainer& GetTagContainerProperty(FGameplayTag PropertyTag);

	void NotifyStartInsideInitialize(AEquipmentInstance* Instance);
	void NotifyStartOutsideInitialize(AEquipmentInstance* Instance);
	void NotifyStartRuminativeInitialize(AEquipmentInstance* Instance);
	void NotifyStartFinalInitialize(AEquipmentInstance* Instance);

	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) {};
	virtual void HandleChildOutsideInitialize(AEquipmentInstance* Instance) {};
	virtual void HandleChildRuminativeInitialize(AEquipmentInstance* Instance) {};
	virtual void HandleChildFinialInitialize(AEquipmentInstance* Instance) {};

	void CheckInsideInitializationFinished();
	void CheckOutsideInitializationFinished();
	void CheckRuminativeInitializationFinished();
	void CheckFinialInitializationFinished();
	
	void HandleInsideInitialized();;
	FSimpleDelegate InstanceNotifyDelegate_InsideInitialized;
	void HandleOutsideInitialized();;
	FSimpleDelegate InstanceNotifyDelegate_OnOutsideInitialized;
	void HandleRuminativeInitialized();;
	FSimpleDelegate InstanceNotifyDelegate_OnRuminativeInitialized;
	void HandleFinialInitialized();;
	FSimpleDelegate InstanceNotifyDelegate_OnFinialInitialized;

	bool bIsInsideInitialized = false;
	bool bIsOutsideInitialized = false;
	bool bIsRuminativeInitialized = false;
	bool bIsFinialInitialized = false;
	
	virtual void NotifyInstanceUninitialized();;
	
	void RegisterModifier(FFragmentRegisteredModifier Modifier);
	
	virtual void GetDebugString(FString& OutDebugString) {};
protected:
	
	// Called in Ruminative Initialize.
	// Use FRAGMENT_REGISTER_ASSET_ASYNC_LOADER to register assets for async loading
	virtual void AsyncLoadAssets(){};
	
	// Called in Ruminative Initialize.
	// Use FRAGMENT_REGISTER_ASSET_ASYNC_CHECKER to check if assets are fully loaded
	virtual void CheckAssetsFullyLoaded(bool& bIsFullyLoaded){};


	void PerformModifiers();

	float& InternalGetFloatProperty(FGameplayTag PropertyTag);
	FRuntimeFloatCurve& InternalGetCurveProperty(FGameplayTag PropertyTag);
	FGameplayTagContainer& InternalGetTagContainerProperty(FGameplayTag PropertyTag);
	
	TMap<FGameplayTag, FFragmentFloatPropertyGetter> FloatPropertyGetters;
	TMap<FGameplayTag, FFragmentCurvePropertyGetter> CurvePropertyGetters;
	TMap<FGameplayTag, FFragmentTagContainerPropertyGetter> TagContainerPropertyGetters;

	FGameplayTagContainer PropertyTags;
	
private:
	
	FFragmentRegisteredModifierContainer Modifiers;
};
