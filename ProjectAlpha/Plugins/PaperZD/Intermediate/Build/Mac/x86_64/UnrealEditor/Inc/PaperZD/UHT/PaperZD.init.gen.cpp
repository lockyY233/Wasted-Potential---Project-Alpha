// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZD_init() {}
	PAPERZD_API UFunction* Z_Construct_UDelegateFunction_PaperZD_OnPlaybackSequenceChangedSignature__DelegateSignature();
	PAPERZD_API UFunction* Z_Construct_UDelegateFunction_PaperZD_OnPlaybackSequenceCompleteSignature__DelegateSignature();
	PAPERZD_API UFunction* Z_Construct_UDelegateFunction_PaperZD_OnPlaybackSequenceLoopedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PaperZD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PaperZD()
	{
		if (!Z_Registration_Info_UPackage__Script_PaperZD.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PaperZD_OnPlaybackSequenceChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PaperZD_OnPlaybackSequenceCompleteSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PaperZD_OnPlaybackSequenceLoopedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PaperZD",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x98D591D5,
				0xC6886C97,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PaperZD.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PaperZD.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PaperZD(Z_Construct_UPackage__Script_PaperZD, TEXT("/Script/PaperZD"), Z_Registration_Info_UPackage__Script_PaperZD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x98D591D5, 0xC6886C97));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
