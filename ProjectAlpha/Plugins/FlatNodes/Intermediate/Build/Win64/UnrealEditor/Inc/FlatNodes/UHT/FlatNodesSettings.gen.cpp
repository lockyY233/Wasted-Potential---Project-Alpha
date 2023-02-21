// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlatNodes/Public/FlatNodesSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlatNodesSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	FLATNODES_API UClass* Z_Construct_UClass_UFlatNodesSettings();
	FLATNODES_API UClass* Z_Construct_UClass_UFlatNodesSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FlatNodes();
// End Cross Module References
	void UFlatNodesSettings::StaticRegisterNativesUFlatNodesSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlatNodesSettings);
	UClass* Z_Construct_UClass_UFlatNodesSettings_NoRegister()
	{
		return UFlatNodesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlatNodesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeaderUseGradient_MetaData[];
#endif
		static void NewProp_bHeaderUseGradient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeaderUseGradient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeaderBrightness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlatNodesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FlatNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlatNodesSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure the Flat Nodes plug-in.\n */" },
		{ "IncludePath", "FlatNodesSettings.h" },
		{ "ModuleRelativePath", "Public/FlatNodesSettings.h" },
		{ "ToolTip", "Configure the Flat Nodes plug-in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_MetaData[] = {
		{ "Category", "Header" },
		{ "Comment", "/** Whether to use gradient on node header or not. Default: false */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Gradient" },
		{ "ModuleRelativePath", "Public/FlatNodesSettings.h" },
		{ "ToolTip", "Whether to use gradient on node header or not. Default: false" },
	};
#endif
	void Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_SetBit(void* Obj)
	{
		((UFlatNodesSettings*)Obj)->bHeaderUseGradient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient = { "bHeaderUseGradient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFlatNodesSettings), &Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness_MetaData[] = {
		{ "Category", "Header" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Brightness of node header. Default: 0.25 */" },
		{ "DisplayName", "Brightness" },
		{ "EditCondition", "!bHeaderUseGradient" },
		{ "ModuleRelativePath", "Public/FlatNodesSettings.h" },
		{ "ToolTip", "Brightness of node header. Default: 0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness = { "HeaderBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlatNodesSettings, HeaderBrightness), METADATA_PARAMS(Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlatNodesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlatNodesSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlatNodesSettings_Statics::ClassParams = {
		&UFlatNodesSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlatNodesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlatNodesSettings()
	{
		if (!Z_Registration_Info_UClass_UFlatNodesSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlatNodesSettings.OuterSingleton, Z_Construct_UClass_UFlatNodesSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlatNodesSettings.OuterSingleton;
	}
	template<> FLATNODES_API UClass* StaticClass<UFlatNodesSettings>()
	{
		return UFlatNodesSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlatNodesSettings);
	UFlatNodesSettings::~UFlatNodesSettings() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlatNodesSettings, UFlatNodesSettings::StaticClass, TEXT("UFlatNodesSettings"), &Z_Registration_Info_UClass_UFlatNodesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlatNodesSettings), 3743552010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h_3738762863(TEXT("/Script/FlatNodes"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
