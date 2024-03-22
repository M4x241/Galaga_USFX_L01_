// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ActivacionBarrera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivacionBarrera() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UActivacionBarrera_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UActivacionBarrera();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActivacionBarrera::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void UActivacionBarrera::StaticRegisterNativesUActivacionBarrera()
	{
		UClass* Class = UActivacionBarrera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &UActivacionBarrera::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivacionBarrera_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivacionBarrera_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cookbook" },
		{ "Comment", "//se levantara la baerra:\n" },
		{ "ModuleRelativePath", "ActivacionBarrera.h" },
		{ "ToolTip", "se levantara la baerra:" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivacionBarrera_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivacionBarrera, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivacionBarrera_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivacionBarrera_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivacionBarrera_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivacionBarrera_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivacionBarrera_NoRegister()
	{
		return UActivacionBarrera::StaticClass();
	}
	struct Z_Construct_UClass_UActivacionBarrera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreraSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BarreraSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivacionBarrera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivacionBarrera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivacionBarrera_Spawn, "Spawn" }, // 2576434039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivacionBarrera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActivacionBarrera.h" },
		{ "ModuleRelativePath", "ActivacionBarrera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivacionBarrera_Statics::NewProp_BarreraSpawn_MetaData[] = {
		{ "Category", "ActivacionBarrera" },
		{ "ModuleRelativePath", "ActivacionBarrera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivacionBarrera_Statics::NewProp_BarreraSpawn = { "BarreraSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivacionBarrera, BarreraSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActivacionBarrera_Statics::NewProp_BarreraSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivacionBarrera_Statics::NewProp_BarreraSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivacionBarrera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivacionBarrera_Statics::NewProp_BarreraSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivacionBarrera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivacionBarrera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivacionBarrera_Statics::ClassParams = {
		&UActivacionBarrera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActivacionBarrera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivacionBarrera_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivacionBarrera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivacionBarrera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivacionBarrera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivacionBarrera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivacionBarrera, 1510943796);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UActivacionBarrera>()
	{
		return UActivacionBarrera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivacionBarrera(Z_Construct_UClass_UActivacionBarrera, &UActivacionBarrera::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UActivacionBarrera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivacionBarrera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
