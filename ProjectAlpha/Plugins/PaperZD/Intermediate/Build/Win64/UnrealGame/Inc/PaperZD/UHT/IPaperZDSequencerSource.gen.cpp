// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Sequencer/IPaperZDSequencerSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPaperZDSequencerSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	void UPaperZDSequencerSource::StaticRegisterNativesUPaperZDSequencerSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDSequencerSource);
	UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister()
	{
		return UPaperZDSequencerSource::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDSequencerSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDSequencerSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDSequencerSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/IPaperZDSequencerSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDSequencerSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaperZDSequencerSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDSequencerSource_Statics::ClassParams = {
		&UPaperZDSequencerSource::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDSequencerSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDSequencerSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDSequencerSource()
	{
		if (!Z_Registration_Info_UClass_UPaperZDSequencerSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDSequencerSource.OuterSingleton, Z_Construct_UClass_UPaperZDSequencerSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDSequencerSource.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDSequencerSource>()
	{
		return UPaperZDSequencerSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDSequencerSource);
	UPaperZDSequencerSource::~UPaperZDSequencerSource() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDSequencerSource, UPaperZDSequencerSource::StaticClass, TEXT("UPaperZDSequencerSource"), &Z_Registration_Info_UClass_UPaperZDSequencerSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDSequencerSource), 742636184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_650678226(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Sequencer_IPaperZDSequencerSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
