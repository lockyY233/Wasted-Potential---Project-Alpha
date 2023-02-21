// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_SetDirectionality.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_SetDirectionality() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_SetDirectionality>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_SetDirectionality cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality;
class UScriptStruct* FPaperZDAnimNode_SetDirectionality::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_SetDirectionality"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_SetDirectionality>()
{
	return FPaperZDAnimNode_SetDirectionality::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sets the directionality data for multi-directional sequence rendering.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SetDirectionality.h" },
		{ "ToolTip", "Sets the directionality data for multi-directional sequence rendering." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_SetDirectionality>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* Animation data. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SetDirectionality.h" },
		{ "ToolTip", "Animation data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_SetDirectionality, Animation), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Animation_MetaData)) }; // 142803774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Input_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Input" },
		{ "Comment", "/* The point in the 2D map of the multi-directional sequence which will be evaluated to obtain the resulting animation. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_SetDirectionality.h" },
		{ "ToolTip", "The point in the 2D map of the multi-directional sequence which will be evaluated to obtain the resulting animation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_SetDirectionality, Input), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_SetDirectionality",
		sizeof(FPaperZDAnimNode_SetDirectionality),
		alignof(FPaperZDAnimNode_SetDirectionality),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SetDirectionality_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SetDirectionality_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_SetDirectionality::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_SetDirectionality_Statics::NewStructOps, TEXT("PaperZDAnimNode_SetDirectionality"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_SetDirectionality, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_SetDirectionality), 682404594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SetDirectionality_h_739767565(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SetDirectionality_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_SetDirectionality_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
