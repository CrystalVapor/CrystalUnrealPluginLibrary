// Copyright 2024 CrystalVapor


#include "Basics/EquipmentInstance.h"

#include "EquipmentSystem.h"
#include "Basics/EquipmentAbilitySet.h"
#include "Basics/EquipmentFeature.h"
#include "Basics/EquipmentManagerComponent.h"
#include "Utils/EquipmentSystemLogs.h"
#include "Basics/EquipmentVisualActor.h"
#include "Net/UnrealNetwork.h"
#include "Systems/EquipmentFeatureManager.h"
#include "Systems/EquipmentVisualActorManager.h"
#include "Utils/EquipmentFeatureFactory.h"


void FEquipmentFeatureContainer::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize)
{
	// this only be called on client
	for(int32 Idx: AddedIndices)
	{
		const FEquipmentFeatureEntry& Entry = Features[Idx];
		const UEquipmentFeature* Feature = Entry.Feature;
		if(!Feature)
		{
			continue;
		}
		const FName& FeatureName = Feature->GetFeatureName();
		// assume that replication is later than flush on client.
		Owner->PendingFeatureRegistrations[FeatureName] = true;
		Owner->OnFeatureSpawnedOrReplicated(FeatureName);
	}
}

UEquipmentFeature* FEquipmentFeatureContainer::GetFeature(TSubclassOf<UEquipmentFeature> Key)
{
	for(auto& Entry: Features)
	{
		if(Entry.Feature->GetClass()->IsChildOf(Key))
		{
			return Entry.Feature;
		}
	}
	return nullptr;
}

UEquipmentFeature* FEquipmentFeatureContainer::GetFeature(const FName& Key)
{
	for(auto& Entry: Features)
	{
		if(Entry.Feature->GetFeatureName() == Key)
		{
			return Entry.Feature;
		}
	}
	return nullptr;
}

// Sets default values
AEquipmentInstance::AEquipmentInstance(): FeatureContainer(this)
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	bAlwaysRelevant = true;
}

void AEquipmentInstance::PreInstanceDestroyed()
{
	for(auto& VisualActor: VisualActors)
	{
		VisualActor->Destroy();
	}
	for(auto& FeatureRuntimeDataHandle: FeatureRuntimeDataHandles)
	{
		auto& AbilityGrantHandles = FeatureRuntimeDataHandle.Value.AbilityGrantHandles;
		for(auto& AbilityGrantHandle: AbilityGrantHandles)
		{
			ManagerComponent->HandleRemoveAbility(AbilityGrantHandle);
		}
	}
}

void AEquipmentInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AEquipmentInstance, FeatureContainer);
}

void AEquipmentInstance::NotifyFeatureReplicated(const FName& FeatureName)
{
	
	OnFeatureSpawnedOrReplicated(FeatureName);
}

void AEquipmentInstance::AddFeature(const FName& FeatureName)
{
	AddFeatures({FeatureName});
}

void AEquipmentInstance::AddFeatures(const TArray<FName>& FeatureNames)
{
	for(const auto& FeatureName: FeatureNames)
	{
		MarkAsPendingFeatureRegistration(FeatureName);
	}
	if(FeatureNames.Num() > 0)
	{
		FlushPendingFeatureRegistrations();
	}
}

void AEquipmentInstance::RemoveFeature(const FName& FeatureName)
{
	RemoveFeatures({FeatureName});
}

void AEquipmentInstance::RemoveFeatures(const TArray<FName>& FeatureNames)
{
	for(const auto& FeatureName: FeatureNames)
	{
		MarkAsPendingFeatureRemoval(FeatureName);
	}
	if(FeatureNames.Num() > 0)
	{
		FlushPendingFeatureRemovals();
	}
}

