// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequences/Players/PaperZDAnimPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperZDAnimSequence;
class UPrimitiveComponent;
#ifdef PAPERZD_PaperZDAnimPlayer_generated_h
#error "PaperZDAnimPlayer.generated.h already included, missing '#pragma once' in PaperZDAnimPlayer.h"
#endif
#define PAPERZD_PaperZDAnimPlayer_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_24_DELEGATE \
struct _Script_PaperZD_eventOnPlaybackSequenceChangedSignature_Parms \
{ \
	const UPaperZDAnimSequence* From; \
	const UPaperZDAnimSequence* To; \
	float CurrentProgress; \
}; \
static inline void FOnPlaybackSequenceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackSequenceChangedSignature, const UPaperZDAnimSequence* From, const UPaperZDAnimSequence* To, float CurrentProgress) \
{ \
	_Script_PaperZD_eventOnPlaybackSequenceChangedSignature_Parms Parms; \
	Parms.From=From; \
	Parms.To=To; \
	Parms.CurrentProgress=CurrentProgress; \
	OnPlaybackSequenceChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_25_DELEGATE \
struct _Script_PaperZD_eventOnPlaybackSequenceCompleteSignature_Parms \
{ \
	const UPaperZDAnimSequence* AnimSequence; \
}; \
static inline void FOnPlaybackSequenceCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackSequenceCompleteSignature, const UPaperZDAnimSequence* AnimSequence) \
{ \
	_Script_PaperZD_eventOnPlaybackSequenceCompleteSignature_Parms Parms; \
	Parms.AnimSequence=AnimSequence; \
	OnPlaybackSequenceCompleteSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_26_DELEGATE \
struct _Script_PaperZD_eventOnPlaybackSequenceLoopedSignature_Parms \
{ \
	const UPaperZDAnimSequence* AnimSequence; \
}; \
static inline void FOnPlaybackSequenceLoopedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackSequenceLoopedSignature, const UPaperZDAnimSequence* AnimSequence) \
{ \
	_Script_PaperZD_eventOnPlaybackSequenceLoopedSignature_Parms Parms; \
	Parms.AnimSequence=AnimSequence; \
	OnPlaybackSequenceLoopedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentPlaybackTime); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execResumePlayback); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execRegisterRenderComponent); \
	DECLARE_FUNCTION(execGetCurrentAnimSequence); \
	DECLARE_FUNCTION(execGetPlaybackProgress); \
	DECLARE_FUNCTION(execGetCurrentPlaybackTime);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentPlaybackTime); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execResumePlayback); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execRegisterRenderComponent); \
	DECLARE_FUNCTION(execGetCurrentAnimSequence); \
	DECLARE_FUNCTION(execGetPlaybackProgress); \
	DECLARE_FUNCTION(execGetCurrentPlaybackTime);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDAnimPlayer(); \
	friend struct Z_Construct_UClass_UPaperZDAnimPlayer_Statics; \
public: \
	DECLARE_CLASS(UPaperZDAnimPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDAnimPlayer)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimPlayer(); \
	friend struct Z_Construct_UClass_UPaperZDAnimPlayer_Statics; \
public: \
	DECLARE_CLASS(UPaperZDAnimPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDAnimPlayer)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperZDAnimPlayer(UPaperZDAnimPlayer&&); \
	NO_API UPaperZDAnimPlayer(const UPaperZDAnimPlayer&); \
public: \
	NO_API virtual ~UPaperZDAnimPlayer();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperZDAnimPlayer(UPaperZDAnimPlayer&&); \
	NO_API UPaperZDAnimPlayer(const UPaperZDAnimPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPaperZDAnimPlayer) \
	NO_API virtual ~UPaperZDAnimPlayer();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_34_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERZD_API UClass* StaticClass<class UPaperZDAnimPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDAnimPlayer_h


#define FOREACH_ENUM_EANIMPLAYERPLAYBACKMODE(op) \
	op(EAnimPlayerPlaybackMode::Forward) \
	op(EAnimPlayerPlaybackMode::Reversed) 

enum class EAnimPlayerPlaybackMode : uint8;
template<> struct TIsUEnumClass<EAnimPlayerPlaybackMode> { enum { Value = true }; };
template<> PAPERZD_API UEnum* StaticEnum<EAnimPlayerPlaybackMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
