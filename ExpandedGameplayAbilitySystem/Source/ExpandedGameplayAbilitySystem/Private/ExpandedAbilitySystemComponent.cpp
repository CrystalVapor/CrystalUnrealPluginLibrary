// Wrote by Crystal 2024


#include "ExpandedAbilitySystemComponent.h"

#include "AbilitySystemGlobals.h"
#include "ExpandedGameplayAbility.h"
#include "GameplayCueManager.h"


void UExpandedAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();
	check(ActorInfo);
	check(InOwnerActor);
	const bool bHasNewPawnAvatar = Cast<APawn>(InAvatarActor) && (InAvatarActor != ActorInfo->AvatarActor);
	
	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	if(bHasNewPawnAvatar)
	{
		TryActivateAbilitiesOnActorInfoSet();
	}
}

void UExpandedAbilitySystemComponent::InputTagTriggered(FGameplayTag InputTag)
{
	if(!InputTagMapping.Contains(InputTag))
	{
		return;
	}
	TArray<FGameplayAbilitySpecHandle> InvalidHandles;
	for(FGameplayAbilitySpecHandle& Handle : InputTagMapping[InputTag].Handles)
	{
		if(Handle.IsValid())
		{
			SpecInputTagTriggered(Handle, InputTag);
		}
		else
		{
			InvalidHandles.Add(Handle);
		}
	}
	for(FGameplayAbilitySpecHandle& Handle : InvalidHandles)
	{
		InputTagMapping[InputTag].Handles.Remove(Handle);
	}
}

void UExpandedAbilitySystemComponent::InputTagReleased(FGameplayTag InputTag)
{
	if(!InputTagMapping.Contains(InputTag))
	{
		return;
	}
	TArray<FGameplayAbilitySpecHandle> InvalidHandles;
	for(FGameplayAbilitySpecHandle& Handle : InputTagMapping[InputTag].Handles)
	{
		if(Handle.IsValid())
		{
			SpecInputTagReleased(Handle, InputTag);
		}
		else
		{
			InvalidHandles.Add(Handle);
		}
	}
	for(FGameplayAbilitySpecHandle& Handle : InvalidHandles)
	{
		InputTagMapping[InputTag].Handles.Remove(Handle);
	}
}

void UExpandedAbilitySystemComponent::SpecInputTagTriggered(FGameplayAbilitySpecHandle Handle, FGameplayTag InputTag)
{
	if(!SpecInputMeta.Contains(Handle))
	{
		FGameplayAbilitySpecInputMeta Meta;
		Meta.RelatedTags = FGameplayTagContainer();
		SpecInputMeta.Add(Handle, Meta);
	}
	SpecInputMeta[Handle].RelatedTags.AddTag(InputTag);
	if(SpecInputMeta[Handle].RelatedTags.Num() > 0)
	{
		FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(Handle);
		Spec->InputPressed = true;
		if(Spec->IsActive())
		{
			AbilitySpecInputPressed(*Spec);
		}
		else
		{
			UExpandedGameplayAbility* Ability = CastChecked<UExpandedGameplayAbility>(Spec->Ability);
			if(Ability->ActivationPolicy == EAbilityActivationPolicy::OnInputTriggered)
			{
				TryActivateAbility(Handle);
			}
		}
	}
}

void UExpandedAbilitySystemComponent::SpecInputTagReleased(FGameplayAbilitySpecHandle Handle, FGameplayTag InputTag)
{
	if(!SpecInputMeta.Contains(Handle))
	{
		FGameplayAbilitySpecInputMeta Meta;
		Meta.RelatedTags = FGameplayTagContainer();
		SpecInputMeta.Add(Handle, Meta);
	}
	SpecInputMeta[Handle].RelatedTags.RemoveTag(InputTag);
	if(SpecInputMeta[Handle].RelatedTags.Num() == 0)
	{
		FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(Handle);
		Spec->InputPressed = false;
		if(Spec->IsActive())
		{
			AbilitySpecInputReleased(*Spec);
		}
	}
}

