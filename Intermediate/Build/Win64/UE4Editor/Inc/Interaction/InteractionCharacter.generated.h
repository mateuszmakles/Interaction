// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTION_InteractionCharacter_generated_h
#error "InteractionCharacter.generated.h already included, missing '#pragma once' in InteractionCharacter.h"
#endif
#define INTERACTION_InteractionCharacter_generated_h

#define Interaction_Source_Interaction_InteractionCharacter_h_15_SPARSE_DATA
#define Interaction_Source_Interaction_InteractionCharacter_h_15_RPC_WRAPPERS
#define Interaction_Source_Interaction_InteractionCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Interaction_Source_Interaction_InteractionCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionCharacter(); \
	friend struct Z_Construct_UClass_AInteractionCharacter_Statics; \
public: \
	DECLARE_CLASS(AInteractionCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(AInteractionCharacter)


#define Interaction_Source_Interaction_InteractionCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionCharacter(); \
	friend struct Z_Construct_UClass_AInteractionCharacter_Statics; \
public: \
	DECLARE_CLASS(AInteractionCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(AInteractionCharacter)


#define Interaction_Source_Interaction_InteractionCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionCharacter(AInteractionCharacter&&); \
	NO_API AInteractionCharacter(const AInteractionCharacter&); \
public:


#define Interaction_Source_Interaction_InteractionCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionCharacter(AInteractionCharacter&&); \
	NO_API AInteractionCharacter(const AInteractionCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionCharacter)


#define Interaction_Source_Interaction_InteractionCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AInteractionCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AInteractionCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AInteractionCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AInteractionCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AInteractionCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AInteractionCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AInteractionCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AInteractionCharacter, L_MotionController); }


#define Interaction_Source_Interaction_InteractionCharacter_h_12_PROLOG
#define Interaction_Source_Interaction_InteractionCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Interaction_Source_Interaction_InteractionCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Interaction_Source_Interaction_InteractionCharacter_h_15_SPARSE_DATA \
	Interaction_Source_Interaction_InteractionCharacter_h_15_RPC_WRAPPERS \
	Interaction_Source_Interaction_InteractionCharacter_h_15_INCLASS \
	Interaction_Source_Interaction_InteractionCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Interaction_Source_Interaction_InteractionCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Interaction_Source_Interaction_InteractionCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Interaction_Source_Interaction_InteractionCharacter_h_15_SPARSE_DATA \
	Interaction_Source_Interaction_InteractionCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Interaction_Source_Interaction_InteractionCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Interaction_Source_Interaction_InteractionCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTION_API UClass* StaticClass<class AInteractionCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Interaction_Source_Interaction_InteractionCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