void AEquipmentInstance::MarkAsPendingFeatureRegistration(const FName& FeatureName)
{
	const UEquipmentFeature* FeatureCDO = UEquipmentFeatureManager::Get()->GetFeatureCDO(FeatureName);
	if(!FeatureCDO)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Feature %s not found in Feature Class Map"), *FeatureName.ToString());
		return;
	}
	PendingFeatureRegistrations.Add(FeatureName, false);
	// Add Modifiers
	auto& PropertyModifiers = FeatureCDO->GetPropertyModifiers();
	for(const auto& Modifier: PropertyModifiers)
	{
		auto TargetFeature = Modifier.TargetFeature;
		auto ModifierHandle = Modifier.MakeHandle(FeatureName);
		PendingPropertyModifierRegistrations.AddUnique(TargetFeature, ModifierHandle);
	}
	// Add Grant Source
	auto& AbilitySets = FeatureCDO->GetAbilitySets();
	for(auto AbilitySet: AbilitySets)
	{
		PendingAbilitySetRegistrations.Add(FeatureName, AbilitySet);
	}
	// Add Visual Actor Actions
	auto& VisualActorActions = FeatureCDO->GetVisualActorActions();
	for(auto VisualActorAction: VisualActorActions)
	{
		PendingVisualActorActionRegistrations.Add(FeatureName, VisualActorAction);
	}
}

void AEquipmentInstance::MarkAsPendingFeatureRemoval(const FName& FeatureName)
{
	PendingFeatureRemovals.AddUnique(FeatureName);
}

void AEquipmentInstance::FlushPendingFeatureRegistrations()
{
	// 1. Try allocating all the features.
	if(HasAuthority())
	{
		for(auto Iter = PendingFeatureRegistrations.CreateConstIterator(); Iter; ++Iter)
		{
			const auto PendingFeature = *Iter;
			if(PendingFeature.Value)
			{
				continue;
			}
			ServerOnly_CreateAndAddFeature(PendingFeature.Key);
		}
	}
	// check all the features if they are ready to be registered.
	for(auto& PendingFeature: PendingFeatureRegistrations)
	{
		if(PendingFeature.Value)
		{
			continue;
		}
		UEquipmentFeature* Feature = FeatureContainer.GetFeature(PendingFeature.Key);
		if(Feature)
		{
			PendingFeature.Value = true;
		}else
		{
			// if we are here, that means the feature is not created yet.
			return;
		}
	}
	
	// if we are here, that all the feature is created whether we are server or client.
	PendingFeatureRegistrations.Empty();
	// 2. Try to register all the property modifiers.
	FlushPendingPropertyModifierRegistrations();

	// 3. Try to register all the Visual Actor Actions.
	FlushPendingVisualActorRegistrations();

	// 4. Try to register all the ability sets.
	FlushPendingAbilitySetRegistrations();
	
}

void AEquipmentInstance::FlushPendingPropertyModifierRegistrations()
{
	TArray<TSubclassOf<UEquipmentFeature>> PendingPropertyModifierRegistrationsKeys;
	TArray<TSubclassOf<UEquipmentFeature>> RegisteredPropertyModifierTargetClasses;
	PendingPropertyModifierRegistrations.GetKeys(PendingPropertyModifierRegistrationsKeys);
	for(auto& TargetFeatureClass: PendingPropertyModifierRegistrationsKeys)
	{
		UEquipmentFeature* TargetFeature = FeatureContainer.GetFeature(TargetFeatureClass);
		if(!TargetFeature)
		{
			// target feature is not created yet.
			// we will cache it till next time that we flush the registration (that is, the feature is created).
			continue;
		}
		TArray<FEquipmentPropertyModifierHandle> RegisteredModifiers;
		PendingPropertyModifierRegistrations.MultiFind(TargetFeatureClass, RegisteredModifiers);
		for(auto& ModifierHandle: RegisteredModifiers)
		{
			RegisterModifier(TargetFeature, ModifierHandle);
		}
		RegisteredPropertyModifierTargetClasses.Add(TargetFeatureClass);
	}
	// remove all the registered property modifiers.
	for(auto& TargetFeatureClass: RegisteredPropertyModifierTargetClasses)
	{
		PendingPropertyModifierRegistrations.Remove(TargetFeatureClass);
	}
	// we refresh all the features' property(since some of modifiers may be added).
	RefreshChangedFeatures();
}

