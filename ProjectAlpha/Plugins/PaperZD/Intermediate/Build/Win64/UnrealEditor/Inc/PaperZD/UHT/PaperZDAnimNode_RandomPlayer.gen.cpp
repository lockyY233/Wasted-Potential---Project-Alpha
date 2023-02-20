// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_RandomPlayer() {}
// Cross Module References
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry;
class UScriptStruct* FPaperZDRandomPlayerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDRandomPlayerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDRandomPlayerEntry>()
{
	return FPaperZDRandomPlayerEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines an entry for the random sequence player.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Defines an entry for the random sequence player." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDRandomPlayerEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Animation sequence to play. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Animation sequence to play." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDRandomPlayerEntry, AnimSequence), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_ChanceToPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Chance that this entry will play when not in shuffle mode (normalized against others). */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Chance that this entry will play when not in shuffle mode (normalized against others)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_ChanceToPlay = { "ChanceToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDRandomPlayerEntry, ChanceToPlay), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_ChanceToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_ChanceToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Minimum amount of loops that the sequence needs to play before jumping to the next entry. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum amount of loops that the sequence needs to play before jumping to the next entry." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinLoopCount = { "MinLoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDRandomPlayerEntry, MinLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinLoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinLoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Maximum amount of loops that the sequence needs to play before jumping to the next entry. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum amount of loops that the sequence needs to play before jumping to the next entry." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxLoopCount = { "MaxLoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDRandomPlayerEntry, MaxLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxLoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxLoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Minimum playrate for this sequence. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum playrate for this sequence." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinPlayRate = { "MinPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDRandomPlayerEntry, MinPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Maximum playrate for this sequence. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum playrate for this sequence." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxPlayRate = { "MaxPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDRandomPlayerEntry, MaxPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxPlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_ChanceToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinLoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxLoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MinPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewProp_MaxPlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDRandomPlayerEntry",
		sizeof(FPaperZDRandomPlayerEntry),
		alignof(FPaperZDRandomPlayerEntry),
		Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPaperZDAnimNode_RandomPlayer>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_RandomPlayer cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer;
class UScriptStruct* FPaperZDAnimNode_RandomPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_RandomPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_RandomPlayer>()
{
	return FPaperZDAnimNode_RandomPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShuffleMode_MetaData[];
#endif
		static void NewProp_bShuffleMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffleMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Plays sequences randomly by choosing from a provided list.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Plays sequences randomly by choosing from a provided list." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_RandomPlayer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry, METADATA_PARAMS(nullptr, 0) }; // 96044538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Animation sequence to play. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "Animation sequence to play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_RandomPlayer, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData)) }; // 96044538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* If true, the player will create a shuffle list that will ensure each entry gets played at least once before looping. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_RandomPlayer.h" },
		{ "ToolTip", "If true, the player will create a shuffle list that will ensure each entry gets played at least once before looping." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit(void* Obj)
	{
		((FPaperZDAnimNode_RandomPlayer*)Obj)->bShuffleMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode = { "bShuffleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimNode_RandomPlayer), &Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_RandomPlayer",
		sizeof(FPaperZDAnimNode_RandomPlayer),
		alignof(FPaperZDAnimNode_RandomPlayer),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_RandomPlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_RandomPlayer_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDRandomPlayerEntry::StaticStruct, Z_Construct_UScriptStruct_FPaperZDRandomPlayerEntry_Statics::NewStructOps, TEXT("PaperZDRandomPlayerEntry"), &Z_Registration_Info_UScriptStruct_PaperZDRandomPlayerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDRandomPlayerEntry), 96044538U) },
		{ FPaperZDAnimNode_RandomPlayer::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_RandomPlayer_Statics::NewStructOps, TEXT("PaperZDAnimNode_RandomPlayer"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_RandomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_RandomPlayer), 702277696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_RandomPlayer_h_638152326(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_RandomPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_RandomPlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
