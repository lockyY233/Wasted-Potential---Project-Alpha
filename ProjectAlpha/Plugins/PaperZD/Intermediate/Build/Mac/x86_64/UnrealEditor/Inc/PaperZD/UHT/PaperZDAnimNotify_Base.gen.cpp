// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZD/Public/Notifies/PaperZDAnimNotify_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNotify_Base() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	DEFINE_FUNCTION(UPaperZDAnimNotify_Base::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDisplayName_Implementation();
		P_NATIVE_END;
	}
	struct PaperZDAnimNotify_Base_eventGetDisplayName_Parms
	{
		FName ReturnValue;
	};
	static FName NAME_UPaperZDAnimNotify_Base_GetDisplayName = FName(TEXT("GetDisplayName"));
	FName UPaperZDAnimNotify_Base::GetDisplayName() const
	{
		PaperZDAnimNotify_Base_eventGetDisplayName_Parms Parms;
		const_cast<UPaperZDAnimNotify_Base*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPaperZDAnimNotify_Base_GetDisplayName),&Parms);
		return Parms.ReturnValue;
	}
	void UPaperZDAnimNotify_Base::StaticRegisterNativesUPaperZDAnimNotify_Base()
	{
		UClass* Class = UPaperZDAnimNotify_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UPaperZDAnimNotify_Base::execGetDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperZDAnimNotify_Base_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notify" },
		{ "Comment", "/**\n\x09 * Obtain the name to be displayed on the editor's detail's panel\n\x09 */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Obtain the name to be displayed on the editor's detail's panel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDAnimNotify_Base, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(PaperZDAnimNotify_Base_eventGetDisplayName_Parms), Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDAnimNotify_Base);
	UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base_NoRegister()
	{
		return UPaperZDAnimNotify_Base::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceRenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceRenderComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFireInEditor_MetaData[];
#endif
		static void NewProp_bShouldFireInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFireInEditor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDAnimNotify_Base_GetDisplayName, "GetDisplayName" }, // 792790819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all the plugin's notifies.\n */" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Notifies/PaperZDAnimNotify_Base.h" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Base class for all the plugin's notifies." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/* Playback time that triggers this event. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Playback time that triggers this event." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimNotify_Base, Time), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/* Friendly name for the notify. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Friendly name for the notify." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimNotify_Base, Name), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/* Color of the Notify. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Color of the Notify." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimNotify_Base, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "Comment", "/* Index of the track in which the notify is stored. */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Index of the track in which the notify is stored." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimNotify_Base, TrackIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/* The render component currently used by the AnimSequence that owns this notify. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "The render component currently used by the AnimSequence that owns this notify." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent = { "SequenceRenderComponent", nullptr, (EPropertyFlags)0x001000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperZDAnimNotify_Base, SequenceRenderComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this notify instance should fire in animation editors */" },
		{ "ModuleRelativePath", "Public/Notifies/PaperZDAnimNotify_Base.h" },
		{ "ToolTip", "Whether this notify instance should fire in animation editors" },
	};
#endif
	void Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_SetBit(void* Obj)
	{
		((UPaperZDAnimNotify_Base*)Obj)->bShouldFireInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor = { "bShouldFireInEditor", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperZDAnimNotify_Base), &Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_TrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_SequenceRenderComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::NewProp_bShouldFireInEditor,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDAnimNotify_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::ClassParams = {
		&UPaperZDAnimNotify_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::PropPointers),
		0,
		0x009020A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperZDAnimNotify_Base()
	{
		if (!Z_Registration_Info_UClass_UPaperZDAnimNotify_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDAnimNotify_Base.OuterSingleton, Z_Construct_UClass_UPaperZDAnimNotify_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDAnimNotify_Base.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDAnimNotify_Base>()
	{
		return UPaperZDAnimNotify_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDAnimNotify_Base);
	UPaperZDAnimNotify_Base::~UPaperZDAnimNotify_Base() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDAnimNotify_Base, UPaperZDAnimNotify_Base::StaticClass, TEXT("UPaperZDAnimNotify_Base"), &Z_Registration_Info_UClass_UPaperZDAnimNotify_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDAnimNotify_Base), 4118054241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_4084619931(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_Notifies_PaperZDAnimNotify_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
