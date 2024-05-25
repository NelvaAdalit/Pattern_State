// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/StateDispararLazer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateDispararLazer() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStateDispararLazer_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStateDispararLazer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
	PATTERN_STATE_API UClass* Z_Construct_UClass_ACanionVali_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIState_NoRegister();
// End Cross Module References
	void AStateDispararLazer::StaticRegisterNativesAStateDispararLazer()
	{
	}
	UClass* Z_Construct_UClass_AStateDispararLazer_NoRegister()
	{
		return AStateDispararLazer::StaticClass();
	}
	struct Z_Construct_UClass_AStateDispararLazer_Statics
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
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStateDispararLazer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateDispararLazer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateDispararLazer.h" },
		{ "ModuleRelativePath", "StateDispararLazer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateDispararLazer_Statics::NewProp_CanionVali_MetaData[] = {
		{ "Category", "Disparar Proyectil Lazer" },
		{ "ModuleRelativePath", "StateDispararLazer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStateDispararLazer_Statics::NewProp_CanionVali = { "CanionVali", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateDispararLazer, CanionVali), Z_Construct_UClass_ACanionVali_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStateDispararLazer_Statics::NewProp_CanionVali_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStateDispararLazer_Statics::NewProp_CanionVali_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStateDispararLazer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateDispararLazer_Statics::NewProp_CanionVali,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStateDispararLazer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIState_NoRegister, (int32)VTABLE_OFFSET(AStateDispararLazer, IIState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStateDispararLazer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStateDispararLazer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStateDispararLazer_Statics::ClassParams = {
		&AStateDispararLazer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStateDispararLazer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStateDispararLazer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStateDispararLazer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStateDispararLazer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStateDispararLazer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStateDispararLazer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStateDispararLazer, 4056313810);
	template<> PATTERN_STATE_API UClass* StaticClass<AStateDispararLazer>()
	{
		return AStateDispararLazer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStateDispararLazer(Z_Construct_UClass_AStateDispararLazer, &AStateDispararLazer::StaticClass, TEXT("/Script/Pattern_State"), TEXT("AStateDispararLazer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStateDispararLazer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
