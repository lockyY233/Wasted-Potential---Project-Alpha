// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_CacheAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_CacheAnimation() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDAnimGraphNode_CacheAnimation::StaticRegisterNativesUPaperZDAnimGraphNode_CacheAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimGraphNode_CacheAnimation);
	UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister()
	{
		return UPaperZDAnimGraphNode_CacheAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CacheName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Caches the animation data enabling it to be read from multiple nodes at a time, making sure the animation sub-tree is only updated and evaluated once per frame.\n * To access the data use the \"Use Cached Animation\" node.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
		{ "ToolTip", "Caches the animation data enabling it to be read from multiple nodes at a time, making sure the animation sub-tree is only updated and evaluated once per frame.\nTo access the data use the \"Use Cached Animation\" node." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Runtime node. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
		{ "ToolTip", "Runtime node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimGraphNode_CacheAnimation, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_CacheAnimation, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode_MetaData)) }; // 465920606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName_MetaData[] = {
		{ "Comment", "/* Name of the cache node. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_CacheAnimation.h" },
		{ "ToolTip", "Name of the cache node." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName = { "CacheName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimGraphNode_CacheAnimation, CacheName), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_AnimNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::NewProp_CacheName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_CacheAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::ClassParams = {
		&UPaperZDAnimGraphNode_CacheAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimGraphNode_CacheAnimation>()
	{
		return UPaperZDAnimGraphNode_CacheAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_CacheAnimation);
	UPaperZDAnimGraphNode_CacheAnimation::~UPaperZDAnimGraphNode_CacheAnimation() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation, UPaperZDAnimGraphNode_CacheAnimation::StaticClass, TEXT("UPaperZDAnimGraphNode_CacheAnimation"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_CacheAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_CacheAnimation), 980116707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h_2416032413(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_CacheAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
