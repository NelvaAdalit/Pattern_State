// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/Pattern_StateGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePattern_StateGameMode() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_APattern_StateGameMode_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_APattern_StateGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
	PATTERN_STATE_API UClass* Z_Construct_UClass_ACanionVali_NoRegister();
// End Cross Module References
	void APattern_StateGameMode::StaticRegisterNativesAPattern_StateGameMode()
	{
	}
	UClass* Z_Construct_UClass_APattern_StateGameMode_NoRegister()
	{
		return APattern_StateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APattern_StateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanionVali_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanionVali;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APattern_StateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APattern_StateGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Pattern_StateGameMode.h" },
		{ "ModuleRelativePath", "Pattern_StateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APattern_StateGameMode_Statics::NewProp_CanionVali_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "Pattern_StateGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APattern_StateGameMode_Statics::NewProp_CanionVali = { "CanionVali", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APattern_StateGameMode, CanionVali), Z_Construct_UClass_ACanionVali_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APattern_StateGameMode_Statics::NewProp_CanionVali_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APattern_StateGameMode_Statics::NewProp_CanionVali_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APattern_StateGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APattern_StateGameMode_Statics::NewProp_CanionVali,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APattern_StateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APattern_StateGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APattern_StateGameMode_Statics::ClassParams = {
		&APattern_StateGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APattern_StateGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APattern_StateGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APattern_StateGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APattern_StateGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APattern_StateGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APattern_StateGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APattern_StateGameMode, 2644808553);
	template<> PATTERN_STATE_API UClass* StaticClass<APattern_StateGameMode>()
	{
		return APattern_StateGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APattern_StateGameMode(Z_Construct_UClass_APattern_StateGameMode, &APattern_StateGameMode::StaticClass, TEXT("/Script/Pattern_State"), TEXT("APattern_StateGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APattern_StateGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
