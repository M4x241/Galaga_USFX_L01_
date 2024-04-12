// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/MovimientoBomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoBomba() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimientoBomba_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimientoBomba();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimientoBomba::StaticRegisterNativesUMovimientoBomba()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoBomba_NoRegister()
	{
		return UMovimientoBomba::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoBomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoBomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoBomba_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoBomba.h" },
		{ "ModuleRelativePath", "MovimientoBomba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoBomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoBomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoBomba_Statics::ClassParams = {
		&UMovimientoBomba::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoBomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoBomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoBomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoBomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoBomba, 1703423401);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimientoBomba>()
	{
		return UMovimientoBomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoBomba(Z_Construct_UClass_UMovimientoBomba, &UMovimientoBomba::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UMovimientoBomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoBomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
