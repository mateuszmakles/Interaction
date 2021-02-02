// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTION_InteractableLight_generated_h
#error "InteractableLight.generated.h already included, missing '#pragma once' in InteractableLight.h"
#endif
#define INTERACTION_InteractableLight_generated_h

#define Interaction_Source_Interaction_InteractableLight_h_16_SPARSE_DATA
#define Interaction_Source_Interaction_InteractableLight_h_16_RPC_WRAPPERS
#define Interaction_Source_Interaction_InteractableLight_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Interaction_Source_Interaction_InteractableLight_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableLight(); \
	friend struct Z_Construct_UClass_AInteractableLight_Statics; \
public: \
	DECLARE_CLASS(AInteractableLight, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(AInteractableLight)


#define Interaction_Source_Interaction_InteractableLight_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableLight(); \
	friend struct Z_Construct_UClass_AInteractableLight_Statics; \
public: \
	DECLARE_CLASS(AInteractableLight, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(AInteractableLight)


#define Interaction_Source_Interaction_InteractableLight_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableLight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableLight(AInteractableLight&&); \
	NO_API AInteractableLight(const AInteractableLight&); \
public:


#define Interaction_Source_Interaction_InteractableLight_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableLight(AInteractableLight&&); \
	NO_API AInteractableLight(const AInteractableLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableLight)


#define Interaction_Source_Interaction_InteractableLight_h_16_PRIVATE_PROPERTY_OFFSET
#define Interaction_Source_Interaction_InteractableLight_h_13_PROLOG
#define Interaction_Source_Interaction_InteractableLight_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Interaction_Source_Interaction_InteractableLight_h_16_PRIVATE_PROPERTY_OFFSET \
	Interaction_Source_Interaction_InteractableLight_h_16_SPARSE_DATA \
	Interaction_Source_Interaction_InteractableLight_h_16_RPC_WRAPPERS \
	Interaction_Source_Interaction_InteractableLight_h_16_INCLASS \
	Interaction_Source_Interaction_InteractableLight_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Interaction_Source_Interaction_InteractableLight_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Interaction_Source_Interaction_InteractableLight_h_16_PRIVATE_PROPERTY_OFFSET \
	Interaction_Source_Interaction_InteractableLight_h_16_SPARSE_DATA \
	Interaction_Source_Interaction_InteractableLight_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Interaction_Source_Interaction_InteractableLight_h_16_INCLASS_NO_PURE_DECLS \
	Interaction_Source_Interaction_InteractableLight_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTION_API UClass* StaticClass<class AInteractableLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Interaction_Source_Interaction_InteractableLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
