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
#ifdef INTERACTION_InteractionProjectile_generated_h
#error "InteractionProjectile.generated.h already included, missing '#pragma once' in InteractionProjectile.h"
#endif
#define INTERACTION_InteractionProjectile_generated_h

#define Interaction_Source_Interaction_InteractionProjectile_h_12_SPARSE_DATA
#define Interaction_Source_Interaction_InteractionProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Interaction_Source_Interaction_InteractionProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Interaction_Source_Interaction_InteractionProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionProjectile(); \
	friend struct Z_Construct_UClass_AInteractionProjectile_Statics; \
public: \
	DECLARE_CLASS(AInteractionProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(AInteractionProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Interaction_Source_Interaction_InteractionProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionProjectile(); \
	friend struct Z_Construct_UClass_AInteractionProjectile_Statics; \
public: \
	DECLARE_CLASS(AInteractionProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(AInteractionProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Interaction_Source_Interaction_InteractionProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionProjectile(AInteractionProjectile&&); \
	NO_API AInteractionProjectile(const AInteractionProjectile&); \
public:


#define Interaction_Source_Interaction_InteractionProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionProjectile(AInteractionProjectile&&); \
	NO_API AInteractionProjectile(const AInteractionProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionProjectile)


#define Interaction_Source_Interaction_InteractionProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AInteractionProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AInteractionProjectile, ProjectileMovement); }


#define Interaction_Source_Interaction_InteractionProjectile_h_9_PROLOG
#define Interaction_Source_Interaction_InteractionProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Interaction_Source_Interaction_InteractionProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Interaction_Source_Interaction_InteractionProjectile_h_12_SPARSE_DATA \
	Interaction_Source_Interaction_InteractionProjectile_h_12_RPC_WRAPPERS \
	Interaction_Source_Interaction_InteractionProjectile_h_12_INCLASS \
	Interaction_Source_Interaction_InteractionProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Interaction_Source_Interaction_InteractionProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Interaction_Source_Interaction_InteractionProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Interaction_Source_Interaction_InteractionProjectile_h_12_SPARSE_DATA \
	Interaction_Source_Interaction_InteractionProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Interaction_Source_Interaction_InteractionProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Interaction_Source_Interaction_InteractionProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTION_API UClass* StaticClass<class AInteractionProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Interaction_Source_Interaction_InteractionProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
