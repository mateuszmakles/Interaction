// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/InteractionHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionHUD() {}
// Cross Module References
	INTERACTION_API UClass* Z_Construct_UClass_AInteractionHUD_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_AInteractionHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Interaction();
// End Cross Module References
	void AInteractionHUD::StaticRegisterNativesAInteractionHUD()
	{
	}
	UClass* Z_Construct_UClass_AInteractionHUD_NoRegister()
	{
		return AInteractionHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InteractionHUD.h" },
		{ "ModuleRelativePath", "InteractionHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionHUD_Statics::ClassParams = {
		&AInteractionHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionHUD, 1824569322);
	template<> INTERACTION_API UClass* StaticClass<AInteractionHUD>()
	{
		return AInteractionHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionHUD(Z_Construct_UClass_AInteractionHUD, &AInteractionHUD::StaticClass, TEXT("/Script/Interaction"), TEXT("AInteractionHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
