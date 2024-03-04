// Copyright 2024 CrystalVapor

#pragma once

#include "CoreMinimal.h"
#include "EquipmentInstance.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "Engine/AssetManager.h"
#include "EquipmentFragment.generated.h"

DECLARE_DELEGATE_RetVal(float&, FFragmentFloatPropertyGetter)
DECLARE_DELEGATE_RetVal(FGameplayTagContainer&, FFragmentTagContainerPropertyGetter)
DECLARE_DELEGATE_RetVal(FRuntimeFloatCurve&, FFragmentCurvePropertyGetter)

// Macro for declaring and registering property getters
// Will also register a tag for the property
// but since you cant put UPROERTY() in a macro
// you have to declare Tag named PropertyNameTag manually
// Recommended UPROPERTY() of Tag as follow:
// UPROPERTY(EditAnywhere, Category = "PropertyTags", meta = (DisplayName = "PropertyName", Categories = "Equipment.Property"))

// use these in OnFragmentInsideInitialize
#define FRAGMENT_DECLARE_FLOAT_PROPERTY_GETTER(PropertyName) \
	FFragmentFloatPropertyGetter Get##PropertyName##Delegate;\
	float& Get##PropertyName(){ return PropertyName; }
#define FRAGMENT_DECLARE_TAG_PROPERTY_GETTER(PropertyName) \
	FFragmentTagContainerPropertyGetter Get##PropertyName##Delegate;\
	FGameplayTagContainer& Get##PropertyName(){ return PropertyName; }
#define FRAGMENT_DECLARE_CURVE_PROPERTY_GETTER(PropertyName) \
	FFragmentCurvePropertyGetter Get##PropertyName##Delegate;\
	FRuntimeFloatCurve& Get##PropertyName(){ return PropertyName; }

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
	
	const float& GetFloatProperty(FGameplayTag PropertyTag);
	const FRuntimeFloatCurve& GetCurveProperty(FGameplayTag PropertyTag);
	const FGameplayTagContainer& GetTagContainerProperty(FGameplayTag PropertyTag);

	void NotifyStartInsideInitialize(AEquipmentInstance* Instance, FSimpleDelegate* InstanceNotifyDelegate);
	void NotifyStartOutsideInitialize(AEquipmentInstance* Instance, FSimpleDelegate* InstanceNotifyDelegate);
	void NotifyStartRuminativeInitialize(AEquipmentInstance* Instance, FSimpleDelegate* InstanceNotifyDelegate);
	void NotifyStartFinalInitialize(AEquipmentInstance* Instance, FSimpleDelegate* InstanceNotifyDelegate);

	virtual void HandleChildInsideInitialize(AEquipmentInstance* Instance) {};
	virtual void HandleChildOutsideInitialize(AEquipmentInstance* Instance) {};
	virtual void HandleChildRuminativeInitialize(AEquipmentInstance* Instance) {};
	virtual void HandleChildFinialInitialize(AEquipmentInstance* Instance) {};

	void CheckInsideInitializationFinished();
	void CheckOutsideInitializationFinished();
	void CheckRuminativeInitializationFinished();
	void CheckFinialInitializationFinished();

	// ReSharper disable once CppExpressionWithoutSideEffects
	void HandleInsideInitialized()
	{
		InstanceNotifyDelegate_InsideInitialized->ExecuteIfBound();
		bIsInsideInitialized = true;
	};
	FSimpleDelegate* InstanceNotifyDelegate_InsideInitialized;
	// ReSharper disable once CppExpressionWithoutSideEffects
	void HandleOutsideInitialized()
	{
		InstanceNotifyDelegate_OnOutsideInitialized->ExecuteIfBound();
		bIsOutsideInitialized = true;
	};
	FSimpleDelegate* InstanceNotifyDelegate_OnOutsideInitialized;
	// ReSharper disable once CppExpressionWithoutSideEffects
	void HandleRuminativeInitialized()
	{
		InstanceNotifyDelegate_OnRuminativeInitialized->ExecuteIfBound();
		bIsRuminativeInitialized = true;
	};
	FSimpleDelegate* InstanceNotifyDelegate_OnRuminativeInitialized;
	// ReSharper disable once CppExpressionWithoutSideEffects
	void HandleFinialInitialized()
	{
		InstanceNotifyDelegate_OnFinialInitialized->ExecuteIfBound();
		bIsFinialInitialized = true;
	};
	FSimpleDelegate* InstanceNotifyDelegate_OnFinialInitialized;

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
