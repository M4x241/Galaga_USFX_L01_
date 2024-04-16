// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Barreradeproteccion2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarreradeproteccion2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABarreradeproteccion2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABarreradeproteccion2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ABarreradeproteccion2::StaticRegisterNativesABarreradeproteccion2()
	{
	}
	UClass* Z_Construct_UClass_ABarreradeproteccion2_NoRegister()
	{
		return ABarreradeproteccion2::StaticClass();
	}
	struct Z_Construct_UClass_ABarreradeproteccion2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tempo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tempo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarreradeproteccion2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreradeproteccion2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barreradeproteccion2.h" },
		{ "ModuleRelativePath", "Barreradeproteccion2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreradeproteccion2_Statics::NewProp_tempo_MetaData[] = {
		{ "Category", "Barreradeproteccion2" },
		{ "ModuleRelativePath", "Barreradeproteccion2.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarreradeproteccion2_Statics::NewProp_tempo = { "tempo", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarreradeproteccion2, tempo), METADATA_PARAMS(Z_Construct_UClass_ABarreradeproteccion2_Statics::NewProp_tempo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreradeproteccion2_Statics::NewProp_tempo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarreradeproteccion2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarreradeproteccion2_Statics::NewProp_tempo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarreradeproteccion2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarreradeproteccion2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarreradeproteccion2_Statics::ClassParams = {
		&ABarreradeproteccion2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarreradeproteccion2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarreradeproteccion2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarreradeproteccion2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreradeproteccion2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarreradeproteccion2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarreradeproteccion2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarreradeproteccion2, 3988213606);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ABarreradeproteccion2>()
	{
		return ABarreradeproteccion2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarreradeproteccion2(Z_Construct_UClass_ABarreradeproteccion2, &ABarreradeproteccion2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ABarreradeproteccion2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarreradeproteccion2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
