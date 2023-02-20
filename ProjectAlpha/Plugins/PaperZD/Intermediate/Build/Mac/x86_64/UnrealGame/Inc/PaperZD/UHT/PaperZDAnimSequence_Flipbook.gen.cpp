// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/PaperZDAnimSequence_Flipbook.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimSequence_Flipbook() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	void UPaperZDAnimSequence_Flipbook::StaticRegisterNativesUPaperZDAnimSequence_Flipbook()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimSequence_Flipbook);
	UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_NoRegister()
	{
		return UPaperZDAnimSequence_Flipbook::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimDataSource_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimDataSource_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimDataSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDAnimSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An AnimSequence that renders Flipbook animations.\n */" },
		{ "IncludePath", "AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ToolTip", "An AnimSequence that renders Flipbook animations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook_MetaData[] = {
		{ "Comment", "//@DEPRECATED: In favor of the animation data source which now can support multi-directional flipbooks.\n" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ToolTip", "@DEPRECATED: In favor of the animation data source which now can support multi-directional flipbooks." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence_Flipbook, Flipbook_DEPRECATED), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_Inner = { "AnimDataSource", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_MetaData[] = {
		{ "Category", "AnimSequence" },
		{ "Comment", "/* Contains the render information for displaying the flipbook, multi-directional. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence_Flipbook.h" },
		{ "ToolTip", "Contains the render information for displaying the flipbook, multi-directional." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource = { "AnimDataSource", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence_Flipbook, AnimDataSource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_Flipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::NewProp_AnimDataSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimSequence_Flipbook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::ClassParams = {
		&UPaperZDAnimSequence_Flipbook::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimSequence_Flipbook()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook.OuterSingleton, Z_Construct_UClass_UPaperZDAnimSequence_Flipbook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimSequence_Flipbook>()
	{
		return UPaperZDAnimSequence_Flipbook::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimSequence_Flipbook);
	UPaperZDAnimSequence_Flipbook::~UPaperZDAnimSequence_Flipbook() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimSequence_Flipbook)
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimSequence_Flipbook, UPaperZDAnimSequence_Flipbook::StaticClass, TEXT("UPaperZDAnimSequence_Flipbook"), &Z_Registration_Info_UClass_UPaperZDAnimSequence_Flipbook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimSequence_Flipbook), 2332221610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_293832443(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_Flipbook_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
