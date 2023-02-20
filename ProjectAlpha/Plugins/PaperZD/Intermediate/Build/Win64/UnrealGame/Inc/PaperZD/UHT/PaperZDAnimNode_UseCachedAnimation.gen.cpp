// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_UseCachedAnimation() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_UseCachedAnimation>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_UseCachedAnimation cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation;
class UScriptStruct* FPaperZDAnimNode_UseCachedAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_UseCachedAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_UseCachedAnimation>()
{
	return FPaperZDAnimNode_UseCachedAnimation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedCacheNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedCacheNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Reads from a cached animation node.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h" },
		{ "ToolTip", "Reads from a cached animation node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_UseCachedAnimation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode_MetaData[] = {
		{ "Comment", "/* Link to the CacheAnimation data link. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h" },
		{ "ToolTip", "Link to the CacheAnimation data link." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode = { "LinkedCacheNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_UseCachedAnimation, LinkedCacheNode), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode_MetaData)) }; // 142803774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_UseCachedAnimation",
		sizeof(FPaperZDAnimNode_UseCachedAnimation),
		alignof(FPaperZDAnimNode_UseCachedAnimation),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_UseCachedAnimation::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation_Statics::NewStructOps, TEXT("PaperZDAnimNode_UseCachedAnimation"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_UseCachedAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_UseCachedAnimation), 846637838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h_1856665894(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_UseCachedAnimation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
