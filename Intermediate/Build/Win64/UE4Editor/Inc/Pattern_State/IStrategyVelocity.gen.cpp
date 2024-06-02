// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/IStrategyVelocity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStrategyVelocity() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIStrategyVelocity_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIStrategyVelocity();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
// End Cross Module References
	void UIStrategyVelocity::StaticRegisterNativesUIStrategyVelocity()
	{
	}
	UClass* Z_Construct_UClass_UIStrategyVelocity_NoRegister()
	{
		return UIStrategyVelocity::StaticClass();
	}
	struct Z_Construct_UClass_UIStrategyVelocity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIStrategyVelocity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIStrategyVelocity_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IStrategyVelocity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIStrategyVelocity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIStrategyVelocity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIStrategyVelocity_Statics::ClassParams = {
		&UIStrategyVelocity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIStrategyVelocity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIStrategyVelocity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIStrategyVelocity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIStrategyVelocity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIStrategyVelocity, 2047047889);
	template<> PATTERN_STATE_API UClass* StaticClass<UIStrategyVelocity>()
	{
		return UIStrategyVelocity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIStrategyVelocity(Z_Construct_UClass_UIStrategyVelocity, &UIStrategyVelocity::StaticClass, TEXT("/Script/Pattern_State"), TEXT("UIStrategyVelocity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIStrategyVelocity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
