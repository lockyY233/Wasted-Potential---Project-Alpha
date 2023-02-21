// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_State() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDStateGraphNode_State::StaticRegisterNativesUPaperZDStateGraphNode_State()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_State);
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State_NoRegister()
	{
		return UPaperZDStateGraphNode_State::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnterEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateEnterEventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateExitEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateExitEventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[];
#endif
		static void NewProp_bShouldLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The state node is the main type of node for the state machine. In general, every other type of node is just transitory, while the StateNode is the only one\n * that can be active for more than one frame.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "The state node is the main type of node for the state machine. In general, every other type of node is just transitory, while the StateNode is the only one\nthat can be active for more than one frame." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "/* The internal animation graph for this state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "The internal animation graph for this state." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "Comment", "/* Name of a custom event to call when the state machine enters this state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "Name of a custom event to call when the state machine enters this state." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName = { "OnStateEnterEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, OnStateEnterEventName), METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "Comment", "/* Name of a custom event to call when the state machine exits this state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "Name of a custom event to call when the state machine exits this state." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName = { "OnStateExitEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, OnStateExitEventName), METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/* Display name of the state. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
		{ "ToolTip", "Display name of the state." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, Name_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, Flipbook_DEPRECATED), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier = { "SequenceIdentifier", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, SequenceIdentifier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_State, AnimSequence_DEPRECATED), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_State.h" },
	};
#endif
	void Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
	{
		((UPaperZDStateGraphNode_State*)Obj)->bShouldLoop_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperZDStateGraphNode_State), &Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_BoundGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateEnterEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_OnStateExitEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_Flipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_SequenceIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::NewProp_bShouldLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_State>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::ClassParams = {
		&UPaperZDStateGraphNode_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_State()
	{
		if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_State.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_State.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_State_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDStateGraphNode_State.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_State>()
	{
		return UPaperZDStateGraphNode_State::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_State);
	UPaperZDStateGraphNode_State::~UPaperZDStateGraphNode_State() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_State, UPaperZDStateGraphNode_State::StaticClass, TEXT("UPaperZDStateGraphNode_State"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_State, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_State), 1514548360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_2708588439(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_State_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
