// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDTransitionGraphNode_Result() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDTransitionGraphNode_Result::StaticRegisterNativesUPaperZDTransitionGraphNode_Result()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDTransitionGraphNode_Result);
	UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_NoRegister()
	{
		return UPaperZDTransitionGraphNode_Result::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[];
#endif
		static void NewProp_bCanEnterTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_MetaData[] = {
		{ "Comment", "/* Variable only meant to be shown as a pin. */" },
		{ "ModuleRelativePath", "Private/Graphs/Nodes/PaperZDTransitionGraphNode_Result.h" },
		{ "ToolTip", "Variable only meant to be shown as a pin." },
	};
#endif
	void Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
	{
		((UPaperZDTransitionGraphNode_Result*)Obj)->bCanEnterTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperZDTransitionGraphNode_Result), &Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::NewProp_bCanEnterTransition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDTransitionGraphNode_Result>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::ClassParams = {
		&UPaperZDTransitionGraphNode_Result::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDTransitionGraphNode_Result()
	{
		if (!Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton, Z_Construct_UClass_UPaperZDTransitionGraphNode_Result_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDTransitionGraphNode_Result>()
	{
		return UPaperZDTransitionGraphNode_Result::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDTransitionGraphNode_Result);
	UPaperZDTransitionGraphNode_Result::~UPaperZDTransitionGraphNode_Result() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDTransitionGraphNode_Result, UPaperZDTransitionGraphNode_Result::StaticClass, TEXT("UPaperZDTransitionGraphNode_Result"), &Z_Registration_Info_UClass_UPaperZDTransitionGraphNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDTransitionGraphNode_Result), 4040478926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_2356283616(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_Nodes_PaperZDTransitionGraphNode_Result_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
