// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Sequencer/PaperZDMovieSceneAnimationSection.h"
#include "MovieScene/Public/Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDMovieSceneAnimationSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_NoRegister();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams;
class UScriptStruct* FPaperZDMovieSceneAnimationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDMovieSceneAnimationParams"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDMovieSceneAnimationParams>()
{
	return FPaperZDMovieSceneAnimationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Parameters for the Animation Section\n */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "Parameters for the Animation Section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDMovieSceneAnimationParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, StartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, EndOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FPaperZDMovieSceneAnimationParams*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPaperZDMovieSceneAnimationParams), &Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/*EditAnywhere, Category = \"Animation\"*/" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "EditAnywhere, Category = \"Animation\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Animation sequence to use. */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "Animation sequence to use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDMovieSceneAnimationParams, Animation), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_EndOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewProp_Animation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDMovieSceneAnimationParams",
		sizeof(FPaperZDMovieSceneAnimationParams),
		alignof(FPaperZDMovieSceneAnimationParams),
		Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams.InnerSingleton;
	}
	void UPaperZDMovieSceneAnimationSection::StaticRegisterNativesUPaperZDMovieSceneAnimationSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDMovieSceneAnimationSection);
	UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_NoRegister()
	{
		return UPaperZDMovieSceneAnimationSection::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Movie scene section that controls PaperZD Sequence animations\n*/" },
		{ "IncludePath", "Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ToolTip", "Movie scene section that controls PaperZD Sequence animations" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Parameters that define the section. */" },
		{ "ModuleRelativePath", "Public/Sequencer/PaperZDMovieSceneAnimationSection.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Parameters that define the section." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDMovieSceneAnimationSection, Params), Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams, METADATA_PARAMS(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params_MetaData)) }; // 2702334314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDMovieSceneAnimationSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::ClassParams = {
		&UPaperZDMovieSceneAnimationSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDMovieSceneAnimationSection()
	{
		if (!Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.OuterSingleton, Z_Construct_UClass_UPaperZDMovieSceneAnimationSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDMovieSceneAnimationSection>()
	{
		return UPaperZDMovieSceneAnimationSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDMovieSceneAnimationSection);
	UPaperZDMovieSceneAnimationSection::~UPaperZDMovieSceneAnimationSection() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDMovieSceneAnimationParams::StaticStruct, Z_Construct_UScriptStruct_FPaperZDMovieSceneAnimationParams_Statics::NewStructOps, TEXT("PaperZDMovieSceneAnimationParams"), &Z_Registration_Info_UScriptStruct_PaperZDMovieSceneAnimationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDMovieSceneAnimationParams), 2702334314U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDMovieSceneAnimationSection, UPaperZDMovieSceneAnimationSection::StaticClass, TEXT("UPaperZDMovieSceneAnimationSection"), &Z_Registration_Info_UClass_UPaperZDMovieSceneAnimationSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDMovieSceneAnimationSection), 1128150912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_3279407649(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_PaperZDMovieSceneAnimationSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
