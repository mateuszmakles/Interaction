// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/InteractableLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableLight() {}
// Cross Module References
	INTERACTION_API UClass* Z_Construct_UClass_AInteractableLight_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_AInteractableLight();
	INTERACTION_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_Interaction();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	void AInteractableLight::StaticRegisterNativesAInteractableLight()
	{
	}
	UClass* Z_Construct_UClass_AInteractableLight_NoRegister()
	{
		return AInteractableLight::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_On_MetaData[];
#endif
		static void NewProp_On_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_On;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableLight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractableLight.h" },
		{ "ModuleRelativePath", "InteractableLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableLight_Statics::NewProp_On_MetaData[] = {
		{ "ModuleRelativePath", "InteractableLight.h" },
	};
#endif
	void Z_Construct_UClass_AInteractableLight_Statics::NewProp_On_SetBit(void* Obj)
	{
		((AInteractableLight*)Obj)->On = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableLight_Statics::NewProp_On = { "On", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractableLight), &Z_Construct_UClass_AInteractableLight_Statics::NewProp_On_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractableLight_Statics::NewProp_On_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableLight_Statics::NewProp_On_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableLight_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "InteractableLight" },
		{ "ModuleRelativePath", "InteractableLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableLight_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableLight, Intensity), METADATA_PARAMS(Z_Construct_UClass_AInteractableLight_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableLight_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableLight_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "InteractableLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableLight_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableLight, Light), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableLight_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableLight_Statics::NewProp_Light_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableLight_Statics::NewProp_On,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableLight_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableLight_Statics::NewProp_Light,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableLight_Statics::ClassParams = {
		&AInteractableLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableLight, 2016132539);
	template<> INTERACTION_API UClass* StaticClass<AInteractableLight>()
	{
		return AInteractableLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableLight(Z_Construct_UClass_AInteractableLight, &AInteractableLight::StaticClass, TEXT("/Script/Interaction"), TEXT("AInteractableLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
