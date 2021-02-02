// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/InteractionGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionGameMode() {}
// Cross Module References
	INTERACTION_API UClass* Z_Construct_UClass_AInteractionGameMode_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_AInteractionGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Interaction();
// End Cross Module References
	void AInteractionGameMode::StaticRegisterNativesAInteractionGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInteractionGameMode_NoRegister()
	{
		return AInteractionGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InteractionGameMode.h" },
		{ "ModuleRelativePath", "InteractionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionGameMode_Statics::ClassParams = {
		&AInteractionGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionGameMode, 3973458349);
	template<> INTERACTION_API UClass* StaticClass<AInteractionGameMode>()
	{
		return AInteractionGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionGameMode(Z_Construct_UClass_AInteractionGameMode, &AInteractionGameMode::StaticClass, TEXT("/Script/Interaction"), TEXT("AInteractionGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
