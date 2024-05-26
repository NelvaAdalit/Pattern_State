// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/StateDispararHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateDispararHielo() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStateDispararHielo_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStateDispararHielo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
	PATTERN_STATE_API UClass* Z_Construct_UClass_ACanionVali_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIState_NoRegister();
// End Cross Module References
	void AStateDispararHielo::StaticRegisterNativesAStateDispararHielo()
	{
	}
	UClass* Z_Construct_UClass_AStateDispararHielo_NoRegister()
	{
		return AStateDispararHielo::StaticClass();
	}
	struct Z_Construct_UClass_AStateDispararHielo_Statics
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
	UObject* (*const Z_Construct_UClass_AStateDispararHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateDispararHielo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateDispararHielo.h" },
		{ "ModuleRelativePath", "StateDispararHielo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateDispararHielo_Statics::NewProp_CanionVali_MetaData[] = {
		{ "Category", "Disparar Proyectil Hielo" },
		{ "ModuleRelativePath", "StateDispararHielo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStateDispararHielo_Statics::NewProp_CanionVali = { "CanionVali", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateDispararHielo, CanionVali), Z_Construct_UClass_ACanionVali_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStateDispararHielo_Statics::NewProp_CanionVali_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStateDispararHielo_Statics::NewProp_CanionVali_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStateDispararHielo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStateDispararHielo_Statics::NewProp_CanionVali,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStateDispararHielo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIState_NoRegister, (int32)VTABLE_OFFSET(AStateDispararHielo, IIState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStateDispararHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStateDispararHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStateDispararHielo_Statics::ClassParams = {
		&AStateDispararHielo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStateDispararHielo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStateDispararHielo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStateDispararHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStateDispararHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStateDispararHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStateDispararHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStateDispararHielo, 600501704);
	template<> PATTERN_STATE_API UClass* StaticClass<AStateDispararHielo>()
	{
		return AStateDispararHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStateDispararHielo(Z_Construct_UClass_AStateDispararHielo, &AStateDispararHielo::StaticClass, TEXT("/Script/Pattern_State"), TEXT("AStateDispararHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStateDispararHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
