// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/StrategyFastFurious.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyFastFurious() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStrategyFastFurious_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_AStrategyFastFurious();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIStrategyVelocity_NoRegister();
// End Cross Module References
	void AStrategyFastFurious::StaticRegisterNativesAStrategyFastFurious()
	{
	}
	UClass* Z_Construct_UClass_AStrategyFastFurious_NoRegister()
	{
		return AStrategyFastFurious::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyFastFurious_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyFastFurious_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyFastFurious_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyFastFurious.h" },
		{ "ModuleRelativePath", "StrategyFastFurious.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyFastFurious_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategyVelocity_NoRegister, (int32)VTABLE_OFFSET(AStrategyFastFurious, IIStrategyVelocity), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyFastFurious_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyFastFurious>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyFastFurious_Statics::ClassParams = {
		&AStrategyFastFurious::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategyFastFurious_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyFastFurious_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyFastFurious()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyFastFurious_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyFastFurious, 3037274918);
	template<> PATTERN_STATE_API UClass* StaticClass<AStrategyFastFurious>()
	{
		return AStrategyFastFurious::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyFastFurious(Z_Construct_UClass_AStrategyFastFurious, &AStrategyFastFurious::StaticClass, TEXT("/Script/Pattern_State"), TEXT("AStrategyFastFurious"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyFastFurious);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
