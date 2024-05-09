// Copyright CrystalVapor 2024, All rights reserved.


#include "ExpandedGameplayCueManager.h"

#include "AbilitySystemComponent.h"
#include "ExpandedAbilitySystemComponent.h"

FGameplayTagContainer UExpandedGameplayCueManager::BatchedGameplayCueTags = FGameplayTagContainer();

void UExpandedGameplayCueManager::FlushPendingCues()
{
	TArray<FGameplayCuePendingExecute> LocalPendingExecuteCues = PendingExecuteCues;
	PendingExecuteCues.Empty();
	
	for (int32 i = 0; i < LocalPendingExecuteCues.Num(); i++)
	{
		FGameplayCuePendingExecute& PendingCue = LocalPendingExecuteCues[i];
		FGameplayTagContainer CueTags = FGameplayTagContainer::CreateFromArray(PendingCue.GameplayCueTags);
		if(CueTags.HasAnyExact(BatchedGameplayCueTags))
		{
			if(PendingCue.PayloadType!=EGameplayCuePayloadType::CueParameters)
			{
				// we only support CueParameters for batched cues
				PendingExecuteCues.Add(PendingCue);
				continue;
			}
			// TODO: Support more batch parameter types
			FGameplayTagContainer BatchedCueTags = CueTags.FilterExact(BatchedGameplayCueTags);
			for(auto& BatchedCueTag: BatchedCueTags)
			{
				UExpandedAbilitySystemComponent* OwningASC = Cast<UExpandedAbilitySystemComponent>(PendingCue.OwningComponent);
				if(!OwningASC)
				{
					break;
				}
				bool bHasAuthority = OwningASC->IsOwnerActorAuthoritative();
				if(bHasAuthority)
				{
					OwningASC->Call_ReplicateBatchedGameplayCueParameters(BatchedCueTag, PendingCue.PredictionKey);
				}
				else
				{
					OwningASC->InvokeBatchedGameplayCueEvent(BatchedCueTag);
				}
			}
		}else
		{
			// not the batch cue, put it back
			PendingExecuteCues.Add(PendingCue);
		}
	}
	
	Super::FlushPendingCues();
}

void UExpandedGameplayCueManager::RegisterBatchedGameplayCueTag(const FGameplayTag& Tag, const FGameplayTag& BatchTag)
{
	BatchedGameplayCueTags.AddTag(BatchTag);
}

FBatchedGameplayCueTagHandle::FBatchedGameplayCueTagHandle(const FGameplayTag& Tag, const FGameplayTag& BatchTag):
	Tag(Tag),
	BatchTag(BatchTag)
{
	UExpandedGameplayCueManager::RegisterBatchedGameplayCueTag(Tag,BatchTag);
}
