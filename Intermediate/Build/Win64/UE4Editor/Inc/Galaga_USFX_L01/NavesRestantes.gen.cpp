// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NavesRestantes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesRestantes() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANavesRestantes_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANavesRestantes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANavesRestantes::StaticRegisterNativesANavesRestantes()
	{
	}
	UClass* Z_Construct_UClass_ANavesRestantes_NoRegister()
	{
		return ANavesRestantes::StaticClass();
	}
	struct Z_Construct_UClass_ANavesRestantes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesRestantes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesRestantes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavesRestantes.h" },
		{ "ModuleRelativePath", "NavesRestantes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesRestantes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesRestantes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesRestantes_Statics::ClassParams = {
		&ANavesRestantes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavesRestantes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesRestantes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesRestantes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesRestantes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesRestantes, 2576493155);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANavesRestantes>()
	{
		return ANavesRestantes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesRestantes(Z_Construct_UClass_ANavesRestantes, &ANavesRestantes::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANavesRestantes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesRestantes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
