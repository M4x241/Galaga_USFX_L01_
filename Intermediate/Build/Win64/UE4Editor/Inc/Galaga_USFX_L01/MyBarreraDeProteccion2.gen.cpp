// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/MyBarreraDeProteccion2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBarreraDeProteccion2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AMyBarreraDeProteccion2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AMyBarreraDeProteccion2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABarreraDeProteccion();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AMyBarreraDeProteccion2::StaticRegisterNativesAMyBarreraDeProteccion2()
	{
	}
	UClass* Z_Construct_UClass_AMyBarreraDeProteccion2_NoRegister()
	{
		return AMyBarreraDeProteccion2::StaticClass();
	}
	struct Z_Construct_UClass_AMyBarreraDeProteccion2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarreraDeProteccion,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBarreraDeProteccion2.h" },
		{ "ModuleRelativePath", "MyBarreraDeProteccion2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBarreraDeProteccion2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::ClassParams = {
		&AMyBarreraDeProteccion2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyBarreraDeProteccion2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyBarreraDeProteccion2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyBarreraDeProteccion2, 1188067632);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AMyBarreraDeProteccion2>()
	{
		return AMyBarreraDeProteccion2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyBarreraDeProteccion2(Z_Construct_UClass_AMyBarreraDeProteccion2, &AMyBarreraDeProteccion2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AMyBarreraDeProteccion2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBarreraDeProteccion2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
