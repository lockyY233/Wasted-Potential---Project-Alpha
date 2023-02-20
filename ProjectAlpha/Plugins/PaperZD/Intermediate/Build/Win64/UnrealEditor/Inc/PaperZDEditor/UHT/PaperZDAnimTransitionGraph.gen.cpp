// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDAnimTransitionGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimTransitionGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDAnimTransitionGraph::StaticRegisterNativesUPaperZDAnimTransitionGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimTransitionGraph);
	UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph_NoRegister()
	{
		return UPaperZDAnimTransitionGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A graph used for evaluating the State machine transition rules.\n */" },
		{ "IncludePath", "Graphs/PaperZDAnimTransitionGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDAnimTransitionGraph.h" },
		{ "ToolTip", "A graph used for evaluating the State machine transition rules." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimTransitionGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::ClassParams = {
		&UPaperZDAnimTransitionGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimTransitionGraph()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.OuterSingleton, Z_Construct_UClass_UPaperZDAnimTransitionGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimTransitionGraph>()
	{
		return UPaperZDAnimTransitionGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimTransitionGraph);
	UPaperZDAnimTransitionGraph::~UPaperZDAnimTransitionGraph() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimTransitionGraph, UPaperZDAnimTransitionGraph::StaticClass, TEXT("UPaperZDAnimTransitionGraph"), &Z_Registration_Info_UClass_UPaperZDAnimTransitionGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimTransitionGraph), 2108425947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h_2213676574(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDAnimTransitionGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
