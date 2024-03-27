// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/BarreraDeProteccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarreraDeProteccion() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABarreraDeProteccion_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABarreraDeProteccion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ABarreraDeProteccion::StaticRegisterNativesABarreraDeProteccion()
	{
	}
	UClass* Z_Construct_UClass_ABarreraDeProteccion_NoRegister()
	{
		return ABarreraDeProteccion::StaticClass();
	}
	struct Z_Construct_UClass_ABarreraDeProteccion_Statics
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
	UObject* (*const Z_Construct_UClass_ABarreraDeProteccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreraDeProteccion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BarreraDeProteccion.h" },
		{ "ModuleRelativePath", "BarreraDeProteccion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreraDeProteccion_Statics::NewProp_tempo_MetaData[] = {
		{ "Category", "BarreraDeProteccion" },
		{ "ModuleRelativePath", "BarreraDeProteccion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarreraDeProteccion_Statics::NewProp_tempo = { "tempo", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarreraDeProteccion, tempo), METADATA_PARAMS(Z_Construct_UClass_ABarreraDeProteccion_Statics::NewProp_tempo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreraDeProteccion_Statics::NewProp_tempo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarreraDeProteccion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarreraDeProteccion_Statics::NewProp_tempo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarreraDeProteccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarreraDeProteccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarreraDeProteccion_Statics::ClassParams = {
		&ABarreraDeProteccion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarreraDeProteccion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarreraDeProteccion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarreraDeProteccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreraDeProteccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarreraDeProteccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarreraDeProteccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarreraDeProteccion, 740675297);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ABarreraDeProteccion>()
	{
		return ABarreraDeProteccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarreraDeProteccion(Z_Construct_UClass_ABarreraDeProteccion, &ABarreraDeProteccion::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ABarreraDeProteccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarreraDeProteccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
