// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/mucionV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemucionV2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AmucionV2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AmucionV2();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AmucionV2::StaticRegisterNativesAmucionV2()
	{
	}
	UClass* Z_Construct_UClass_AmucionV2_NoRegister()
	{
		return AmucionV2::StaticClass();
	}
	struct Z_Construct_UClass_AmucionV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmucionV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmucionV2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "mucionV2.h" },
		{ "ModuleRelativePath", "mucionV2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmucionV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmucionV2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AmucionV2_Statics::ClassParams = {
		&AmucionV2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AmucionV2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AmucionV2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmucionV2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AmucionV2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmucionV2, 410249929);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AmucionV2>()
	{
		return AmucionV2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmucionV2(Z_Construct_UClass_AmucionV2, &AmucionV2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AmucionV2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmucionV2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
