// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_CacheAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_CacheAnimation() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_CacheAnimation>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_CacheAnimation cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation;
class UScriptStruct* FPaperZDAnimNode_CacheAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_CacheAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_CacheAnimation>()
{
	return FPaperZDAnimNode_CacheAnimation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Caches the animation data enabling it to be read from multiple nodes at a time, making sure the animation sub-tree is only updated and evaluated once per frame.\n * To access the data use the \"Use Cached Animation\" node.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_CacheAnimation.h" },
		{ "ToolTip", "Caches the animation data enabling it to be read from multiple nodes at a time, making sure the animation sub-tree is only updated and evaluated once per frame.\nTo access the data use the \"Use Cached Animation\" node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_CacheAnimation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* Animation data. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_CacheAnimation.h" },
		{ "ToolTip", "Animation data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_CacheAnimation, Animation), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewProp_Animation_MetaData)) }; // 142803774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewProp_Animation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_CacheAnimation",
		sizeof(FPaperZDAnimNode_CacheAnimation),
		alignof(FPaperZDAnimNode_CacheAnimation),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_CacheAnimation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_CacheAnimation_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_CacheAnimation::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation_Statics::NewStructOps, TEXT("PaperZDAnimNode_CacheAnimation"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_CacheAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_CacheAnimation), 465920606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_CacheAnimation_h_2933500914(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_CacheAnimation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_CacheAnimation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
