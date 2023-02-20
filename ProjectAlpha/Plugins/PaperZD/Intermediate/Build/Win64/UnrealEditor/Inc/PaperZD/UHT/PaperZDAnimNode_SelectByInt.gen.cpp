// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_SelectByInt.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_SelectByInt() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_SelectByInt>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_SelectByInt cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt;
class UScriptStruct* FPaperZDAnimNode_SelectByInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_SelectByInt"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_SelectByInt>()
{
	return FPaperZDAnimNode_SelectByInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInactiveAnimations_MetaData[];
#endif
		static void NewProp_bUpdateInactiveAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInactiveAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnChange_MetaData[];
#endif
		static void NewProp_bResetOnChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnChange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Animation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Selects between a list of animations depending on a given integer value.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "ToolTip", "Selects between a list of animations depending on a given integer value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_SelectByInt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "Comment", "/* The value that drives the selection. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "ToolTip", "The value that drives the selection." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue = { "SelectValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_SelectByInt, SelectValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * If true, the inactive animations will still update its playback progress as if its still running.\n\x09 * Switching between animations will not reset them and they will just take from where they were.\n\x09 * Disabling this pauses animations update and the inactive animations will be \"frozen in time\" until selected again.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If true, the inactive animations will still update its playback progress as if its still running.\nSwitching between animations will not reset them and they will just take from where they were.\nDisabling this pauses animations update and the inactive animations will be \"frozen in time\" until selected again." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_SelectByInt*)Obj)->bUpdateInactiveAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations = { "bUpdateInactiveAnimations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByInt), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* If animation aren't updating while inactive this value will force them to \"reset\" to 0 when they become relevant again. */" },
		{ "EditCondition", "!bUpdateInactiveAnimation" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If animation aren't updating while inactive this value will force them to \"reset\" to 0 when they become relevant again." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_SelectByInt*)Obj)->bResetOnChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange = { "bResetOnChange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimNode_SelectByInt), &Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_Inner = { "Animation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(nullptr, 0) }; // 142803774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* Animation entry. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SelectByInt.h" },
		{ "ToolTip", "Animation entry." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_SelectByInt, Animation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_MetaData)) }; // 142803774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_SelectValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bUpdateInactiveAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_bResetOnChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewProp_Animation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_SelectByInt",
		sizeof(FPaperZDAnimNode_SelectByInt),
		alignof(FPaperZDAnimNode_SelectByInt),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_SelectByInt::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_SelectByInt_Statics::NewStructOps, TEXT("PaperZDAnimNode_SelectByInt"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SelectByInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_SelectByInt), 3648623047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h_1188790783(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SelectByInt_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
