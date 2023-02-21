// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDNotifyGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDNotifyGraphSchema() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDNotifyGraphSchema::StaticRegisterNativesUPaperZDNotifyGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDNotifyGraphSchema);
	UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema_NoRegister()
	{
		return UPaperZDNotifyGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Schema for the AnimNotify graph\n */" },
		{ "IncludePath", "Graphs/PaperZDNotifyGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDNotifyGraphSchema.h" },
		{ "ToolTip", "Schema for the AnimNotify graph" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDNotifyGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::ClassParams = {
		&UPaperZDNotifyGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDNotifyGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.OuterSingleton, Z_Construct_UClass_UPaperZDNotifyGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDNotifyGraphSchema>()
	{
		return UPaperZDNotifyGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDNotifyGraphSchema);
	UPaperZDNotifyGraphSchema::~UPaperZDNotifyGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDNotifyGraphSchema, UPaperZDNotifyGraphSchema::StaticClass, TEXT("UPaperZDNotifyGraphSchema"), &Z_Registration_Info_UClass_UPaperZDNotifyGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDNotifyGraphSchema), 3682632712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h_2162851984(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDNotifyGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
