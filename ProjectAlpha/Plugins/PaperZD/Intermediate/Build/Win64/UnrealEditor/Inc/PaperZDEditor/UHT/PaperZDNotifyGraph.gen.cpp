// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDNotifyGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDNotifyGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraph();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDNotifyGraph::StaticRegisterNativesUPaperZDNotifyGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDNotifyGraph);
	UClass* Z_Construct_UClass_UPaperZDNotifyGraph_NoRegister()
	{
		return UPaperZDNotifyGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDNotifyGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegistered_MetaData[];
#endif
		static void NewProp_bRegistered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegistered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDNotifyGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDNotifyGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A graph that represents an implementation of an Animation Source \"Custom notify\", on the parent AnimBP.\n */" },
		{ "IncludePath", "Graphs/PaperZDNotifyGraph.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraph.h" },
		{ "ToolTip", "A graph that represents an implementation of an Animation Source \"Custom notify\", on the parent AnimBP." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Comment", "/* The name of the notify we're implementing. */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraph.h" },
		{ "ToolTip", "The name of the notify we're implementing." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDNotifyGraph, NotifyName), METADATA_PARAMS(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_MetaData[] = {
		{ "Comment", "/* True if the notify graph belongs to a valid registered notify, otherwise it belongs to an unregistered notify that hasn't been removed yet. */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraph.h" },
		{ "ToolTip", "True if the notify graph belongs to a valid registered notify, otherwise it belongs to an unregistered notify that hasn't been removed yet." },
	};
#endif
	void Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_SetBit(void* Obj)
	{
		((UPaperZDNotifyGraph*)Obj)->bRegistered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered = { "bRegistered", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperZDNotifyGraph), &Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDNotifyGraph_Statics::NewProp_bRegistered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDNotifyGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDNotifyGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDNotifyGraph_Statics::ClassParams = {
		&UPaperZDNotifyGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDNotifyGraph()
	{
		if (!Z_Registration_Info_UClass_UPaperZDNotifyGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDNotifyGraph.OuterSingleton, Z_Construct_UClass_UPaperZDNotifyGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDNotifyGraph.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDNotifyGraph>()
	{
		return UPaperZDNotifyGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDNotifyGraph);
	UPaperZDNotifyGraph::~UPaperZDNotifyGraph() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDNotifyGraph, UPaperZDNotifyGraph::StaticClass, TEXT("UPaperZDNotifyGraph"), &Z_Registration_Info_UClass_UPaperZDNotifyGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDNotifyGraph), 423295055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h_4239007757(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
