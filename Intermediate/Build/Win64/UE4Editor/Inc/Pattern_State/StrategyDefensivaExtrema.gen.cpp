// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/StrategyDefensivaExtrema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyDefensivaExtrema() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStrategyDefensivaExtrema_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStrategyDefensivaExtrema();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIStrategy_NoRegister();
// End Cross Module References
	void AStrategyDefensivaExtrema::StaticRegisterNativesAStrategyDefensivaExtrema()
	{
	}
	UClass* Z_Construct_UClass_AStrategyDefensivaExtrema_NoRegister()
	{
		return AStrategyDefensivaExtrema::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyDefensivaExtrema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyDefensivaExtrema.h" },
		{ "ModuleRelativePath", "StrategyDefensivaExtrema.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyDefensivaExtrema, IIStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyDefensivaExtrema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::ClassParams = {
		&AStrategyDefensivaExtrema::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyDefensivaExtrema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyDefensivaExtrema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyDefensivaExtrema, 4294118146);
	template<> PATTERN_STATE_API UClass* StaticClass<AStrategyDefensivaExtrema>()
	{
		return AStrategyDefensivaExtrema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyDefensivaExtrema(Z_Construct_UClass_AStrategyDefensivaExtrema, &AStrategyDefensivaExtrema::StaticClass, TEXT("/Script/Pattern_State"), TEXT("AStrategyDefensivaExtrema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyDefensivaExtrema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
