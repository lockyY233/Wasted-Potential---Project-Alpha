// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimSequences/PaperZDAnimSequence.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimSequence() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationSource_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimBP_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata;
class UScriptStruct* FPaperZDAnimTrackMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimTrackMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimTrackMetadata>()
{
	return FPaperZDAnimTrackMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores the meta-information of a track used to display AnimNotify information in an orderly manner.\n */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Stores the meta-information of a track used to display AnimNotify information in an orderly manner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimTrackMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "/* Color used to display the track visually. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Color used to display the track visually." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimTrackMetadata, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/* Editor name for the track. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Editor name for the track." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimTrackMetadata, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimTrackMetadata",
		sizeof(FPaperZDAnimTrackMetadata),
		alignof(FPaperZDAnimTrackMetadata),
		Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata.InnerSingleton;
	}
	DEFINE_FUNCTION(UPaperZDAnimSequence::execGetFramesPerSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFramesPerSecond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperZDAnimSequence::execGetTotalDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalDuration();
		P_NATIVE_END;
	}
	void UPaperZDAnimSequence::StaticRegisterNativesUPaperZDAnimSequence()
	{
		UClass* Class = UPaperZDAnimSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFramesPerSecond", &UPaperZDAnimSequence::execGetFramesPerSecond },
			{ "GetTotalDuration", &UPaperZDAnimSequence::execGetTotalDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics
	{
		struct PaperZDAnimSequence_eventGetFramesPerSecond_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimSequence_eventGetFramesPerSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimSequence" },
		{ "Comment", "/* Frames per second, used to show the grid on the AnimSequence editor */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Frames per second, used to show the grid on the AnimSequence editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimSequence, nullptr, "GetFramesPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::PaperZDAnimSequence_eventGetFramesPerSecond_Parms), Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics
	{
		struct PaperZDAnimSequence_eventGetTotalDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimSequence_eventGetTotalDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimSequence" },
		{ "Comment", "/* Total duration of this Sequence, should be overridden */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Total duration of this Sequence, should be overridden" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimSequence, nullptr, "GetTotalDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::PaperZDAnimSequence_eventGetTotalDuration_Parms), Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimSequence);
	UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister()
	{
		return UPaperZDAnimSequence::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSource;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimNotifies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimBP;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimTrackData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrackData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimTrackData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDirectionalSequence_MetaData[];
#endif
		static void NewProp_bDirectionalSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectionalSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalAngleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalAngleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperZDAnimSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDAnimSequence_GetFramesPerSecond, "GetFramesPerSecond" }, // 129045688
		{ &Z_Construct_UFunction_UPaperZDAnimSequence_GetTotalDuration, "GetTotalDuration" }, // 2397922443
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The AnimSequence is the class responsible of handling how a given Animation source plays on the registered RenderComponent and handling meta info like AnimNotifies. \n */" },
		{ "IncludePath", "AnimSequences/PaperZDAnimSequence.h" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "The AnimSequence is the class responsible of handling how a given Animation source plays on the registered RenderComponent and handling meta info like AnimNotifies." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Animation source that owns this sequence. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Animation source that owns this sequence." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimSource = { "AnimSource", nullptr, (EPropertyFlags)0x0040010000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, AnimSource), Z_Construct_UClass_UPaperZDAnimationSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimSource_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies_Inner = { "AnimNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "Comment", "/* The list of the AnimNotifies linked to this animation. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "The list of the AnimNotifies linked to this animation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies = { "AnimNotifies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, AnimNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimBP_MetaData[] = {
		{ "Comment", "/* DEPRECATED: Points to the AnimBP that owned this AnimSequence before the creation of AnimSources. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "DEPRECATED: Points to the AnimBP that owned this AnimSequence before the creation of AnimSources." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimBP = { "AnimBP", nullptr, (EPropertyFlags)0x0040010820000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, AnimBP_DEPRECATED), Z_Construct_UClass_UPaperZDAnimBP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimBP_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData_Inner = { "AnimTrackData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata, METADATA_PARAMS(nullptr, 0) }; // 386567393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData_MetaData[] = {
		{ "Comment", "/* Track meta information for editor display. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Track meta information for editor display." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData = { "AnimTrackData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, AnimTrackData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData_MetaData)) }; // 386567393
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, DisplayName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_PaperFlipbook_MetaData[] = {
		{ "Comment", "//@Deprecated\n" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "@Deprecated" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_PaperFlipbook = { "PaperFlipbook", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, PaperFlipbook_DEPRECATED), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_PaperFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence_MetaData[] = {
		{ "Category", "AnimSequence" },
		{ "Comment", "/**\n\x09 * If true, multiple animations sources can be added to this sequence at different angles.\n\x09 * Used for when the sequence needs to represent multiple rotations of the same animation (i.e. top-down and isometric games).\n\x09 */" },
		{ "DisplayName", "Multi-Directional Sequence" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "If true, multiple animations sources can be added to this sequence at different angles.\nUsed for when the sequence needs to represent multiple rotations of the same animation (i.e. top-down and isometric games)." },
	};
#endif
	void Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence_SetBit(void* Obj)
	{
		((UPaperZDAnimSequence*)Obj)->bDirectionalSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence = { "bDirectionalSequence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperZDAnimSequence), &Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DirectionalAngleOffset_MetaData[] = {
		{ "Category", "AnimSequence" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "-45.0" },
		{ "Comment", "/**\n\x09 * Offset applied to all the animations on the directional map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "Offset applied to all the animations on the directional map." },
		{ "UIMax", "45.0" },
		{ "UIMin", "-45.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DirectionalAngleOffset = { "DirectionalAngleOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, DirectionalAngleOffset), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DirectionalAngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DirectionalAngleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "AnimSequence" },
		{ "Comment", "/* The category of this sequence, displayed on the tree view on the AnimSequence editor. */" },
		{ "ModuleRelativePath", "Public/AnimSequences/PaperZDAnimSequence.h" },
		{ "ToolTip", "The category of this sequence, displayed on the tree view on the AnimSequence editor." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimSequence, Category), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimNotifies,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_AnimTrackData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_PaperFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_bDirectionalSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_DirectionalAngleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimSequence_Statics::NewProp_Category,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimSequence_Statics::ClassParams = {
		&UPaperZDAnimSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperZDAnimSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimSequence()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimSequence.OuterSingleton, Z_Construct_UClass_UPaperZDAnimSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimSequence.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimSequence>()
	{
		return UPaperZDAnimSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimSequence);
	UPaperZDAnimSequence::~UPaperZDAnimSequence() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperZDAnimSequence)
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimTrackMetadata::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimTrackMetadata_Statics::NewStructOps, TEXT("PaperZDAnimTrackMetadata"), &Z_Registration_Info_UScriptStruct_PaperZDAnimTrackMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimTrackMetadata), 386567393U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimSequence, UPaperZDAnimSequence::StaticClass, TEXT("UPaperZDAnimSequence"), &Z_Registration_Info_UClass_UPaperZDAnimSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimSequence), 551414673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_918210290(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimSequences_PaperZDAnimSequence_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
