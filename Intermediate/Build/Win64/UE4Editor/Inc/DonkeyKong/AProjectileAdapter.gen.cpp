// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/AProjectileAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAProjectileAdapter() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_AAProjectileAdapter_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_AAProjectileAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AAProjectileAdapter::StaticRegisterNativesAAProjectileAdapter()
	{
	}
	UClass* Z_Construct_UClass_AAProjectileAdapter_NoRegister()
	{
		return AAProjectileAdapter::StaticClass();
	}
	struct Z_Construct_UClass_AAProjectileAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrappedProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrappedProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAProjectileAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAProjectileAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AProjectileAdapter.h" },
		{ "ModuleRelativePath", "AProjectileAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAProjectileAdapter_Statics::NewProp_WrappedProjectile_MetaData[] = {
		{ "ModuleRelativePath", "AProjectileAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAProjectileAdapter_Statics::NewProp_WrappedProjectile = { "WrappedProjectile", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAProjectileAdapter, WrappedProjectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAProjectileAdapter_Statics::NewProp_WrappedProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileAdapter_Statics::NewProp_WrappedProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAProjectileAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAProjectileAdapter_Statics::NewProp_WrappedProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAProjectileAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAProjectileAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAProjectileAdapter_Statics::ClassParams = {
		&AAProjectileAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAProjectileAdapter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileAdapter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAProjectileAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAProjectileAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAProjectileAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAProjectileAdapter, 1233098065);
	template<> DONKEYKONG_API UClass* StaticClass<AAProjectileAdapter>()
	{
		return AAProjectileAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAProjectileAdapter(Z_Construct_UClass_AAProjectileAdapter, &AAProjectileAdapter::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("AAProjectileAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAProjectileAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
