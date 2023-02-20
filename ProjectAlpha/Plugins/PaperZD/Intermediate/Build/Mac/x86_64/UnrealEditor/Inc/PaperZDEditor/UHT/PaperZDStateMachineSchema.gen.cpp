// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Graphs/PaperZDStateMachineSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDStateMachineSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateMachineSchema();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDStateMachineSchema_NoRegister();
	PAPERZDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment();
	PAPERZDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDStateMachineSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPaperZDStateMachineSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode;
class UScriptStruct* FPaperZDStateMachineSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode, Z_Construct_UPackage__Script_PaperZDEditor(), TEXT("PaperZDStateMachineSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.OuterSingleton;
}
template<> PAPERZDEDITOR_API UScriptStruct* StaticStruct<FPaperZDStateMachineSchemaAction_NewNode>()
{
	return FPaperZDStateMachineSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDStateMachineSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDStateMachineSchemaAction_NewNode, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewProp_NodeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PaperZDStateMachineSchemaAction_NewNode",
		sizeof(FPaperZDStateMachineSchemaAction_NewNode),
		alignof(FPaperZDStateMachineSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPaperZDStateMachineSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPaperZDStateMachineSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment;
class UScriptStruct* FPaperZDStateMachineSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment, Z_Construct_UPackage__Script_PaperZDEditor(), TEXT("PaperZDStateMachineSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.OuterSingleton;
}
template<> PAPERZDEDITOR_API UScriptStruct* StaticStruct<FPaperZDStateMachineSchemaAction_NewComment>()
{
	return FPaperZDStateMachineSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDStateMachineSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PaperZDStateMachineSchemaAction_NewComment",
		sizeof(FPaperZDStateMachineSchemaAction_NewComment),
		alignof(FPaperZDStateMachineSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment.InnerSingleton;
	}
	void UPaperZDStateMachineSchema::StaticRegisterNativesUPaperZDStateMachineSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDStateMachineSchema);
	UClass* Z_Construct_UClass_UPaperZDStateMachineSchema_NoRegister()
	{
		return UPaperZDStateMachineSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDStateMachineSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/PaperZDStateMachineSchema.h" },
		{ "ModuleRelativePath", "Private/Graphs/PaperZDStateMachineSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDStateMachineSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::ClassParams = {
		&UPaperZDStateMachineSchema::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDStateMachineSchema()
	{
		if (!Z_Registration_Info_UClass_UPaperZDStateMachineSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDStateMachineSchema.OuterSingleton, Z_Construct_UClass_UPaperZDStateMachineSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDStateMachineSchema.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDStateMachineSchema>()
	{
		return UPaperZDStateMachineSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDStateMachineSchema);
	UPaperZDStateMachineSchema::~UPaperZDStateMachineSchema() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDStateMachineSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewNode_Statics::NewStructOps, TEXT("PaperZDStateMachineSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDStateMachineSchemaAction_NewNode), 970040491U) },
		{ FPaperZDStateMachineSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FPaperZDStateMachineSchemaAction_NewComment_Statics::NewStructOps, TEXT("PaperZDStateMachineSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_PaperZDStateMachineSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDStateMachineSchemaAction_NewComment), 4274934449U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDStateMachineSchema, UPaperZDStateMachineSchema::StaticClass, TEXT("UPaperZDStateMachineSchema"), &Z_Registration_Info_UClass_UPaperZDStateMachineSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDStateMachineSchema), 3323536429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_2997053454(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Graphs_PaperZDStateMachineSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