void AEquipmentInstance::FlushPendingVisualActorRegistrations()
{
	struct FVisualActorRegisterTask
	{
		FVisualActorRegisterTask(const FName& InVisualActorName ,const UClass* InVisualActorClass, int32 InTaskIndex)
		: VisualActorName(InVisualActorName)
		, VisualActorClass(InVisualActorClass)
		, TaskIndex(InTaskIndex) {};
		void AddPrevVisualActorIndex(int32 Index)
		{
			PrevVisualActorIndices[PrevVisualActorCount++] = Index;
		}
		void AddNextVisualActorIndex(int32 Index)
		{
			NextVisualActorIndices[NextVisualActorCount++] = Index;
		}
		FName VisualActorName;
		const UClass* VisualActorClass = nullptr;
		int32 TaskIndex = -1;
		int32 PrevVisualActorIndices[10] = {};
		int32 PrevVisualActorCount = 0;
		int32 NextVisualActorIndices[10] = {};
		int32 NextVisualActorCount = 0;
	};
	TSet<FName> UnregisteredVisualActorNames;
	TArray<FName> VisualActorNamesToRegister;
	TMap<FName, FName> VisualActorNameToFeatureName;
	// prevent these visual actor names to registering.
	for(const auto& VisualActorAction: PendingVisualActorActionRegistrations)
	{
		if(VisualActorAction.Value.ActionType == EEquipmentVisualActorActionType::Unregister)
		{
			UnregisteredVisualActorNames.Add(VisualActorAction.Value.VisualActorName);
		}
	}
	// collect all initial visual actor names
	for(const auto& VisualActorAction: PendingVisualActorActionRegistrations)
	{
		const FName& VisualActorName = VisualActorAction.Value.VisualActorName;
		if(UnregisteredVisualActorNames.Contains(VisualActorName))
		{
			continue;
		}
		VisualActorNamesToRegister.Add(VisualActorName);
		VisualActorNameToFeatureName.Add(VisualActorName, VisualActorAction.Key);
	}
	// recursively load all the sub visual actors.
	UEquipmentVisualActorManager* EquipmentVisualActorManager = FEquipmentSystemModule::Get().GetEquipmentSystemGlobal()->GetEquipmentVisualActorManager();
	TArray<FVisualActorRegisterTask> VisualActorRegisterTasks;
	for(int i = 0; i< VisualActorNamesToRegister.Num(); ++i)
	{
		const FName& FeatureName = VisualActorNameToFeatureName[VisualActorNamesToRegister[i]];
		const FName& VisualActorName = VisualActorNamesToRegister[i];
		UClass* VisualActorClass = EquipmentVisualActorManager->GetVisualActorClass(VisualActorName, GetVisualActorSpecifier(VisualActorName));
		FVisualActorRegisterTask RegisterTask(VisualActorName, VisualActorClass, i);
		const AEquipmentVisualActor* VisualActorCDO = Cast<AEquipmentVisualActor>(VisualActorClass->GetDefaultObject());
		for(const auto& SubVisualActorRegEntry: VisualActorCDO->SubVisualActorRegisterEntries)
		{
			const FName& SubVisualActorName = SubVisualActorRegEntry.SubVisualActorName;
			if(UnregisteredVisualActorNames.Contains(SubVisualActorName))
			{
				continue;
			}
			VisualActorNamesToRegister.Add(SubVisualActorName);
			if(SubVisualActorRegEntry.RegisterSetting == EEquipmentVisualActorRegisterSetting::BeforeSubVisualActors)
			{
				RegisterTask.AddNextVisualActorIndex(VisualActorNamesToRegister.Num()-1);
			}
			else
			{
				RegisterTask.AddPrevVisualActorIndex(VisualActorNamesToRegister.Num()-1);
			}
			VisualActorNameToFeatureName.Add(SubVisualActorName, FeatureName);
		}
		VisualActorRegisterTasks.Add(RegisterTask);
	}
	// run a topological sort to register all the visual actors.
	TArray<int32> TopologicalContainer;
	for(int i = 0; i< VisualActorRegisterTasks.Num(); ++i)
	{
		if(VisualActorRegisterTasks[i].PrevVisualActorCount == 0)
		{
			TopologicalContainer.Add(i);
		}
	}
	while(!TopologicalContainer.IsEmpty())
	{
		TArray<int32> TopologicalContainerCopy = TopologicalContainer;
		TopologicalContainer.Empty();
		while(!TopologicalContainerCopy.IsEmpty())
		{
			int32 TaskIndex = TopologicalContainerCopy.Pop();
			FVisualActorRegisterTask& Task = VisualActorRegisterTasks[TaskIndex];
			RegisterVisualActor(VisualActorNameToFeatureName[Task.VisualActorName], Task.VisualActorClass);
			for(int i = 0; i< Task.NextVisualActorCount; ++i)
			{
				FVisualActorRegisterTask& NextTask = VisualActorRegisterTasks[Task.NextVisualActorIndices[i]];
				--NextTask.PrevVisualActorCount;
				if(NextTask.PrevVisualActorCount == 0)
				{
					TopologicalContainer.Add(Task.NextVisualActorIndices[i]);
				}
			}
		}
	}
}

