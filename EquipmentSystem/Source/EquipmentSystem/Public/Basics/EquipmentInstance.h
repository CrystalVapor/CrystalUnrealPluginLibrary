// copyright 2024 CrystalVapor, all Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Systems/EquipmentSystemGlobal.h"
#include "Utils/EquipmentSystemTypes.h"
#include "ExpandedAbilityGrantSource.h"
#include "GameFramework/Actor.h"
#include "EquipmentInstance.generated.h"

class UEquipmentSystemGlobal;
class UEquipmentAbilitySet;
class UExpandedAbilitySet;
struct FEquipmentVisualActorAction;
class AEquipmentInstance;
class AEquipmentVisualActor;
class UEquipmentManagerComponent;
class UEquipmentFeature;

DECLARE_MULTICAST_DELEGATE_OneParam(FEquipmentInstanceNotifyDelegate, AEquipmentInstance*);

USTRUCT()
struct FEquipmentFeatureEntry: public FFastArraySerializerItem
{
	GENERATED_BODY()
	UPROPERTY()
	UEquipmentFeature* Feature = nullptr;
};

USTRUCT()
struct FEquipmentFeatureContainer: public FFastArraySerializer
{
	GENERATED_BODY()
	FEquipmentFeatureContainer() = default;
	explicit FEquipmentFeatureContainer(AEquipmentInstance* InOwner):Owner(InOwner)
	{
		Owner = InOwner;
	}
	UPROPERTY()
	TArray<FEquipmentFeatureEntry> Features;
	UPROPERTY(NotReplicated)
	AEquipmentInstance* Owner;
	void AddFeature(UEquipmentFeature* Feature)
	{
		FEquipmentFeatureEntry& Entry = Features.AddDefaulted_GetRef();
		Entry.Feature = Feature;
		MarkItemDirty(Entry);
	}
	void RemoveFeature(UEquipmentFeature* Feature)
	{
		Features.RemoveAll([Feature](const FEquipmentFeatureEntry& Entry)
		{
			return Entry.Feature == Feature;
		});
		MarkArrayDirty();
	}
	FEquipmentFeatureEntry& operator[](const int32 Index)
	{
		return Features[Index];
	}
	bool NetDeltaSerialize(FNetDeltaSerializeInfo & DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FEquipmentFeatureEntry, FEquipmentFeatureContainer>
		( Features, DeltaParms, *this );
	}
	void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize) { }
	void PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize) { }
	UEquipmentFeature* GetFeature(TSubclassOf<UEquipmentFeature> Key);
	UEquipmentFeature* GetFeature(const FName& Key);
};

template<>
struct TStructOpsTypeTraits< FEquipmentFeatureContainer > : public TStructOpsTypeTraitsBase2< FEquipmentFeatureContainer >
{
	enum 
	{
		WithNetDeltaSerializer = true,
    };
};

USTRUCT()
struct FEquipmentFeaturePropertyModifierRuntimeDataHandle
{
	GENERATED_BODY()
	FEquipmentFeaturePropertyModifierRuntimeDataHandle() = default;
	FEquipmentFeaturePropertyModifierRuntimeDataHandle(const FName& InModifierName, const FName& InTargetFeatureName):ModifierName(InModifierName),TargetFeatureName(InTargetFeatureName) {}
	FName ModifierName = FName();
	FName TargetFeatureName = FName();
};

USTRUCT()
struct FEquipmentFeatureRuntimeDataHandle
{
	GENERATED_BODY()
	UPROPERTY()
	TArray<FName> VisualActorNames;
	UPROPERTY()
	TArray<FEquipmentFeaturePropertyModifierRuntimeDataHandle> ModifierHandles;
	UPROPERTY()
	TArray<FExpandedAbilityGrantSource_GrantHandle> AbilityGrantHandles;
};

UCLASS()
class EQUIPMENTSYSTEM_API AEquipmentInstance : public AActor
{
	GENERATED_BODY()
friend UEquipmentManagerComponent;
friend FEquipmentFeatureContainer;
public:
	AEquipmentInstance();
	virtual void PreInstanceDestroyed();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void NotifyFeatureReplicated(const FName& FeatureName);
protected:
	// These Functions should only be called by Manager Component due to Replicate.
	void AddFeature(const FName& FeatureName);
	void AddFeatures(const TArray<FName>& FeatureNames);
	void RemoveFeature(const FName& FeatureName);
	void RemoveFeatures(const TArray<FName>& FeatureNames);
	void MarkAsPendingFeatureRegistration(const FName& FeatureName);
	void MarkAsPendingFeatureRemoval(const FName& FeatureName);

	// filter the feature registrations and removals, and call Register/Unregister functions
	void FlushPendingFeatureRegistrations();
	void FlushPendingPropertyModifierRegistrations();
	void FlushPendingVisualActorRegistrations();
	void FlushPendingAbilitySetRegistrations();
	void FlushPendingFeatureRemovals();
	
