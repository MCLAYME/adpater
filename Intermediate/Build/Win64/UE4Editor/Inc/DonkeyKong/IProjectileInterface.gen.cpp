// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/IProjectileInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIProjectileInterface() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_UIProjectileInterface_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_UIProjectileInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
// End Cross Module References
	void UIProjectileInterface::StaticRegisterNativesUIProjectileInterface()
	{
	}
	UClass* Z_Construct_UClass_UIProjectileInterface_NoRegister()
	{
		return UIProjectileInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIProjectileInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIProjectileInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIProjectileInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IProjectileInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIProjectileInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIProjectileInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIProjectileInterface_Statics::ClassParams = {
		&UIProjectileInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIProjectileInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIProjectileInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIProjectileInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIProjectileInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIProjectileInterface, 456529932);
	template<> DONKEYKONG_API UClass* StaticClass<UIProjectileInterface>()
	{
		return UIProjectileInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIProjectileInterface(Z_Construct_UClass_UIProjectileInterface, &UIProjectileInterface::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("UIProjectileInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIProjectileInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
