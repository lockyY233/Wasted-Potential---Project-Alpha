// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDAnimGraphNode_RandomPlayer.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimGraphNode_RandomPlayer() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_Base();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDAnimGraphNode_RandomPlayer::StaticRegisterNativesUPaperZDAnimGraphNode_RandomPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimGraphNode_RandomPlayer);
	UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_NoRegister()
	{
		return UPaperZDAnimGraphNode_RandomPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Plays sequences randomly by choosing from a provided list.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDAnimGraphNode_RandomPlayer.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_RandomPlayer.h" },
		{ "ToolTip", "Plays sequences randomly by choosing from a provided list." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::NewProp_AnimNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Runtime node. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDAnimGraphNode_RandomPlayer.h" },
		{ "ToolTip", "Runtime node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::NewProp_AnimNode = { "AnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimGraphNode_RandomPlayer, AnimNode), Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::NewProp_AnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::NewProp_AnimNode_MetaData)) }; // 702277696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::NewProp_AnimNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimGraphNode_RandomPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::ClassParams = {
		&UPaperZDAnimGraphNode_RandomPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimGraphNode_RandomPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimGraphNode_RandomPlayer.OuterSingleton, Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimGraphNode_RandomPlayer.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimGraphNode_RandomPlayer>()
	{
		return UPaperZDAnimGraphNode_RandomPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimGraphNode_RandomPlayer);
	UPaperZDAnimGraphNode_RandomPlayer::~UPaperZDAnimGraphNode_RandomPlayer() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_RandomPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_RandomPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimGraphNode_RandomPlayer, UPaperZDAnimGraphNode_RandomPlayer::StaticClass, TEXT("UPaperZDAnimGraphNode_RandomPlayer"), &Z_Registration_Info_UClass_UPaperZDAnimGraphNode_RandomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimGraphNode_RandomPlayer), 368259040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_RandomPlayer_h_939182670(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_RandomPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDAnimGraphNode_RandomPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
