// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_Base() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDExposedValueHandler();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink;
class UScriptStruct* FPaperZDAnimDataLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimDataLink, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimDataLink"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimDataLink>()
{
	return FPaperZDAnimDataLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LinkID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLinkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLinkID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a link to another Animation Node.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "Represents a link to another Animation Node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimDataLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID_MetaData[] = {
		{ "Comment", "/* Target ID that this link points to*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "Target ID that this link points to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID = { "LinkID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimDataLink, LinkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID_MetaData[] = {
		{ "Comment", "/* Source ID that this link comes from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "Source ID that this link comes from" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID = { "SourceLinkID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimDataLink, SourceLinkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_LinkID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewProp_SourceLinkID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimDataLink",
		sizeof(FPaperZDAnimDataLink),
		alignof(FPaperZDAnimDataLink),
		Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler;
class UScriptStruct* FPaperZDExposedValueHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDExposedValueHandler"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDExposedValueHandler>()
{
	return FPaperZDExposedValueHandler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueHandlerNodeProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_ValueHandlerNodeProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// An exposed value updater\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "An exposed value updater" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDExposedValueHandler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction_MetaData[] = {
		{ "Comment", "/* The function to call to update associated properties (can be NULL). */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "The function to call to update associated properties (can be NULL)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction = { "BoundFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDExposedValueHandler, BoundFunction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/* Cached UFunction. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "Cached UFunction." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDExposedValueHandler, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty_MetaData[] = {
		{ "Comment", "// Node property that this value handler is associated with, when the node\n// is instantiated from this property the node's ExposedValueHandler will \n// point back to this FExposedValueHandler:\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "Node property that this value handler is associated with, when the node\nis instantiated from this property the node's ExposedValueHandler will\npoint back to this FExposedValueHandler:" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty = { "ValueHandlerNodeProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDExposedValueHandler, ValueHandlerNodeProperty), &FStructProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_BoundFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewProp_ValueHandlerNodeProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDExposedValueHandler",
		sizeof(FPaperZDExposedValueHandler),
		alignof(FPaperZDExposedValueHandler),
		Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDExposedValueHandler()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base;
class UScriptStruct* FPaperZDAnimNode_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_Base, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_Base"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_Base>()
{
	return FPaperZDAnimNode_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime implementation of an Animation Node.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Base.h" },
		{ "ToolTip", "Runtime implementation of an Animation Node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_Base>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimNode_Base",
		sizeof(FPaperZDAnimNode_Base),
		alignof(FPaperZDAnimNode_Base),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimDataLink::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimDataLink_Statics::NewStructOps, TEXT("PaperZDAnimDataLink"), &Z_Registration_Info_UScriptStruct_PaperZDAnimDataLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimDataLink), 142803774U) },
		{ FPaperZDExposedValueHandler::StaticStruct, Z_Construct_UScriptStruct_FPaperZDExposedValueHandler_Statics::NewStructOps, TEXT("PaperZDExposedValueHandler"), &Z_Registration_Info_UScriptStruct_PaperZDExposedValueHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDExposedValueHandler), 4220446326U) },
		{ FPaperZDAnimNode_Base::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_Base_Statics::NewStructOps, TEXT("PaperZDAnimNode_Base"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_Base), 3376625338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h_1108451118(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
