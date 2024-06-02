// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/EstrategiaVelocity2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaVelocity2() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_AEstrategiaVelocity2_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_AEstrategiaVelocity2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIStrategyVelocity_NoRegister();
// End Cross Module References
	void AEstrategiaVelocity2::StaticRegisterNativesAEstrategiaVelocity2()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaVelocity2_NoRegister()
	{
		return AEstrategiaVelocity2::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaVelocity2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaVelocity2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaVelocity2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaVelocity2.h" },
		{ "ModuleRelativePath", "EstrategiaVelocity2.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaVelocity2_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategyVelocity_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaVelocity2, IIStrategyVelocity), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaVelocity2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaVelocity2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaVelocity2_Statics::ClassParams = {
		&AEstrategiaVelocity2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaVelocity2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaVelocity2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaVelocity2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaVelocity2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaVelocity2, 2158173723);
	template<> PATTERN_STATE_API UClass* StaticClass<AEstrategiaVelocity2>()
	{
		return AEstrategiaVelocity2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaVelocity2(Z_Construct_UClass_AEstrategiaVelocity2, &AEstrategiaVelocity2::StaticClass, TEXT("/Script/Pattern_State"), TEXT("AEstrategiaVelocity2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaVelocity2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
