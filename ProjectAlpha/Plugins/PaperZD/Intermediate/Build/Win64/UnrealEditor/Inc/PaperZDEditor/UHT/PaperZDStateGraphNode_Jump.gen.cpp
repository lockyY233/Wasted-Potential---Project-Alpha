// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDStateGraphNode_Jump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateGraphNode_Jump() {}
// Cross Module References
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDStateGraphNode_Jump::StaticRegisterNativesUPaperZDStateGraphNode_Jump()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateGraphNode_Jump);
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump_NoRegister()
	{
		return UPaperZDStateGraphNode_Jump::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDStateGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized node that works as a secondary root and can be called from the AnimInstance to force change the flow of the state machine.\n * Will keep connected nodes to it for being cleaned up on the compile process, like the root node.\n */" },
		{ "IncludePath", "Graphs/Nodes/PaperZDStateGraphNode_Jump.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Jump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Specialized node that works as a secondary root and can be called from the AnimInstance to force change the flow of the state machine.\nWill keep connected nodes to it for being cleaned up on the compile process, like the root node." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/* Name for this redirector, will be indexed on the StateMachine. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDStateGraphNode_Jump.h" },
		{ "ToolTip", "Name for this redirector, will be indexed on the StateMachine." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDStateGraphNode_Jump, Name), METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateGraphNode_Jump>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::ClassParams = {
		&UPaperZDStateGraphNode_Jump::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDStateGraphNode_Jump()
	{
		if (!Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.OuterSingleton, Z_Construct_UClass_UPaperZDStateGraphNode_Jump_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateGraphNode_Jump>()
	{
		return UPaperZDStateGraphNode_Jump::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateGraphNode_Jump);
	UPaperZDStateGraphNode_Jump::~UPaperZDStateGraphNode_Jump() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateGraphNode_Jump, UPaperZDStateGraphNode_Jump::StaticClass, TEXT("UPaperZDStateGraphNode_Jump"), &Z_Registration_Info_UClass_UPaperZDStateGraphNode_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateGraphNode_Jump), 4003113020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h_232387538(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDStateGraphNode_Jump_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
