// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_UseCachedAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_UseCachedAnimation() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDAnimGraphNode_UseCachedAnimation::StaticRegisterNativesUPaperZDAnimGraphNode_UseCachedAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimGraphNode_UseCachedAnimation);
	UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_NoRegister()
	{
		return UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOfCache_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameOfCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedCacheNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedCacheNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reads from a cached animation node.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "Reads from a cached animation node." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Runtime node. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "Runtime node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimGraphNode_UseCachedAnimation, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_UseCachedAnimation, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode_MetaData)) }; // 846637838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache_MetaData[] = {
		{ "Comment", "/* Name of the cache node we're linked with. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "Name of the cache node we're linked with." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache = { "NameOfCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimGraphNode_UseCachedAnimation, NameOfCache), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode_MetaData[] = {
		{ "Comment", "/* The CacheAnimation node we're using. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_UseCachedAnimation.h" },
		{ "ToolTip", "The CacheAnimation node we're using." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode = { "LinkedCacheNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimGraphNode_UseCachedAnimation, LinkedCacheNode), Z_Construct_UClass_UPaperZDAnimGraphNode_CacheAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_AnimNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_NameOfCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::NewProp_LinkedCacheNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_UseCachedAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::ClassParams = {
		&UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimGraphNode_UseCachedAnimation>()
	{
		return UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_UseCachedAnimation);
	UPaperZDAnimGraphNode_UseCachedAnimation::~UPaperZDAnimGraphNode_UseCachedAnimation() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_UseCachedAnimation, UPaperZDAnimGraphNode_UseCachedAnimation::StaticClass, TEXT("UPaperZDAnimGraphNode_UseCachedAnimation"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_UseCachedAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_UseCachedAnimation), 3819995929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_2017560987(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_UseCachedAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
