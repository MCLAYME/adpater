// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_IProjectileInterface_generated_h
#error "IProjectileInterface.generated.h already included, missing '#pragma once' in IProjectileInterface.h"
#endif
#define DONKEYKONG_IProjectileInterface_generated_h

#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_SPARSE_DATA
#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_RPC_WRAPPERS
#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_API UIProjectileInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIProjectileInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_API, UIProjectileInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIProjectileInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_API UIProjectileInterface(UIProjectileInterface&&); \
	DONKEYKONG_API UIProjectileInterface(const UIProjectileInterface&); \
public:


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_API UIProjectileInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_API UIProjectileInterface(UIProjectileInterface&&); \
	DONKEYKONG_API UIProjectileInterface(const UIProjectileInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_API, UIProjectileInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIProjectileInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIProjectileInterface)


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIProjectileInterface(); \
	friend struct Z_Construct_UClass_UIProjectileInterface_Statics; \
public: \
	DECLARE_CLASS(UIProjectileInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonkeyKong"), DONKEYKONG_API) \
	DECLARE_SERIALIZER(UIProjectileInterface)


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIProjectileInterface() {} \
public: \
	typedef UIProjectileInterface UClassType; \
	typedef IIProjectileInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIProjectileInterface() {} \
public: \
	typedef UIProjectileInterface UClassType; \
	typedef IIProjectileInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_10_PROLOG
#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_RPC_WRAPPERS \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_SPARSE_DATA \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_Source_DonkeyKong_IProjectileInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_API UClass* StaticClass<class UIProjectileInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_Source_DonkeyKong_IProjectileInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
