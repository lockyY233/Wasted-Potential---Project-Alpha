// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Sequencer/PaperZDMovieSceneAnimationTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDMovieSceneAnimationTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDMovieSceneAnimationSectionTemplateParams>() == std::is_polymorphic<FPaperZDMovieSceneAnimationParams>(), "USTRUCT FPaperZDMovieSceneAnimationSectionTemplateParams cannot be polymorphic unless super FPaperZDMovieSceneAnimationParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams;
class UScriptStruct* FPaperZDMovieSceneAnimationSectionTemplateParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDMovieSceneAnimationSectionTemplateParams"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDMovieSceneAnimationSectionTemplateParams>()
{
	return FPaperZDMovieSceneAnimationSectionTemplateParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDMovieSceneAnimationSectionTemplateParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/* Start time of the section. */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTemplate.h" },
		{ "ToolTip", "Start time of the section." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationSectionTemplateParams, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "Comment", "/* End time of the section. */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTemplate.h" },
		{ "ToolTip", "End time of the section." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationSectionTemplateParams, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewProp_SectionEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams,
		&NewStructOps,
		"PaperZDMovieSceneAnimationSectionTemplateParams",
		sizeof(FPaperZDMovieSceneAnimationSectionTemplateParams),
		alignof(FPaperZDMovieSceneAnimationSectionTemplateParams),
		Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPaperZDMovieSceneAnimationTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FPaperZDMovieSceneAnimationTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate;
class UScriptStruct* FPaperZDMovieSceneAnimationTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDMovieSceneAnimationTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDMovieSceneAnimationTemplate>()
{
	return FPaperZDMovieSceneAnimationTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDMovieSceneAnimationTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "Comment", "/* Params that gobern this template. */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationTemplate.h" },
		{ "ToolTip", "Params that gobern this template." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationTemplate, Params), Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewProp_Params_MetaData)) }; // 3384322955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"PaperZDMovieSceneAnimationTemplate",
		sizeof(FPaperZDMovieSceneAnimationTemplate),
		alignof(FPaperZDMovieSceneAnimationTemplate),
		Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTemplate_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDMovieSceneAnimationSectionTemplateParams::StaticStruct, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationSectionTemplateParams_Statics::NewStructOps, TEXT("PaperZDMovieSceneAnimationSectionTemplateParams"), &Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationSectionTemplateParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDMovieSceneAnimationSectionTemplateParams), 3384322955U) },
		{ FPaperZDMovieSceneAnimationTemplate::StaticStruct, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationTemplate_Statics::NewStructOps, TEXT("PaperZDMovieSceneAnimationTemplate"), &Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDMovieSceneAnimationTemplate), 2283919526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTemplate_h_633021551(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
