// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATTERN_STATE_IStrategy_generated_h
#error "IStrategy.generated.h already included, missing '#pragma once' in IStrategy.h"
#endif
#define PATTERN_STATE_IStrategy_generated_h

#define Pattern_State_Source_Pattern_State_IStrategy_h_13_SPARSE_DATA
#define Pattern_State_Source_Pattern_State_IStrategy_h_13_RPC_WRAPPERS
#define Pattern_State_Source_Pattern_State_IStrategy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Pattern_State_Source_Pattern_State_IStrategy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATTERN_STATE_API UIStrategy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStrategy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATTERN_STATE_API, UIStrategy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStrategy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATTERN_STATE_API UIStrategy(UIStrategy&&); \
	PATTERN_STATE_API UIStrategy(const UIStrategy&); \
public:


#define Pattern_State_Source_Pattern_State_IStrategy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATTERN_STATE_API UIStrategy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATTERN_STATE_API UIStrategy(UIStrategy&&); \
	PATTERN_STATE_API UIStrategy(const UIStrategy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATTERN_STATE_API, UIStrategy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStrategy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStrategy)


#define Pattern_State_Source_Pattern_State_IStrategy_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIStrategy(); \
	friend struct Z_Construct_UClass_UIStrategy_Statics; \
public: \
	DECLARE_CLASS(UIStrategy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Pattern_State"), PATTERN_STATE_API) \
	DECLARE_SERIALIZER(UIStrategy)


#define Pattern_State_Source_Pattern_State_IStrategy_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_GENERATED_UINTERFACE_BODY() \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pattern_State_Source_Pattern_State_IStrategy_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_GENERATED_UINTERFACE_BODY() \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pattern_State_Source_Pattern_State_IStrategy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIStrategy() {} \
public: \
	typedef UIStrategy UClassType; \
	typedef IIStrategy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Pattern_State_Source_Pattern_State_IStrategy_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIStrategy() {} \
public: \
	typedef UIStrategy UClassType; \
	typedef IIStrategy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Pattern_State_Source_Pattern_State_IStrategy_h_10_PROLOG
#define Pattern_State_Source_Pattern_State_IStrategy_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_SPARSE_DATA \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_RPC_WRAPPERS \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pattern_State_Source_Pattern_State_IStrategy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_SPARSE_DATA \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Pattern_State_Source_Pattern_State_IStrategy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATTERN_STATE_API UClass* StaticClass<class UIStrategy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pattern_State_Source_Pattern_State_IStrategy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
