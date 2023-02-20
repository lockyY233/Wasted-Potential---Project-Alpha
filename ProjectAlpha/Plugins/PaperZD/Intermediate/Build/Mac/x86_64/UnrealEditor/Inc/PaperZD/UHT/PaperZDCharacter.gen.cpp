// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/PaperZDCharacter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDCharacter() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
	PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDSequencerSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	DEFINE_FUNCTION(APaperZDCharacter::execGetAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperZDAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance();
		P_NATIVE_END;
	}
	void APaperZDCharacter::StaticRegisterNativesAPaperZDCharacter()
	{
		UClass* Class = APaperZDCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimInstance", &APaperZDCharacter::execGetAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics
	{
		struct PaperZDCharacter_eventGetAnimInstance_Parms
		{
			UPaperZDAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDCharacter_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
		{ "Comment", "/* Obtain the AnimInstance that drives this character. */" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
		{ "ToolTip", "Obtain the AnimInstance that drives this character." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaperZDCharacter, nullptr, "GetAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PaperZDCharacter_eventGetAnimInstance_Parms), Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperZDCharacter);
	UClass* Z_Construct_UClass_APaperZDCharacter_NoRegister()
	{
		return APaperZDCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APaperZDCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationBlueprint;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperZDCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APaperZDCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaperZDCharacter_GetAnimInstance, "GetAnimInstance" }, // 4205062057
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperZDCharacter_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "PaperZD" },
		{ "Comment", "/**\n * A PaperZD character inherits from the Paper2D character and sets up the animation blueprint to manage its main flipbook component.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PaperZDCharacter.h" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
		{ "ToolTip", "A PaperZD character inherits from the Paper2D character and sets up the animation blueprint to manage its main flipbook component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PaperZD" },
		{ "Comment", "/* Animation component that manages the AnimBP. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
		{ "ToolTip", "Animation component that manages the AnimBP." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperZDCharacter, AnimationComponent), Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "BlueprintGetter", "GetAnimInstance" },
		{ "Category", "PaperZD" },
		{ "Comment", "/* The AnimInstance that drives this character, maintained for backwards compatibility. */" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
		{ "ToolTip", "The AnimInstance that drives this character, maintained for backwards compatibility." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperZDCharacter, AnimInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint_MetaData[] = {
		{ "Comment", "/* Deprecated: AnimationBlueprint used for animating the character, required for backwards support. */" },
		{ "ModuleRelativePath", "Public/PaperZDCharacter.h" },
		{ "ToolTip", "Deprecated: AnimationBlueprint used for animating the character, required for backwards support." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperZDCharacter, AnimationBlueprint_DEPRECATED), Z_Construct_UClass_UPaperZDAnimBP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperZDCharacter_Statics::NewProp_AnimationBlueprint,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaperZDCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaperZDSequencerSource_NoRegister, (int32)VTABLE_OFFSET(APaperZDCharacter, IPaperZDSequencerSource), false },  // 742636184
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperZDCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperZDCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperZDCharacter_Statics::ClassParams = {
		&APaperZDCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperZDCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperZDCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperZDCharacter()
	{
		if (!Z_Registration_Info_UClass_APaperZDCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperZDCharacter.OuterSingleton, Z_Construct_UClass_APaperZDCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaperZDCharacter.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<APaperZDCharacter>()
	{
		return APaperZDCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperZDCharacter);
	APaperZDCharacter::~APaperZDCharacter() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APaperZDCharacter)
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaperZDCharacter, APaperZDCharacter::StaticClass, TEXT("APaperZDCharacter"), &Z_Registration_Info_UClass_APaperZDCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperZDCharacter), 4250918720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_4111135530(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
