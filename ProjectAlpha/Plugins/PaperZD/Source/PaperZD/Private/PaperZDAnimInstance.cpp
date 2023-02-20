// Copyright 2017 ~ 2022 Critical Failure Studio Ltd. All rights reserved.

#include "PaperZDAnimInstance.h"
#include "PaperZDAnimBPGeneratedClass.h"
#include "PaperZDCharacter.h"
#include "AnimSequences/Sources/PaperZDAnimationSource.h"
#include "AnimSequences/Players/PaperZDAnimPlayer.h"
#include "AnimNodes/PaperZDAnimNode_Sink.h"
#include "AnimNodes/PaperZDAnimNode_StateMachine.h"
#include "AnimNodes/PaperZDAnimNode_PlaySequence.h"
#include "Kismet/GameplayStatics.h"

UPaperZDAnimInstance::UPaperZDAnimInstance()
	: Super()
{
	//Setup CDO values
	bIgnoreTimeDilation = false;
	bAllowTransitionalStates = true;
}

UWorld* UPaperZDAnimInstance::GetWorld() const
{
	return Manager.GetObject() ? Manager->OnGetWorld() : nullptr;
}

UPaperZDAnimPlayer* UPaperZDAnimInstance::GetPlayer() const
{
	return AnimPlayer;
}

bool UPaperZDAnimInstance::AllowsTransitionalStates() const
{
	return bAllowTransitionalStates;
}

UFunction* UPaperZDAnimInstance::FindAnimNotifyFunction(FName AnimNotifyName) const
{
	UPaperZDAnimBPGeneratedClass* AnimClass = CastChecked<UPaperZDAnimBPGeneratedClass>(GetClass());
	return AnimClass->FindAnimNotifyFunction(AnimNotifyName);
}

void UPaperZDAnimInstance::Tick(float DeltaTime)
{
	if (bIgnoreTimeDilation)
	{
		//Modify the DeltaTime to use an non-dilated value
		DeltaTime = GetDeltaTimeIgnoredDilation(DeltaTime);
	}

	//Process the animation nodes
	ProcessAnimations(DeltaTime);

	//Call the blueprint method, if any
	OnTick(DeltaTime);
}

void UPaperZDAnimInstance::Init(TScriptInterface<IPaperZDAnimInstanceManager> InManager)
{
	//Store the manager for later use
	Manager = InManager;

	//Cache the root node and supported sequence
	RootNode = nullptr;
	const UPaperZDAnimationSource* AnimSource = nullptr;
	if (UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass()))
	{
		RootNode = AnimClass->GetRootNode(this);
		AnimSource = AnimClass->GetSupportedAnimationSource();
	}

	//Let the blueprint initialize any variables we might need for updates
	//We do this first as some AnimNodes might require access to blueprint logic on their initialization methods
	OnInit();

	//Initialize every animation node
	if (RootNode)
	{
		FPaperZDAnimationInitContext InitContext(this);
		RootNode->Initialize(InitContext);
	}

	//Init the player
	AnimPlayer = NewObject<UPaperZDAnimPlayer>(this);
	AnimPlayer->Init(AnimSource);
	AnimPlayer->RegisterRenderComponent(Manager->GetRenderComponent());
	Manager->OnSetupAnimPlayer(AnimPlayer);

	//Bind the corresponding delegates
	AnimPlayer->OnPlaybackSequenceChanged.AddDynamic(this, &UPaperZDAnimInstance::OnAnimSequenceUpdated);
	AnimPlayer->OnPlaybackSequenceComplete.AddDynamic(this, &UPaperZDAnimInstance::OnAnimSequencePlaybackComplete);
}

AActor* UPaperZDAnimInstance::GetOwningActor() const
{
	return Manager.GetObject() ? Manager->GetOwningActor() : nullptr;
}

APaperZDCharacter* UPaperZDAnimInstance::GetPaperCharacter() const
{
	return Cast<APaperZDCharacter>(GetOwningActor());
}

void UPaperZDAnimInstance::JumpToNode(FName JumpName, FName StateMachineName /* = NAME_None */)
{
	UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass());
	if (AnimClass)
	{
		FPaperZDAnimationBaseContext Context(this);
		for (FPaperZDAnimNode_StateMachine* StateMachineNode : AnimClass->GetStateMachineNodes(this))
		{
			if (StateMachineName != NAME_None && StateMachineNode->GetMachineName() == StateMachineName)
			{
				StateMachineNode->JumpToNode(JumpName, Context);
				break;
			}
			else if (StateMachineName == NAME_None)
			{ 
				StateMachineNode->JumpToNode(JumpName, Context);
			}
		}
	}
}