	void ServerOnly_CreateAndAddFeature(const FName& FeatureName);
	void OnFeatureSpawnedOrReplicated(const FName& FeatureName);

	void RegisterModifier(UEquipmentFeature* TargetFeature, const FEquipmentPropertyModifierHandle& Modifier);
	bool RegisterVisualActor(const FName& SourceFeatureNamePtr, const UClass* ActorClass);
	void RegisterAbilitySet(const FName& SourceFeatureName, const UEquipmentAbilitySet* AbilitySet);
	
	void UnregisterSingleFeature(const FName& FeatureName);
	void UnregisterModifier(UEquipmentFeature* TargetFeature, const FEquipmentPropertyModifierHandle& Modifier);
	void UnregisterVisualActor(const FName& VisualActorName);
	void UnregisterAbilitySet(FExpandedAbilityGrantSource_GrantHandle& AbilitySetHandle);

	void RefreshChangedFeatures();

	UFUNCTION(BlueprintCallable, CustomThunk, Category = "Equipment System", DisplayName = "Get Property By Feature Name (Instance)", meta = (CustomStructureParam = "OutProperty", GameplayTagFilter = "Equipment.Property"))
	bool K2_GetPropertyByFeatureName(UPARAM(ref) const FName& FeatureName , FGameplayTag PropertyTag, int32& OutProperty);
	DECLARE_FUNCTION(execK2_GetPropertyByFeatureName);
	static bool InternalK2_GetPropertyByFeatureName(AEquipmentInstance* Instance, const FName& FeatureName, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType);
	UFUNCTION(BlueprintCallable, CustomThunk, Category = "Equipment System", DisplayName = "Get Property By Feature Class (Instance)", meta = (CustomStructureParam = "OutProperty", GameplayTagFilter = "Equipment.Property"))
	bool K2_GetPropertyByFeatureClass(TSubclassOf<UEquipmentFeature> FeatureClass, FGameplayTag PropertyTag, int32& OutProperty);
	DECLARE_FUNCTION(execK2_GetPropertyByFeatureClass);
	static bool InternalK2_GetPropertyByFeatureClass(AEquipmentInstance* Instance, TSubclassOf<UEquipmentFeature> FeatureClass, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType);
	
public:
	UFUNCTION(BlueprintNativeEvent)
	bool K2_GetVisualActorSpecifier(const FName& VisualActorName, UPARAM(ref) FEquipmentVisualActorSpecifier& OutSpecifier);
	// Override this function to provide custom visual actor specifier.
	virtual FEquipmentVisualActorSpecifier GetVisualActorSpecifier_Internal(const FName& VisualActorName);
	FEquipmentVisualActorSpecifier GetVisualActorSpecifier(const FName& VisualActorName);
	
	AEquipmentVisualActor* GetVisualActor(const FName& VisualActorName);
	template<class T>
	T* GetFeature();
	template<class T>
	T* GetFeature(TSubclassOf<UEquipmentFeature> FeatureClass);
	template<class T>
	T* GetFeature(const FName& FeatureName);

	bool IsEquipped();
	void NotifyEquipped();
	void NotifyUnequipped();
	
	FEquipmentInstanceNotifyDelegate OnEquipped;
	FEquipmentInstanceNotifyDelegate OnUnequipped;

	UAbilitySystemComponent* GetAbilitySystemComponent() const;

	void HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters);
protected:
	UPROPERTY()
	UEquipmentManagerComponent* ManagerComponent = nullptr;
	UPROPERTY(Replicated)
	FEquipmentFeatureContainer FeatureContainer;
	UPROPERTY()
	TArray<AEquipmentVisualActor*> VisualActors;
	UPROPERTY()
	TMap<FName, FEquipmentFeatureRuntimeDataHandle> FeatureRuntimeDataHandles;
	
	TMultiMap<TSubclassOf<UEquipmentFeature>, FEquipmentPropertyModifierHandle> PendingPropertyModifierRegistrations;
	TMultiMap<FName, UEquipmentAbilitySet*> PendingAbilitySetRegistrations;
	TMultiMap<FName, FEquipmentVisualActorAction> PendingVisualActorActionRegistrations;
	
	TMap<FName, bool> PendingFeatureRegistrations;
	
	TArray<FName> PendingFeatureRemovals;
	TArray<UEquipmentFeature*> ChangedFeatures;
	
	bool bIsEquipped = false;
};

template <class T>
T* AEquipmentInstance::GetFeature()
{
	return Cast<T>(FeatureContainer.GetFeature(T::StaticClass()));
}

template <class T>
T* AEquipmentInstance::GetFeature(TSubclassOf<UEquipmentFeature> FeatureClass)
{
	return Cast<T>(FeatureContainer.GetFeature(FeatureClass));
}

template <class T>
T* AEquipmentInstance::GetFeature(const FName& FeatureName)
{
	return Cast<T>(FeatureContainer.GetFeature(FeatureName));
}