void AEquipmentInstance::FlushPendingAbilitySetRegistrations()
{
	TArray<UClass*> SpawnedFeatureClasses;
	for(auto& FeatureEntry: FeatureContainer.Features)
	{
		SpawnedFeatureClasses.Add(FeatureEntry.Feature->GetClass());
	}
	TArray<FName> PendingAbilitySetRegistrationsKeys;
	PendingAbilitySetRegistrations.GetKeys(PendingAbilitySetRegistrationsKeys);
	for(auto& FeatureName: PendingAbilitySetRegistrationsKeys)
	{
		TArray<UEquipmentAbilitySet*> AbilitySetsToGive;
		PendingAbilitySetRegistrations.MultiFind(FeatureName, AbilitySetsToGive);
		for(const auto AbilitySetToRegister: AbilitySetsToGive)
		{
			const TArray<TSubclassOf<UEquipmentFeature>>& FeatureRequirements = AbilitySetToRegister->RequiredEquipmentFeatures;
			bool bAllRequirementsMet = true;
			for(auto FeatureRequirement: FeatureRequirements)
			{
				if(!SpawnedFeatureClasses.Contains(FeatureRequirement))
				{
					// AbilitySet is not given, skip this AbilitySet.
					bAllRequirementsMet = false;
					break;
				}
			}
			if(!bAllRequirementsMet)
			{
				continue;
			}
			PendingAbilitySetRegistrations.RemoveSingle(FeatureName, AbilitySetToRegister);
			RegisterAbilitySet(FeatureName, AbilitySetToRegister);
		}
	}
}

void AEquipmentInstance::FlushPendingFeatureRemovals()
{
	for(auto& PendingFeature: PendingFeatureRemovals)
	{
		const UEquipmentFeature* FeatureCDO = FeatureContainer.GetFeature(PendingFeature);
		const FName& FeatureName = FeatureCDO->GetFeatureName();
		UnregisterSingleFeature(FeatureName);
	}
	PendingFeatureRemovals.Empty();
	// we refresh all the changed features' property(since some of modifiers may be removed).
	RefreshChangedFeatures();
}

