// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/MovimientoRombo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoRombo() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimientoRombo_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimientoRombo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimientoRombo::StaticRegisterNativesUMovimientoRombo()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoRombo_NoRegister()
	{
		return UMovimientoRombo::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoRombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRadio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRadio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoRombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoRombo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoRombo.h" },
		{ "ModuleRelativePath", "MovimientoRombo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoRombo_Statics::NewProp_MoveRadio_MetaData[] = {
		{ "ModuleRelativePath", "MovimientoRombo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimientoRombo_Statics::NewProp_MoveRadio = { "MoveRadio", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimientoRombo, MoveRadio), METADATA_PARAMS(Z_Construct_UClass_UMovimientoRombo_Statics::NewProp_MoveRadio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoRombo_Statics::NewProp_MoveRadio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovimientoRombo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimientoRombo_Statics::NewProp_MoveRadio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoRombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoRombo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoRombo_Statics::ClassParams = {
		&UMovimientoRombo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovimientoRombo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoRombo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoRombo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoRombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoRombo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoRombo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoRombo, 3313187105);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimientoRombo>()
	{
		return UMovimientoRombo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoRombo(Z_Construct_UClass_UMovimientoRombo, &UMovimientoRombo::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UMovimientoRombo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoRombo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
