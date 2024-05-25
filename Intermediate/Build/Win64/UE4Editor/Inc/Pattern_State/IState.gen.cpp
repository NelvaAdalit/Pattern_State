// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pattern_State/IState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIState() {}
// Cross Module References
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIState_NoRegister();
	PATTERN_STATE_API UClass* Z_Construct_UClass_UIState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Pattern_State();
// End Cross Module References
	void UIState::StaticRegisterNativesUIState()
	{
	}
	UClass* Z_Construct_UClass_UIState_NoRegister()
	{
		return UIState::StaticClass();
	}
	struct Z_Construct_UClass_UIState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Pattern_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIState_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIState_Statics::ClassParams = {
		&UIState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIState, 3650924309);
	template<> PATTERN_STATE_API UClass* StaticClass<UIState>()
	{
		return UIState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIState(Z_Construct_UClass_UIState, &UIState::StaticClass, TEXT("/Script/Pattern_State"), TEXT("UIState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
