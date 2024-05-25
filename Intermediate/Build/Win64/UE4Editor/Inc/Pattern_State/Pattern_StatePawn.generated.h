// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATTERN_STATE_Pattern_StatePawn_generated_h
#error "Pattern_StatePawn.generated.h already included, missing '#pragma once' in Pattern_StatePawn.h"
#endif
#define PATTERN_STATE_Pattern_StatePawn_generated_h

#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_SPARSE_DATA
#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_RPC_WRAPPERS
#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPattern_StatePawn(); \
	friend struct Z_Construct_UClass_APattern_StatePawn_Statics; \
public: \
	DECLARE_CLASS(APattern_StatePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pattern_State"), NO_API) \
	DECLARE_SERIALIZER(APattern_StatePawn)


#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPattern_StatePawn(); \
	friend struct Z_Construct_UClass_APattern_StatePawn_Statics; \
public: \
	DECLARE_CLASS(APattern_StatePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pattern_State"), NO_API) \
	DECLARE_SERIALIZER(APattern_StatePawn)


#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APattern_StatePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APattern_StatePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APattern_StatePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APattern_StatePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APattern_StatePawn(APattern_StatePawn&&); \
	NO_API APattern_StatePawn(const APattern_StatePawn&); \
public:


#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APattern_StatePawn(APattern_StatePawn&&); \
	NO_API APattern_StatePawn(const APattern_StatePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APattern_StatePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APattern_StatePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APattern_StatePawn)


#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(APattern_StatePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(APattern_StatePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APattern_StatePawn, CameraBoom); }


#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_9_PROLOG
#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_SPARSE_DATA \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_RPC_WRAPPERS \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_INCLASS \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_SPARSE_DATA \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_INCLASS_NO_PURE_DECLS \
	Pattern_State_Source_Pattern_State_Pattern_StatePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATTERN_STATE_API UClass* StaticClass<class APattern_StatePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pattern_State_Source_Pattern_State_Pattern_StatePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
