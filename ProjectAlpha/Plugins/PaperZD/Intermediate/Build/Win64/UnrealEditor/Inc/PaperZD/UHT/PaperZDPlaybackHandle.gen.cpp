// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/Players/PaperZDPlaybackHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDPlaybackHandle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	void UPaperZDPlaybackHandle::StaticRegisterNativesUPaperZDPlaybackHandle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDPlaybackHandle);
	UClass* Z_Construct_UClass_UPaperZDPlaybackHandle_NoRegister()
	{
		return UPaperZDPlaybackHandle::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDPlaybackHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object that manages the playback of a certain AnimSequence type and ensures that it renders with the given playback data given by the AnimPlayer.\n * The handle should support the same features as the AnimSequence it serves specifies.\n */" },
		{ "IncludePath", "AnimSequences/Players/PaperZDPlaybackHandle.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/Players/PaperZDPlaybackHandle.h" },
		{ "ToolTip", "Object that manages the playback of a certain AnimSequence type and ensures that it renders with the given playback data given by the AnimPlayer.\nThe handle should support the same features as the AnimSequence it serves specifies." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDPlaybackHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::ClassParams = {
		&UPaperZDPlaybackHandle::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDPlaybackHandle()
	{
		if (!Z_Registration_Info_UClass_UPaperZDPlaybackHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDPlaybackHandle.OuterSingleton, Z_Construct_UClass_UPaperZDPlaybackHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDPlaybackHandle.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDPlaybackHandle>()
	{
		return UPaperZDPlaybackHandle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDPlaybackHandle);
	UPaperZDPlaybackHandle::~UPaperZDPlaybackHandle() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDPlaybackHandle, UPaperZDPlaybackHandle::StaticClass, TEXT("UPaperZDPlaybackHandle"), &Z_Registration_Info_UClass_UPaperZDPlaybackHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDPlaybackHandle), 3944913980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_1756090193(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_Players_PaperZDPlaybackHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
