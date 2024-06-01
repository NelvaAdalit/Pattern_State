// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/IEstrategias.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEstrategias() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIEstrategias_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIEstrategias();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
// End Cross Module References
	void UIEstrategias::StaticRegisterNativesUIEstrategias()
	{
	}
	UClass* Z_Construct_UClass_UIEstrategias_NoRegister()
	{
		return UIEstrategias::StaticClass();
	}
	struct Z_Construct_UClass_UIEstrategias_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIEstrategias_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEstrategias_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEstrategias.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIEstrategias_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEstrategias>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIEstrategias_Statics::ClassParams = {
		&UIEstrategias::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIEstrategias_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIEstrategias_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIEstrategias()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIEstrategias_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIEstrategias, 994437509);
	template<> PATTERN_STATE_API UClass* StaticClass<UIEstrategias>()
	{
		return UIEstrategias::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIEstrategias(Z_Construct_UClass_UIEstrategias, &UIEstrategias::StaticClass, TEXT("/Script/Pattern_State"), TEXT("UIEstrategias"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIEstrategias);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