void AEquipmentInstance::UnregisterSingleFeature(const FName& FeatureName)
{
	FEquipmentFeatureRuntimeDataHandle* FeatureRuntimeDataPtr = FeatureRuntimeDataHandles.Find(FeatureName);
	if(!FeatureRuntimeDataPtr)
	{
		return;
	}
	FEquipmentFeatureRuntimeDataHandle& FeatureRuntimeData = *FeatureRuntimeDataPtr;
	for(auto& AbilityGrantHandle: FeatureRuntimeData.AbilityGrantHandles)
	{
		UnregisterAbilitySet(AbilityGrantHandle);
	}
	for(auto& VisualActorName: FeatureRuntimeData.VisualActorNames)
	{
		UnregisterVisualActor(VisualActorName);
	}
	for(auto& ModifierHandle: FeatureRuntimeData.ModifierHandles)
	{
		FEquipmentPropertyModifierHandle ModifierHandleStruct(FeatureName, ModifierHandle.ModifierName);
		UnregisterModifier(FeatureContainer.GetFeature(ModifierHandle.TargetFeatureName), ModifierHandleStruct);
	}
	FeatureRuntimeDataHandles.Remove(FeatureName);
}

void AEquipmentInstance::ServerOnly_CreateAndAddFeature(const FName& FeatureName)
{
	if(!HasAuthority())
	{
		return;
	}
	UEquipmentFeature* NewFeature = UEquipmentFeatureFactory::CreateFeature(this, FeatureName);
	if(!NewFeature)
	{
		UE_LOG(LogEquipmentSystem, Warning, TEXT("Failed to create feature %s"), *FeatureName.ToString());
		return;
	}
	NewFeature->RegisterComponent();
	NewFeature->SetIsReplicated(true);
	if(HasAuthority())
	{
		FeatureContainer.AddFeature(NewFeature);
	}
	OnFeatureSpawnedOrReplicated(FeatureName);
}

void AEquipmentInstance::OnFeatureSpawnedOrReplicated(const FName& FeatureName)
{
	auto& FeatureRegistrationValue = PendingFeatureRegistrations.FindOrAdd(FeatureName);
	FeatureRegistrationValue = true;
	FlushPendingFeatureRegistrations();
}

FEquipmentVisualActorSpecifier AEquipmentInstance::GetVisualActorSpecifier_Internal(const FName& VisualActorName)
{
	return FEquipmentVisualActorSpecifier();
}

FEquipmentVisualActorSpecifier AEquipmentInstance::GetVisualActorSpecifier(const FName& VisualActorName)
{
	FEquipmentVisualActorSpecifier Specifier;
	if(!K2_GetVisualActorSpecifier(VisualActorName, Specifier))
	{
		Specifier = GetVisualActorSpecifier_Internal(VisualActorName);
	}
	return Specifier;
}

void AEquipmentInstance::RegisterModifier(UEquipmentFeature* TargetFeature,
	const FEquipmentPropertyModifierHandle& Modifier)
{
	TargetFeature->RegisterModifier(Modifier);
	const FName& SourceFeatureName = Modifier.FeatureName;
	const FName& ModifierName = Modifier.ModifierName;
	const FName& TargetFeatureName = TargetFeature->GetFeatureName();
	FEquipmentFeaturePropertyModifierRuntimeDataHandle ModifierRuntimeDataHandle(ModifierName, TargetFeatureName);
	FEquipmentFeatureRuntimeDataHandle& FeatureRuntimeData = FeatureRuntimeDataHandles.FindOrAdd(SourceFeatureName);
	FeatureRuntimeData.ModifierHandles.Add(ModifierRuntimeDataHandle);
	ChangedFeatures.AddUnique(TargetFeature);
}

