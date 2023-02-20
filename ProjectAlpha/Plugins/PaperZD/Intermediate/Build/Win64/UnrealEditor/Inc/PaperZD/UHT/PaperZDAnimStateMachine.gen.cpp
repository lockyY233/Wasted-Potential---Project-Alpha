// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/AnimNodes/PaperZDAnimStateMachine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimStateMachine() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachine();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule;
class UScriptStruct* FPaperZDAnimStateMachineTransitionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachineTransitionRule"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachineTransitionRule>()
{
	return FPaperZDAnimStateMachineTransitionRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicRule_MetaData[];
#endif
		static void NewProp_bDynamicRule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RuleFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstantValue_MetaData[];
#endif
		static void NewProp_bConstantValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains the \"rule\" that governs if a transition/conduit can be taken or not.\n * Internally points to a runtime getter node for the baked transition graph.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Contains the \"rule\" that governs if a transition/conduit can be taken or not.\nInternally points to a runtime getter node for the baked transition graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachineTransitionRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_MetaData[] = {
		{ "Comment", "/* True if the rule contains blueprint logic and is bound to an UFunction. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "True if the rule contains blueprint logic and is bound to an UFunction." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_SetBit(void* Obj)
	{
		((FPaperZDAnimStateMachineTransitionRule*)Obj)->bDynamicRule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule = { "bDynamicRule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimStateMachineTransitionRule), &Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName_MetaData[] = {
		{ "Comment", "/* Name of the function that represents the logic for a dynamic transition rule. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Name of the function that represents the logic for a dynamic transition rule." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName = { "RuleFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineTransitionRule, RuleFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_MetaData[] = {
		{ "Comment", "/* Value of the transition rule, if it has no logic bound to it (constant pin value). */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Value of the transition rule, if it has no logic bound to it (constant pin value)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_SetBit(void* Obj)
	{
		((FPaperZDAnimStateMachineTransitionRule*)Obj)->bConstantValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue = { "bConstantValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimStateMachineTransitionRule), &Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bDynamicRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_RuleFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewProp_bConstantValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimStateMachineTransitionRule",
		sizeof(FPaperZDAnimStateMachineTransitionRule),
		alignof(FPaperZDAnimStateMachineTransitionRule),
		Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink;
class UScriptStruct* FPaperZDAnimStateMachineLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachineLink"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachineLink>()
{
	return FPaperZDAnimStateMachineLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRuleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionRuleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionalAnimNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionalAnimNodeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A link between two animation nodes on the state machine.\n * Has rules for knowing whether we should enter or not.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "A link between two animation nodes on the state machine.\nHas rules for knowing whether we should enter or not." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachineLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex_MetaData[] = {
		{ "Comment", "/* Index of the rule that drives this transition. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the rule that drives this transition." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex = { "TransitionRuleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineLink, TransitionRuleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex_MetaData[] = {
		{ "Comment", "/* Index of the target state. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the target state." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineLink, TargetNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex_MetaData[] = {
		{ "Comment", "/* Index of the SinkNode for the \"Transitional AnimGraph\". */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the SinkNode for the \"Transitional AnimGraph\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex = { "TransitionalAnimNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineLink, TransitionalAnimNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionRuleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TargetNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewProp_TransitionalAnimNodeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimStateMachineLink",
		sizeof(FPaperZDAnimStateMachineLink),
		alignof(FPaperZDAnimStateMachineLink),
		Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode;
class UScriptStruct* FPaperZDAnimStateMachineNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachineNode"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachineNode>()
{
	return FPaperZDAnimStateMachineNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimNodeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutwardLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutwardLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutwardLinks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConduit_MetaData[];
#endif
		static void NewProp_bConduit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConduit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConduitRuleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConduitRuleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnterEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateEnterEventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateExitEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnStateExitEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a \"node\" in the state machine, which can either be an AnimationState or a Conduit.\n * Nodes are defined by being connected by transitions/links.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Defines a \"node\" in the state machine, which can either be an AnimationState or a Conduit.\nNodes are defined by being connected by transitions/links." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachineNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex_MetaData[] = {
		{ "Comment", "/* Index of the SinkNode that represents the internal AnimGraph on the generated class. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the SinkNode that represents the internal AnimGraph on the generated class." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex = { "AnimNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, AnimNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_Inner = { "OutwardLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink, METADATA_PARAMS(nullptr, 0) }; // 879574704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_MetaData[] = {
		{ "Comment", "/* Array of outward transitions, ordered by priority. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Array of outward transitions, ordered by priority." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks = { "OutwardLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, OutwardLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_MetaData)) }; // 879574704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_MetaData[] = {
		{ "Comment", "/* If true, this node represents a conduit and not a final state. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "If true, this node represents a conduit and not a final state." },
	};
#endif
	void Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_SetBit(void* Obj)
	{
		((FPaperZDAnimStateMachineNode*)Obj)->bConduit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit = { "bConduit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPaperZDAnimStateMachineNode), &Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex_MetaData[] = {
		{ "Comment", "/* Index of the transition rule that governs the node, if it's a conduit. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Index of the transition rule that governs the node, if it's a conduit." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex = { "ConduitRuleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, ConduitRuleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName_MetaData[] = {
		{ "Comment", "/* Optional name of a custom event to call when the state machine enters this node. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Optional name of a custom event to call when the state machine enters this node." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName = { "OnStateEnterEventName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, OnStateEnterEventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName_MetaData[] = {
		{ "Comment", "/* Optional name of a custom event to call when the state machine exits this node. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Optional name of a custom event to call when the state machine exits this node." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName = { "OnStateExitEventName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachineNode, OnStateExitEventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_AnimNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OutwardLinks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_bConduit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_ConduitRuleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateEnterEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewProp_OnStateExitEventName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimStateMachineNode",
		sizeof(FPaperZDAnimStateMachineNode),
		alignof(FPaperZDAnimStateMachineNode),
		Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine;
class UScriptStruct* FPaperZDAnimStateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine, Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimStateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimStateMachine>()
{
	return FPaperZDAnimStateMachine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionRules;
		static const UECodeGen_Private::FIntPropertyParams NewProp_JumpLinks_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_JumpLinks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpLinks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_JumpLinks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the structure of an animation State Machine for PaperZD\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Holds the structure of an animation State Machine for PaperZD" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimStateMachine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName_MetaData[] = {
		{ "Comment", "/* Name of the state machine, mainly for debugging purposes. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Name of the state machine, mainly for debugging purposes." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachine, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState_MetaData[] = {
		{ "Comment", "/* The index of the initial state of the machine. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "The index of the initial state of the machine." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachine, InitialState), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode, METADATA_PARAMS(nullptr, 0) }; // 3004647804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/* The nodes that exist on the machine. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "The nodes that exist on the machine." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachine, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_MetaData)) }; // 3004647804
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_Inner = { "TransitionRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule, METADATA_PARAMS(nullptr, 0) }; // 1333263224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_MetaData[] = {
		{ "Comment", "/* The transition rules (baked from the transition graphs) that we use to determine if a given link/conduit should be taken. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "The transition rules (baked from the transition graphs) that we use to determine if a given link/conduit should be taken." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules = { "TransitionRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachine, TransitionRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_MetaData)) }; // 1333263224
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_ValueProp = { "JumpLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_Key_KeyProp = { "JumpLinks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_MetaData[] = {
		{ "Comment", "/* Jump links that can be taken as shortcuts. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimStateMachine.h" },
		{ "ToolTip", "Jump links that can be taken as shortcuts." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks = { "JumpLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperZDAnimStateMachine, JumpLinks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_MachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_TransitionRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewProp_JumpLinks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		nullptr,
		&NewStructOps,
		"PaperZDAnimStateMachine",
		sizeof(FPaperZDAnimStateMachine),
		alignof(FPaperZDAnimStateMachine),
		Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimStateMachine()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimStateMachineTransitionRule::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineTransitionRule_Statics::NewStructOps, TEXT("PaperZDAnimStateMachineTransitionRule"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineTransitionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachineTransitionRule), 1333263224U) },
		{ FPaperZDAnimStateMachineLink::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineLink_Statics::NewStructOps, TEXT("PaperZDAnimStateMachineLink"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachineLink), 879574704U) },
		{ FPaperZDAnimStateMachineNode::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachineNode_Statics::NewStructOps, TEXT("PaperZDAnimStateMachineNode"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachineNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachineNode), 3004647804U) },
		{ FPaperZDAnimStateMachine::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimStateMachine_Statics::NewStructOps, TEXT("PaperZDAnimStateMachine"), &Z_Registration_Info_UScriptStruct_PaperZDAnimStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimStateMachine), 4199281493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_1612538056(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Project_Wasted_Potential___Project_Alpha_ProjectAlpha_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimStateMachine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
