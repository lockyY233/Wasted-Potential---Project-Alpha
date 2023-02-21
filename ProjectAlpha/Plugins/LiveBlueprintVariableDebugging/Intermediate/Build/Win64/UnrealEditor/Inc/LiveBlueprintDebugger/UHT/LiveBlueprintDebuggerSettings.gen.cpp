// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveBlueprintDebugger/Public/LiveBlueprintDebuggerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveBlueprintDebuggerSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	LIVEBLUEPRINTDEBUGGER_API UClass* Z_Construct_UClass_ULiveBlueprintDebuggerSettings();
	LIVEBLUEPRINTDEBUGGER_API UClass* Z_Construct_UClass_ULiveBlueprintDebuggerSettings_NoRegister();
	LIVEBLUEPRINTDEBUGGER_API UEnum* Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate();
	LIVEBLUEPRINTDEBUGGER_API UEnum* Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables();
	UPackage* Z_Construct_UPackage__Script_LiveBlueprintDebugger();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShowBlueprintVariables;
	static UEnum* EShowBlueprintVariables_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShowBlueprintVariables.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShowBlueprintVariables.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables, Z_Construct_UPackage__Script_LiveBlueprintDebugger(), TEXT("EShowBlueprintVariables"));
		}
		return Z_Registration_Info_UEnum_EShowBlueprintVariables.OuterSingleton;
	}
	template<> LIVEBLUEPRINTDEBUGGER_API UEnum* StaticEnum<EShowBlueprintVariables>()
	{
		return EShowBlueprintVariables_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::Enumerators[] = {
		{ "EShowBlueprintVariables::OnlyWhenPlayingOrSimulating", (int64)EShowBlueprintVariables::OnlyWhenPlayingOrSimulating },
		{ "EShowBlueprintVariables::Always", (int64)EShowBlueprintVariables::Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::Enum_MetaDataParams[] = {
		{ "Always.Name", "EShowBlueprintVariables::Always" },
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
		{ "OnlyWhenPlayingOrSimulating.Name", "EShowBlueprintVariables::OnlyWhenPlayingOrSimulating" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveBlueprintDebugger,
		nullptr,
		"EShowBlueprintVariables",
		"EShowBlueprintVariables",
		Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables()
	{
		if (!Z_Registration_Info_UEnum_EShowBlueprintVariables.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShowBlueprintVariables.InnerSingleton, Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShowBlueprintVariables.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyRefreshRate;
	static UEnum* EPropertyRefreshRate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyRefreshRate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyRefreshRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate, Z_Construct_UPackage__Script_LiveBlueprintDebugger(), TEXT("EPropertyRefreshRate"));
		}
		return Z_Registration_Info_UEnum_EPropertyRefreshRate.OuterSingleton;
	}
	template<> LIVEBLUEPRINTDEBUGGER_API UEnum* StaticEnum<EPropertyRefreshRate>()
	{
		return EPropertyRefreshRate_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::Enumerators[] = {
		{ "EPropertyRefreshRate::NoLiveUpdates", (int64)EPropertyRefreshRate::NoLiveUpdates },
		{ "EPropertyRefreshRate::One", (int64)EPropertyRefreshRate::One },
		{ "EPropertyRefreshRate::Ten", (int64)EPropertyRefreshRate::Ten },
		{ "EPropertyRefreshRate::Thirty", (int64)EPropertyRefreshRate::Thirty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
		{ "NoLiveUpdates.DisplayName", "No Live Updates" },
		{ "NoLiveUpdates.Name", "EPropertyRefreshRate::NoLiveUpdates" },
		{ "One.DisplayName", "1Hz" },
		{ "One.Name", "EPropertyRefreshRate::One" },
		{ "Ten.DisplayName", "10Hz" },
		{ "Ten.Name", "EPropertyRefreshRate::Ten" },
		{ "Thirty.DisplayName", "30Hz" },
		{ "Thirty.Name", "EPropertyRefreshRate::Thirty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveBlueprintDebugger,
		nullptr,
		"EPropertyRefreshRate",
		"EPropertyRefreshRate",
		Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate()
	{
		if (!Z_Registration_Info_UEnum_EPropertyRefreshRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyRefreshRate.InnerSingleton, Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyRefreshRate.InnerSingleton;
	}
	void ULiveBlueprintDebuggerSettings::StaticRegisterNativesULiveBlueprintDebuggerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveBlueprintDebuggerSettings);
	UClass* Z_Construct_UClass_ULiveBlueprintDebuggerSettings_NoRegister()
	{
		return ULiveBlueprintDebuggerSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhenToShowVariables_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhenToShowVariables_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhenToShowVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightValuesThatHaveChanged_MetaData[];
#endif
		static void NewProp_bHighlightValuesThatHaveChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightValuesThatHaveChanged;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyRefreshRate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyRefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyRefreshRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyChangedHighlightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyChangedHighlightColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveBlueprintDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveBlueprintDebuggerSettings.h" },
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables_MetaData[] = {
		{ "Category", "Live Blueprint Debugger" },
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables = { "WhenToShowVariables", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveBlueprintDebuggerSettings, WhenToShowVariables), Z_Construct_UEnum_LiveBlueprintDebugger_EShowBlueprintVariables, METADATA_PARAMS(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables_MetaData)) }; // 4126335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged_MetaData[] = {
		{ "Category", "Live Blueprint Debugger" },
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged_SetBit(void* Obj)
	{
		((ULiveBlueprintDebuggerSettings*)Obj)->bHighlightValuesThatHaveChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged = { "bHighlightValuesThatHaveChanged", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveBlueprintDebuggerSettings), &Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate_MetaData[] = {
		{ "Category", "Live Blueprint Debugger" },
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate = { "PropertyRefreshRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveBlueprintDebuggerSettings, PropertyRefreshRate), Z_Construct_UEnum_LiveBlueprintDebugger_EPropertyRefreshRate, METADATA_PARAMS(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate_MetaData)) }; // 1362060866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyChangedHighlightColor_MetaData[] = {
		{ "Category", "Live Blueprint Debugger" },
		{ "ModuleRelativePath", "Public/LiveBlueprintDebuggerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyChangedHighlightColor = { "PropertyChangedHighlightColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveBlueprintDebuggerSettings, PropertyChangedHighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyChangedHighlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyChangedHighlightColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_WhenToShowVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_bHighlightValuesThatHaveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyRefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::NewProp_PropertyChangedHighlightColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveBlueprintDebuggerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::ClassParams = {
		&ULiveBlueprintDebuggerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveBlueprintDebuggerSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveBlueprintDebuggerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveBlueprintDebuggerSettings.OuterSingleton, Z_Construct_UClass_ULiveBlueprintDebuggerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveBlueprintDebuggerSettings.OuterSingleton;
	}
	template<> LIVEBLUEPRINTDEBUGGER_API UClass* StaticClass<ULiveBlueprintDebuggerSettings>()
	{
		return ULiveBlueprintDebuggerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveBlueprintDebuggerSettings);
	ULiveBlueprintDebuggerSettings::~ULiveBlueprintDebuggerSettings() {}
	struct Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics::EnumInfo[] = {
		{ EShowBlueprintVariables_StaticEnum, TEXT("EShowBlueprintVariables"), &Z_Registration_Info_UEnum_EShowBlueprintVariables, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4126335U) },
		{ EPropertyRefreshRate_StaticEnum, TEXT("EPropertyRefreshRate"), &Z_Registration_Info_UEnum_EPropertyRefreshRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1362060866U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveBlueprintDebuggerSettings, ULiveBlueprintDebuggerSettings::StaticClass, TEXT("ULiveBlueprintDebuggerSettings"), &Z_Registration_Info_UClass_ULiveBlueprintDebuggerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveBlueprintDebuggerSettings), 1684507261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_530723682(TEXT("/Script/LiveBlueprintDebugger"),
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectAlpha_Plugins_LiveBlueprintVariableDebugging_Source_LiveBlueprintDebugger_Public_LiveBlueprintDebuggerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
