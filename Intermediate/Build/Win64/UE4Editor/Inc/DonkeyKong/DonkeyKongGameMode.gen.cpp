// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong/DonkeyKongGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKongGameMode() {}
// Cross Module References
	DONKEYKONG_API UClass* Z_Construct_UClass_ADonkeyKongGameMode_NoRegister();
	DONKEYKONG_API UClass* Z_Construct_UClass_ADonkeyKongGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong();
// End Cross Module References
	void ADonkeyKongGameMode::StaticRegisterNativesADonkeyKongGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKongGameMode_NoRegister()
	{
		return ADonkeyKongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKongGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKongGameMode.h" },
		{ "ModuleRelativePath", "DonkeyKongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKongGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKongGameMode_Statics::ClassParams = {
		&ADonkeyKongGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKongGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKongGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKongGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKongGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKongGameMode, 1971507930);
	template<> DONKEYKONG_API UClass* StaticClass<ADonkeyKongGameMode>()
	{
		return ADonkeyKongGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKongGameMode(Z_Construct_UClass_ADonkeyKongGameMode, &ADonkeyKongGameMode::StaticClass, TEXT("/Script/DonkeyKong"), TEXT("ADonkeyKongGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKongGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