bool AEquipmentInstance::RegisterVisualActor(const FName& SourceFeatureNamePtr, const UClass* ActorClass)
{
	// returns true if the registration is successful.
	// if failed to spawn, the pending visual actor actions will not be cleared.
	// if successful, add Name to Runtime data.
	AEquipmentVisualActor* VisualActor = GetWorld()->SpawnActor<AEquipmentVisualActor>(const_cast<UClass*>(ActorClass));
	if(!VisualActor)
	{
		return false;
	}
	// Make Visual actor net related to pawn.
	VisualActor->SetOwner(ManagerComponent->GetOwner());
	VisualActor->InitVisualActor(this);
	VisualActors.Add(VisualActor);
	// Add Visual Actor to Runtime Data.
	if(&SourceFeatureNamePtr)
	{
		FEquipmentFeatureRuntimeDataHandle& FeatureRuntimeData = FeatureRuntimeDataHandles.FindOrAdd(SourceFeatureNamePtr);
		FeatureRuntimeData.VisualActorNames.Add(VisualActor->VisualActorName);
	}
	return true;
}

void AEquipmentInstance::RegisterAbilitySet(const FName& SourceFeatureName, const UEquipmentAbilitySet* AbilitySet)
{
	FExpandedAbilityGrantSource_GrantHandle AbilitySetHandle =
	ManagerComponent->HandleGrantAbility(Cast<IExpandedAbilityGrantSource>(const_cast<UEquipmentAbilitySet*>(AbilitySet)), this);
	FEquipmentFeatureRuntimeDataHandle& FeatureRuntimeData = FeatureRuntimeDataHandles.FindOrAdd(SourceFeatureName);
	FeatureRuntimeData.AbilityGrantHandles.Add(AbilitySetHandle);
}

void AEquipmentInstance::UnregisterModifier(UEquipmentFeature* TargetFeature,
	const FEquipmentPropertyModifierHandle& Modifier)
{
	TargetFeature->UnregisterModifier(Modifier);
	ChangedFeatures.AddUnique(TargetFeature);
}

void AEquipmentInstance::UnregisterVisualActor(const FName& VisualActorName)
{
	AEquipmentVisualActor* VisualActor = GetVisualActor(VisualActorName);
	if(VisualActor)
	{
		VisualActor->Destroy();
	}
}

void AEquipmentInstance::UnregisterAbilitySet(FExpandedAbilityGrantSource_GrantHandle& AbilitySetHandle)
{
	ManagerComponent->HandleRemoveAbility(AbilitySetHandle);
}

void AEquipmentInstance::RefreshChangedFeatures()
{
	for(auto ChangedFeature: ChangedFeatures)
	{
		ChangedFeature->ApplyRegisteredPropertyModifiers();
	}
	ChangedFeatures.Empty();
}

bool AEquipmentInstance::K2_GetPropertyByFeatureName(const FName& FeatureName,
	FGameplayTag PropertyTag, int32& OutProperty)
{
	checkNoEntry();
	return false;
}

DEFINE_FUNCTION(AEquipmentInstance::execK2_GetPropertyByFeatureName)
{
	P_GET_STRUCT_REF(FName, FeatureName);
	P_GET_STRUCT(FGameplayTag, PropertyTag);
	AEquipmentInstance* Instance = Cast<AEquipmentInstance>(Stack.Object);
	Stack.MostRecentProperty = nullptr;
	Stack.StepCompiledIn<FStructProperty>(nullptr);
	void* PropertyPtr = Stack.MostRecentPropertyAddress;
	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	P_FINISH;
	P_NATIVE_BEGIN
	bool bSuccess = false;
	if(PropertyPtr&& StructProp)
	{
		bSuccess = InternalK2_GetPropertyByFeatureName(Instance, FeatureName, PropertyTag, PropertyPtr, StructProp);
	}
	*(bool*)RESULT_PARAM = bSuccess;
	P_NATIVE_END
}

