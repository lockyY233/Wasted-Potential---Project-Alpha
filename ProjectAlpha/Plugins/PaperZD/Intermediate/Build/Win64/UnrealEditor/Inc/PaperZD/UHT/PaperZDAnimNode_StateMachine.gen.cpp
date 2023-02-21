// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimNode_StateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_StateMachine() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_StateMachine>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_StateMachine cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine;
class UScriptStruct* FPaperZDAnimNode_StateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_StateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_StateMachine>()
{
	return FPaperZDAnimNode_StateMachine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateMachineIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages a FSM that can drive animations depending of different states and transition rules.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_StateMachine.h" },
		{ "ToolTip", "Manages a FSM that can drive animations depending of different states and transition rules." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_StateMachine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex_MetaData[] = {
		{ "Comment", "/* Index of the baked state machine definition on the generated class. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_StateMachine.h" },
		{ "ToolTip", "Index of the baked state machine definition on the generated class." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex = { "StateMachineIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimNode_StateMachine, StateMachineIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewProp_StateMachineIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_StateMachine",
		sizeof(FPaperZDAnimNode_StateMachine),
		alignof(FPaperZDAnimNode_StateMachine),
		Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_StateMachine::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_StateMachine_Statics::NewStructOps, TEXT("PaperZDAnimNode_StateMachine"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_StateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_StateMachine), 4075998021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h_2176485074(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_StateMachine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