void UExpandedAbilitySystemComponent::AbilitySpecInputPressed(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputPressed(Spec);
	// We don't support UGameplayAbility::bReplicateInputDirectly.
	// Use replicated events instead so that the WaitInputPress ability task works.
	if (Spec.IsActive())
	{
		// Invoke the InputPressed event. This is not replicated here. If someone is listening, they may replicate the InputPressed event to the server.
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UExpandedAbilitySystemComponent::AbilitySpecInputReleased(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputReleased(Spec);
	// We don't support UGameplayAbility::bReplicateInputDirectly.
	// Use replicated events instead so that the WaitInputPress ability task works.
	if (Spec.IsActive())
	{
		// Invoke the InputPressed event. This is not replicated here. If someone is listening, they may replicate the InputPressed event to the server.
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UExpandedAbilitySystemComponent::ClientAddSpecInputMapping_Implementation(const FGameplayAbilitySpec& AbilitySpec)
{
	FGameplayAbilitySpecInputMeta Meta;
	FGameplayTagContainer InputTags = AbilitySpec.DynamicAbilityTags.Filter(
		FGameplayTagContainer(FGameplayTag::RequestGameplayTag(FName("Input"))));
	UExpandedGameplayAbility* Ability = Cast<UExpandedGameplayAbility>(AbilitySpec.Ability);
	if(Ability)
	{
		InputTags.AppendTags(Ability->InputTags);
	}
	for(FGameplayTag InputTag : InputTags)
	{
		if(!InputTagMapping.Contains(InputTag))
		{
			FGameplayAbilitySpecHandleContainer Container;
			InputTagMapping.Add(InputTag, Container);
		}
		InputTagMapping[InputTag].Handles.Add(AbilitySpec.Handle);
		SpecInputMeta.Add(AbilitySpec.Handle, Meta);
	}
}

void UExpandedAbilitySystemComponent::TryActivateAbilitiesOnActorInfoSet()
{
	ABILITYLIST_SCOPE_LOCK()
	for (const FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
	{
		UExpandedGameplayAbility* Ability = Cast<UExpandedGameplayAbility>(Spec.Ability);
		if (Ability && Ability->ActivationPolicy == EAbilityActivationPolicy::OnSpawnOrGranted)
		{
			Ability->TryActivateOnSpawnOrGranted(AbilityActorInfo.Get(), Spec);
		}
	}
}

void UExpandedAbilitySystemComponent::LocallyExecuteGameplayCueOnOwner(const FGameplayTag GameplayCueTag,
                                                              const FGameplayCueParameters& GameplayCueParameters)
{
	InvokeGameplayCueEvent(GameplayCueTag, EGameplayCueEvent::Type::Executed, GameplayCueParameters);
}

void UExpandedAbilitySystemComponent::LocallyAddGameplayCueOnOwner(const FGameplayTag GameplayCueTag,
	const FGameplayCueParameters& GameplayCueParameters)
{
	InvokeGameplayCueEvent(GameplayCueTag, EGameplayCueEvent::Type::OnActive, GameplayCueParameters);
	InvokeGameplayCueEvent(GameplayCueTag, EGameplayCueEvent::Type::WhileActive, GameplayCueParameters);
}

void UExpandedAbilitySystemComponent::LocallyRemoveGameplayCueOnOwner(const FGameplayTag GameplayCueTag)
{
	const FGameplayCueParameters EmptyParameters;
	InvokeGameplayCueEvent(GameplayCueTag, EGameplayCueEvent::Type::Removed, EmptyParameters);
}

bool UExpandedAbilitySystemComponent::HasMoreTagStack(const FGameplayTag Tag, const FGameplayTag OtherTag)
{
	return GetTagCount(Tag) > GetTagCount(OtherTag);
}

void UExpandedAbilitySystemComponent::AddBatchGameplayCueParam_HitResult(const FGameplayTag BatchedCueTag,
	const FHitResult& HitResult)
{
	FBatchedGameplayCueParameter_HitResult* Param = new FBatchedGameplayCueParameter_HitResult(HitResult);
	if(BatchedGameplayCueParams.Contains(BatchedCueTag))
	{
#if WITH_EDITOR
		// Check if the existing data is the same type
		if(BatchedGameplayCueParams[BatchedCueTag].Data[0]->GetScriptStruct() != Param->GetScriptStruct())
		{
			UE_LOG(LogAbilitySystemComponent, Warning, TEXT("AddBatchGameplayCueParam_HitResult: Existing data is not the same type as the new data. Ignoring."));
			return;
		}
#endif
		BatchedGameplayCueParams[BatchedCueTag].Data.Add(MakeShareable(Param));
	}
	else
	{
		FBatchedGameplayCueParameterHandle Handle;
		Handle.Add(Param);
		BatchedGameplayCueParams.Add(BatchedCueTag, Handle);
	}
}

void UExpandedAbilitySystemComponent::Call_ReplicateBatchedGameplayCueParameters(const FGameplayTag& BatchedCueTag,
	FPredictionKey PredictionKey)
{
	if(BatchedGameplayCueParams.Contains(BatchedCueTag))
	{
		FBatchedGameplayCueParameterHandle Handle;
		BatchedGameplayCueParams.RemoveAndCopyValue(BatchedCueTag, Handle);
		Multicast_ReplicateBatchedGameplayCueParameters(BatchedCueTag, PredictionKey, Handle);
	}
}

void UExpandedAbilitySystemComponent::Multicast_ReplicateBatchedGameplayCueParameters_Implementation(
	const FGameplayTag& BatchedCueTag, FPredictionKey PredictionKey,
	const FBatchedGameplayCueParameterHandle& BatchedCueParams)
{
	if (IsOwnerActorAuthoritative() || PredictionKey.IsLocalClientKey() == false)
	{
		ExecuteBatchedGameplayCue(BatchedCueTag, BatchedCueParams);
	}
}

void UExpandedAbilitySystemComponent::InvokeBatchedGameplayCueEvent(const FGameplayTag& BatchedCueTag)
{
	if(BatchedGameplayCueParams.Contains(BatchedCueTag))
	{
		FBatchedGameplayCueParameterHandle BatchedCueParamHandle;
		BatchedGameplayCueParams.RemoveAndCopyValue(BatchedCueTag, BatchedCueParamHandle);
		ExecuteBatchedGameplayCue(BatchedCueTag, BatchedCueParamHandle);
	}
}

void UExpandedAbilitySystemComponent::ExecuteBatchedGameplayCue(const FGameplayTag& BatchedCueTag,
                                                                    const FBatchedGameplayCueParameterHandle& BatchedCueParams)
{
	for(auto& BatchedCueParam:BatchedCueParams.Data)
	{
		FGameplayCueParameters Param = BatchedCueParam.Get()->ToGameplayCueParameters();
		InvokeGameplayCueEvent(BatchedCueTag, EGameplayCueEvent::Type::Executed, Param);
	}
}

void UExpandedAbilitySystemComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ABILITYLIST_SCOPE_LOCK()
	CancelAllAbilities();
	Super::EndPlay(EndPlayReason);
}

void UExpandedAbilitySystemComponent::OnGiveAbility(FGameplayAbilitySpec& AbilitySpec)
{
	Super::OnGiveAbility(AbilitySpec);
	ClientAddSpecInputMapping(AbilitySpec);
}