bool AEquipmentInstance::InternalK2_GetPropertyByFeatureName(AEquipmentInstance* Instance, const FName& FeatureName,
                                                             FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType)
{
	UEquipmentFeature* Feature = Instance->GetFeature<UEquipmentFeature>(FeatureName);
	if(!Feature)
	{
		return false;
	}
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(PropertyTag);
	FProperty* Property = Feature->GetPropertyReflectInfo(PropertyName);
	if(!Property)
	{
		return false;
	}
	Property->CopySingleValue(OutProperty, Property->ContainerPtrToValuePtr<void>(Feature));
	return true;
}


bool AEquipmentInstance::K2_GetPropertyByFeatureClass(
	TSubclassOf<UEquipmentFeature> FeatureClass, FGameplayTag PropertyTag, int32& OutProperty)
{
	checkNoEntry();
	return false;
}

DEFINE_FUNCTION(AEquipmentInstance::execK2_GetPropertyByFeatureClass)
{
	P_GET_OBJECT(UClass, FeatureClass);
	P_GET_STRUCT(FGameplayTag, PropertyTag);
	AEquipmentInstance* Instance = Cast<AEquipmentInstance>(Stack.Object);
	Stack.MostRecentProperty = nullptr;
	Stack.StepCompiledIn<FStructProperty>(nullptr);
	void* PropertyPtr = Stack.MostRecentPropertyAddress;
	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	P_FINISH;
	P_NATIVE_BEGIN
	bool bSuccess = false;
	if(PropertyPtr&& StructProp)
	{
		bSuccess = InternalK2_GetPropertyByFeatureClass(Instance, FeatureClass, PropertyTag, PropertyPtr, StructProp);
	}
	*(bool*)RESULT_PARAM = bSuccess;
	P_NATIVE_END
}

bool AEquipmentInstance::InternalK2_GetPropertyByFeatureClass(AEquipmentInstance* Instance,
	TSubclassOf<UEquipmentFeature> FeatureClass, FGameplayTag PropertyTag, void* OutProperty, FProperty* PropertyType)
{
	UEquipmentFeature* Feature = Instance->GetFeature<UEquipmentFeature>(FeatureClass);
	if(!Feature)
	{
		return false;
	}
	const FName& PropertyName = UEquipmentSystemGlobal::GetPropertyName(PropertyTag);
	FProperty* Property = Feature->GetPropertyReflectInfo(PropertyName);
	if(!Property)
	{
		return false;
	}
	Property->CopySingleValue(OutProperty, Property->ContainerPtrToValuePtr<void>(Feature));
	return true;
}

bool AEquipmentInstance::K2_GetVisualActorSpecifier_Implementation(const FName& VisualActorName,
	FEquipmentVisualActorSpecifier& OutSpecifier)
{
	return false;
}

AEquipmentVisualActor* AEquipmentInstance::GetVisualActor(const FName& VisualActorName)
{
	for(auto VisualActor: VisualActors)
	{
		if(VisualActor->VisualActorName == VisualActorName)
		{
			return VisualActor;
		}
	}
	return nullptr;
}


bool AEquipmentInstance::IsEquipped()
{
	return bIsEquipped; 
}

void AEquipmentInstance::NotifyEquipped()
{
	if(bIsEquipped)
	{
		return;
	}
	bIsEquipped = true;
	OnEquipped.Broadcast(this);
}

void AEquipmentInstance::NotifyUnequipped()
{
	if(!bIsEquipped)
	{
		return;
	}
	bIsEquipped = false;
	OnUnequipped.Broadcast(this);
}

UAbilitySystemComponent* AEquipmentInstance::GetAbilitySystemComponent() const
{
	return ManagerComponent->GetAbilitySystemComponent();
}

void AEquipmentInstance::HandleGameplayCue(UObject* Self, FGameplayTag GameplayCueTag,
	EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	for(auto& VisualActor:VisualActors)
	{
		VisualActor->HandleGameplayCue(VisualActor, GameplayCueTag, EventType, Parameters);
	}
}