// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotifyState() {}
// Cross Module References
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyState();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	DEFINE_FUNCTION(UPaperZDAnimNotifyState::execOnNotifyEnd)
	{
		P_GET_OBJECT(UPaperZDAnimInstance,Z_Param_OwningInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyEnd_Implementation(Z_Param_OwningInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperZDAnimNotifyState::execOnNotifyTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT(UPaperZDAnimInstance,Z_Param_OwningInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyTick_Implementation(Z_Param_DeltaTime,Z_Param_OwningInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperZDAnimNotifyState::execOnNotifyBegin)
	{
		P_GET_OBJECT(UPaperZDAnimInstance,Z_Param_OwningInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBegin_Implementation(Z_Param_OwningInstance);
		P_NATIVE_END;
	}
	struct PaperZDAnimNotifyState_eventOnNotifyBegin_Parms
	{
		UPaperZDAnimInstance* OwningInstance;
	};
	struct PaperZDAnimNotifyState_eventOnNotifyEnd_Parms
	{
		UPaperZDAnimInstance* OwningInstance;
	};
	struct PaperZDAnimNotifyState_eventOnNotifyTick_Parms
	{
		float DeltaTime;
		UPaperZDAnimInstance* OwningInstance;
	};
	static FName NAME_UPaperZDAnimNotifyState_OnNotifyBegin = FName(TEXT("OnNotifyBegin"));
	void UPaperZDAnimNotifyState::OnNotifyBegin(UPaperZDAnimInstance* OwningInstance)
	{
		PaperZDAnimNotifyState_eventOnNotifyBegin_Parms Parms;
		Parms.OwningInstance=OwningInstance;
		ProcessEvent(FindFunctionChecked(NAME_UPaperZDAnimNotifyState_OnNotifyBegin),&Parms);
	}
	static FName NAME_UPaperZDAnimNotifyState_OnNotifyEnd = FName(TEXT("OnNotifyEnd"));
	void UPaperZDAnimNotifyState::OnNotifyEnd(UPaperZDAnimInstance* OwningInstance)
	{
		PaperZDAnimNotifyState_eventOnNotifyEnd_Parms Parms;
		Parms.OwningInstance=OwningInstance;
		ProcessEvent(FindFunctionChecked(NAME_UPaperZDAnimNotifyState_OnNotifyEnd),&Parms);
	}
	static FName NAME_UPaperZDAnimNotifyState_OnNotifyTick = FName(TEXT("OnNotifyTick"));
	void UPaperZDAnimNotifyState::OnNotifyTick(float DeltaTime, UPaperZDAnimInstance* OwningInstance)
	{
		PaperZDAnimNotifyState_eventOnNotifyTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.OwningInstance=OwningInstance;
		ProcessEvent(FindFunctionChecked(NAME_UPaperZDAnimNotifyState_OnNotifyTick),&Parms);
	}
	void UPaperZDAnimNotifyState::StaticRegisterNativesUPaperZDAnimNotifyState()
	{
		UClass* Class = UPaperZDAnimNotifyState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNotifyBegin", &UPaperZDAnimNotifyState::execOnNotifyBegin },
			{ "OnNotifyEnd", &UPaperZDAnimNotifyState::execOnNotifyEnd },
			{ "OnNotifyTick", &UPaperZDAnimNotifyState::execOnNotifyTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::NewProp_OwningInstance = { "OwningInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimNotifyState_eventOnNotifyBegin_Parms, OwningInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::NewProp_OwningInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimNotifyState, nullptr, "OnNotifyBegin", nullptr, nullptr, sizeof(PaperZDAnimNotifyState_eventOnNotifyBegin_Parms), Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::NewProp_OwningInstance = { "OwningInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimNotifyState_eventOnNotifyEnd_Parms, OwningInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::NewProp_OwningInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimNotifyState, nullptr, "OnNotifyEnd", nullptr, nullptr, sizeof(PaperZDAnimNotifyState_eventOnNotifyEnd_Parms), Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimNotifyState_eventOnNotifyTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::NewProp_OwningInstance = { "OwningInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimNotifyState_eventOnNotifyTick_Parms, OwningInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::NewProp_OwningInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperZD" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimNotifyState, nullptr, "OnNotifyTick", nullptr, nullptr, sizeof(PaperZDAnimNotifyState_eventOnNotifyTick_Parms), Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimNotifyState);
	UClass* Z_Construct_UClass_UPaperZDAnimNotifyState_NoRegister()
	{
		return UPaperZDAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperZDAnimNotify_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyBegin, "OnNotifyBegin" }, // 2946899135
		{ &Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyEnd, "OnNotifyEnd" }, // 631134576
		{ &Z_Construct_UFunction_UPaperZDAnimNotifyState_OnNotifyTick, "OnNotifyTick" }, // 3439178122
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "PaperZD" },
		{ "Comment", "/* Duration of this state notify. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotifyState.h" },
		{ "ToolTip", "Duration of this state notify." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimNotifyState, Duration), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::ClassParams = {
		&UPaperZDAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::PropPointers),
		0,
		0x009020A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimNotifyState()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotifyState.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimNotifyState.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimNotifyState>()
	{
		return UPaperZDAnimNotifyState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotifyState);
	UPaperZDAnimNotifyState::~UPaperZDAnimNotifyState() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotifyState, UPaperZDAnimNotifyState::StaticClass, TEXT("UPaperZDAnimNotifyState"), &Z_Registration_Info_UClass_UPaperZDAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotifyState), 3646775484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_1424036021(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