void UPaperZDAnimInstance::ProcessAnimations(float DeltaTime)
{
	if (RootNode && !bSequencerOverride)
	{
		//First do a pass and update any animation node
		FPaperZDAnimationUpdateContext UpdateContext(this, DeltaTime);
		RootNode->Update(UpdateContext);

		//Then evaluate the sink node, obtaining the final animation data
		FPaperZDAnimationPlaybackData PlaybackData;
		RootNode->Evaluate(PlaybackData);

		//Pass to the AnimPlayer
		AnimPlayer->Play(PlaybackData);
	}
}

float UPaperZDAnimInstance::GetDeltaTimeIgnoredDilation(float DeltaTime)
{
	const float timeDilation = UGameplayStatics::GetGlobalTimeDilation(this);
	return DeltaTime / timeDilation;
}

void UPaperZDAnimInstance::PrepareForMovieSequence()
{
	bSequencerOverride = true;
}

void UPaperZDAnimInstance::RestorePreMovieSequenceState()
{
	bSequencerOverride = false;
}

float UPaperZDAnimInstance::GetInstanceAssetPlayerLength(int32 AssetPlayerIndex)
{
	UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass());
	if (AnimClass)
	{
		FPaperZDAnimNode_PlaySequence* AssetPlayerNode = AnimClass->GetAnimNodeByPropertyIndex<FPaperZDAnimNode_PlaySequence>(this, AssetPlayerIndex);
		if (AssetPlayerNode && AssetPlayerNode->GetAnimSequence())
		{
			return AssetPlayerNode->GetAnimSequence()->GetTotalDuration();
		}
	}

	return 0.0f;
}

float UPaperZDAnimInstance::GetInstanceAssetPlayerTime(int32 AssetPlayerIndex)
{
	UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass());
	if (AnimClass)
	{
		FPaperZDAnimNode_PlaySequence* AssetPlayerNode = AnimClass->GetAnimNodeByPropertyIndex<FPaperZDAnimNode_PlaySequence>(this, AssetPlayerIndex);
		if (AssetPlayerNode)
		{
			return AssetPlayerNode->GetPlaybackTime();
		}
	}

	return 0.0f;
}

float UPaperZDAnimInstance::GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex)
{
	UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass());
	if (AnimClass)
	{
		FPaperZDAnimNode_PlaySequence* AssetPlayerNode = AnimClass->GetAnimNodeByPropertyIndex<FPaperZDAnimNode_PlaySequence>(this, AssetPlayerIndex);
		if (AssetPlayerNode && AssetPlayerNode->GetAnimSequence() && AssetPlayerNode->GetAnimSequence()->GetTotalDuration() > 0.0f)
		{
			return AssetPlayerNode->PlaybackTime / AssetPlayerNode->GetAnimSequence()->GetTotalDuration();
		}
	}

	return 0.0f;
}

float UPaperZDAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex)
{
	UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass());
	if (AnimClass)
	{
		FPaperZDAnimNode_PlaySequence* AssetPlayerNode = AnimClass->GetAnimNodeByPropertyIndex<FPaperZDAnimNode_PlaySequence>(this, AssetPlayerIndex);
		if (AssetPlayerNode && AssetPlayerNode->GetAnimSequence() && AssetPlayerNode->GetAnimSequence()->GetTotalDuration() > 0.0f)
		{
			return AssetPlayerNode->GetAnimSequence()->GetTotalDuration() - AssetPlayerNode->PlaybackTime;
		}
	}

	return 0.0f;
}

float UPaperZDAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex)
{
	UPaperZDAnimBPGeneratedClass* AnimClass = Cast<UPaperZDAnimBPGeneratedClass>(GetClass());
	if (AnimClass)
	{
		FPaperZDAnimNode_PlaySequence* AssetPlayerNode = AnimClass->GetAnimNodeByPropertyIndex<FPaperZDAnimNode_PlaySequence>(this, AssetPlayerIndex);
		if (AssetPlayerNode && AssetPlayerNode->GetAnimSequence() && AssetPlayerNode->GetAnimSequence()->GetTotalDuration() > 0.0f)
		{
			return 1.0f - AssetPlayerNode->PlaybackTime / AssetPlayerNode->GetAnimSequence()->GetTotalDuration();
		}
	}

	return 0.0f;
}
