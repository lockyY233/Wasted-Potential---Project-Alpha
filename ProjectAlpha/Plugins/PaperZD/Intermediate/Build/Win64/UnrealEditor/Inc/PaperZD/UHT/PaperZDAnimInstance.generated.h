// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperZDAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APaperZDCharacter;
class UPaperZDAnimPlayer;
class UPaperZDAnimSequence;
#ifdef PAPERZD_PaperZDAnimInstance_generated_h
#error "PaperZDAnimInstance.generated.h already included, missing '#pragma once' in PaperZDAnimInstance.h"
#endif
#define PAPERZD_PaperZDAnimInstance_generated_h

#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_SPARSE_DATA
#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execJumpToNode); \
	DECLARE_FUNCTION(execGetPaperCharacter); \
	DECLARE_FUNCTION(execGetOwningActor);


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execJumpToNode); \
	DECLARE_FUNCTION(execGetPaperCharacter); \
	DECLARE_FUNCTION(execGetOwningActor);


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_ACCESSORS
#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_CALLBACK_WRAPPERS
#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDAnimInstance(); \
	friend struct Z_Construct_UClass_UPaperZDAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPaperZDAnimInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDAnimInstance)


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPaperZDAnimInstance(); \
	friend struct Z_Construct_UClass_UPaperZDAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPaperZDAnimInstance, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDAnimInstance)


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperZDAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperZDAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperZDAnimInstance(UPaperZDAnimInstance&&); \
	NO_API UPaperZDAnimInstance(const UPaperZDAnimInstance&); \
public: \
	NO_API virtual ~UPaperZDAnimInstance();


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperZDAnimInstance(UPaperZDAnimInstance&&); \
	NO_API UPaperZDAnimInstance(const UPaperZDAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDAnimInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPaperZDAnimInstance) \
	NO_API virtual ~UPaperZDAnimInstance();


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_20_PROLOG
#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_SPARSE_DATA \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_RPC_WRAPPERS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_ACCESSORS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_CALLBACK_WRAPPERS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_INCLASS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_SPARSE_DATA \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_ACCESSORS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_CALLBACK_WRAPPERS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERZD_API UClass* StaticClass<class UPaperZDAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_PaperZDAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
