// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PATTERN_STATE_Pattern_StateProjectile_generated_h
#error "Pattern_StateProjectile.generated.h already included, missing '#pragma once' in Pattern_StateProjectile.h"
#endif
#define PATTERN_STATE_Pattern_StateProjectile_generated_h

#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_SPARSE_DATA
#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPattern_StateProjectile(); \
	friend struct Z_Construct_UClass_APattern_StateProjectile_Statics; \
public: \
	DECLARE_CLASS(APattern_StateProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pattern_State"), NO_API) \
	DECLARE_SERIALIZER(APattern_StateProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPattern_StateProjectile(); \
	friend struct Z_Construct_UClass_APattern_StateProjectile_Statics; \
public: \
	DECLARE_CLASS(APattern_StateProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pattern_State"), NO_API) \
	DECLARE_SERIALIZER(APattern_StateProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APattern_StateProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APattern_StateProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APattern_StateProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APattern_StateProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APattern_StateProjectile(APattern_StateProjectile&&); \
	NO_API APattern_StateProjectile(const APattern_StateProjectile&); \
public:


#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APattern_StateProjectile(APattern_StateProjectile&&); \
	NO_API APattern_StateProjectile(const APattern_StateProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APattern_StateProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APattern_StateProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APattern_StateProjectile)


#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APattern_StateProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APattern_StateProjectile, ProjectileMovement); }


#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_12_PROLOG
#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_SPARSE_DATA \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_RPC_WRAPPERS \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_INCLASS \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_SPARSE_DATA \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATTERN_STATE_API UClass* StaticClass<class APattern_StateProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pattern_State_Source_Pattern_State_Pattern_StateProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
