// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDK2Node_AnimGetter() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDK2Node_AnimGetter::StaticRegisterNativesUPaperZDK2Node_AnimGetter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDK2Node_AnimGetter);
	UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter_NoRegister()
	{
		return UPaperZDK2Node_AnimGetter::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceStateNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_GetterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAnimBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CachedTitle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Contexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Contexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Re-implementation of K2Node_AnimGetter that works with PaperZD's AnimInstances and Animation Graphs.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Re-implementation of K2Node_AnimGetter that works with PaperZD's AnimInstances and Animation Graphs." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData[] = {
		{ "Comment", "// Anim node required for the getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Anim node required for the getter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, SourceNode), Z_Construct_UClass_UPaperZDAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData[] = {
		{ "Comment", "// Optional state node that is required for the getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Optional state node that is required for the getter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode = { "SourceStateNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, SourceStateNode), Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData[] = {
		{ "Comment", "// AnimInstance class that implements the getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "AnimInstance class that implements the getter" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass = { "GetterClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, GetterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData[] = {
		{ "Comment", "// The anim blueprint that generated this getter\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The anim blueprint that generated this getter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint = { "SourceAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, SourceAnimBlueprint), Z_Construct_UClass_UPaperZDAnimBP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData[] = {
		{ "Comment", "// Cached node title\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "Cached node title" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle = { "CachedTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, CachedTitle), METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData[] = {
		{ "Comment", "// List of valid contexts for the node\n" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDK2Node_AnimGetter.h" },
		{ "ToolTip", "List of valid contexts for the node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDK2Node_AnimGetter, Contexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceStateNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_GetterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_SourceAnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_CachedTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::NewProp_Contexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDK2Node_AnimGetter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::ClassParams = {
		&UPaperZDK2Node_AnimGetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDK2Node_AnimGetter()
	{
		if (!Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter.OuterSingleton, Z_Construct_UClass_UPaperZDK2Node_AnimGetter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDK2Node_AnimGetter>()
	{
		return UPaperZDK2Node_AnimGetter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDK2Node_AnimGetter);
	UPaperZDK2Node_AnimGetter::~UPaperZDK2Node_AnimGetter() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDK2Node_AnimGetter, UPaperZDK2Node_AnimGetter::StaticClass, TEXT("UPaperZDK2Node_AnimGetter"), &Z_Registration_Info_UClass_UPaperZDK2Node_AnimGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDK2Node_AnimGetter), 1075150934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_3967361180(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDK2Node_AnimGetter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
