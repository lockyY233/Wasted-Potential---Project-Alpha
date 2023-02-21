// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_PlaySequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_PlaySequence() {}
// Cross Module References
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_PlaySequence>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_PlaySequence cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence;
class UScriptStruct* FPaperZDAnimNode_PlaySequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_PlaySequence"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_PlaySequence>()
{
	return FPaperZDAnimNode_PlaySequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[];
#endif
		static void NewProp_bLoopAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Plays a given Animation Sequence.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_PlaySequence.h" },
		{ "ToolTip", "Plays a given Animation Sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_PlaySequence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Resulting Animation Data. */" },
		{ "HidePinByDefault", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_PlaySequence.h" },
		{ "ToolTip", "Resulting Animation Data." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_PlaySequence, AnimSequence), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* The PlayRate multiplier against the normal speed of the AnimSequence. Can be negative, which will result on the animation going in reverse. */" },
		{ "HidePinByDefault", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_PlaySequence.h" },
		{ "ToolTip", "The PlayRate multiplier against the normal speed of the AnimSequence. Can be negative, which will result on the animation going in reverse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_PlaySequence, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* The starting position of the animation when initializing. After the animation loops, it will start from 0. */" },
		{ "HidePinByDefault", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_PlaySequence.h" },
		{ "ToolTip", "The starting position of the animation when initializing. After the animation loops, it will start from 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_PlaySequence, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* If the animation should loop. */" },
		{ "HidePinByDefault", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_PlaySequence.h" },
		{ "PropertyFeature", "NonTransitional" },
		{ "ToolTip", "If the animation should loop." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_PlaySequence*)Obj)->bLoopAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimNode_PlaySequence), &Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewProp_bLoopAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_PlaySequence",
		sizeof(FPaperZDAnimNode_PlaySequence),
		alignof(FPaperZDAnimNode_PlaySequence),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_PlaySequence_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_PlaySequence_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_PlaySequence::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_PlaySequence_Statics::NewStructOps, TEXT("PaperZDAnimNode_PlaySequence"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_PlaySequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_PlaySequence), 1596649485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_PlaySequence_h_1171117135(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_PlaySequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_PlaySequence_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
