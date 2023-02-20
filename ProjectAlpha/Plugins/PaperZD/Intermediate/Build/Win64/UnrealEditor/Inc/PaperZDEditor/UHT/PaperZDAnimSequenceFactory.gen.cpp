// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDEditor/Private/Factories/PaperZDAnimSequenceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimSequenceFactory() {}
// Cross Module References
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_NoRegister();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimSequenceFactory();
	PAPERZDEDITOR_API UClass* Z_Construct_UClass_UPaperZDAnimSequenceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PaperZDEditor();
// End Cross Module References
	void UPaperZDAnimSequenceFactory::StaticRegisterNativesUPaperZDAnimSequenceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimSequenceFactory);
	UClass* Z_Construct_UClass_UPaperZDAnimSequenceFactory_NoRegister()
	{
		return UPaperZDAnimSequenceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAnimSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAnimSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZDEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/PaperZDAnimSequenceFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/PaperZDAnimSequenceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::NewProp_TargetAnimSource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Animation source for which to create this sequence, the sequence class will be inferred by the sequence type supported by the animation source. \n\x09 * If no object is set, the factory will display an asset picker to let the user select the target animation blueprint.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Factories/PaperZDAnimSequenceFactory.h" },
		{ "ToolTip", "Animation source for which to create this sequence, the sequence class will be inferred by the sequence type supported by the animation source.\nIf no object is set, the factory will display an asset picker to let the user select the target animation blueprint." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::NewProp_TargetAnimSource = { "TargetAnimSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequenceFactory, TargetAnimSource), Z_Construct_UClass_UPaperZDAnimationSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::NewProp_TargetAnimSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::NewProp_TargetAnimSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::NewProp_TargetAnimSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimSequenceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::ClassParams = {
		&UPaperZDAnimSequenceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimSequenceFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimSequenceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimSequenceFactory.OuterSingleton, Z_Construct_UClass_UPaperZDAnimSequenceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimSequenceFactory.OuterSingleton;
	}
	template<> PAPERZDEDITOR_API UClass* StaticClass<UPaperZDAnimSequenceFactory>()
	{
		return UPaperZDAnimSequenceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimSequenceFactory);
	UPaperZDAnimSequenceFactory::~UPaperZDAnimSequenceFactory() {}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimSequenceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimSequenceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimSequenceFactory, UPaperZDAnimSequenceFactory::StaticClass, TEXT("UPaperZDAnimSequenceFactory"), &Z_Registration_Info_UClass_UPaperZDAnimSequenceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimSequenceFactory), 4244008668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimSequenceFactory_h_472919655(TEXT("/Script/PaperZDEditor"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimSequenceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZDEditor_Private_Factories_PaperZDAnimSequenceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
