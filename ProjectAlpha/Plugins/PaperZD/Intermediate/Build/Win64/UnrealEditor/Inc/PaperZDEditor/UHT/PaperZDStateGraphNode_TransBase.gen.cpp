// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_TransBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_TransBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDStateGraphNode_TransBase::StaticRegisterNativesUPaperZDStateGraphNode_TransBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_TransBase);
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_NoRegister()
	{
		return UPaperZDStateGraphNode_TransBase::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all the State Machine nodes that work as a transition and require an internal bound graph\n * for transition rules evaluation.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_TransBase.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_TransBase.h" },
		{ "ToolTip", "Base class for all the State Machine nodes that work as a transition and require an internal bound graph\nfor transition rules evaluation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "/* The graph that contains the transition rules to evaluate. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_TransBase.h" },
		{ "ToolTip", "The graph that contains the transition rules to evaluate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_TransBase, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_TransBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::ClassParams = {
		&UPaperZDStateGraphNode_TransBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_TransBase()
	{
		if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_TransBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_TransBase>()
	{
		return UPaperZDStateGraphNode_TransBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_TransBase);
	UPaperZDStateGraphNode_TransBase::~UPaperZDStateGraphNode_TransBase() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_TransBase, UPaperZDStateGraphNode_TransBase::StaticClass, TEXT("UPaperZDStateGraphNode_TransBase"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_TransBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_TransBase), 1936112707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_547630040(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_TransBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
