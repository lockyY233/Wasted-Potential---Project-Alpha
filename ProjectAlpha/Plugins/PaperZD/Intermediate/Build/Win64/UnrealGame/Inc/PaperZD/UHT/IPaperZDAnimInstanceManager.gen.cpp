// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/IPaperZDAnimInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPaperZDAnimInstanceManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	void UPaperZDAnimInstanceManager::StaticRegisterNativesUPaperZDAnimInstanceManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimInstanceManager);
	UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager_NoRegister()
	{
		return UPaperZDAnimInstanceManager::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPaperZDAnimInstanceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaperZDAnimInstanceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::ClassParams = {
		&UPaperZDAnimInstanceManager::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimInstanceManager()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.OuterSingleton, Z_Construct_UClass_UPaperZDAnimInstanceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimInstanceManager.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimInstanceManager>()
	{
		return UPaperZDAnimInstanceManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimInstanceManager);
	UPaperZDAnimInstanceManager::~UPaperZDAnimInstanceManager() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimInstanceManager, UPaperZDAnimInstanceManager::StaticClass, TEXT("UPaperZDAnimInstanceManager"), &Z_Registration_Info_UClass_UPaperZDAnimInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimInstanceManager), 668213643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_3232258411(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_IPaperZDAnimInstanceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
