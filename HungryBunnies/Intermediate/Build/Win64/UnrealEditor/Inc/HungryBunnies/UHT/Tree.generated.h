// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HUNGRYBUNNIES_Tree_generated_h
#error "Tree.generated.h already included, missing '#pragma once' in Tree.h"
#endif
#define HUNGRYBUNNIES_Tree_generated_h

#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_SPARSE_DATA
#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_RPC_WRAPPERS
#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_ACCESSORS
#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HungryBunnies"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HungryBunnies"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public: \
	NO_API virtual ~ATree();


#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATree) \
	NO_API virtual ~ATree();


#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_9_PROLOG
#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_SPARSE_DATA \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_RPC_WRAPPERS \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_ACCESSORS \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_INCLASS \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_SPARSE_DATA \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_ACCESSORS \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_INCLASS_NO_PURE_DECLS \
	FID_HungryBunnies_Source_HungryBunnies_Tree_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HUNGRYBUNNIES_API UClass* StaticClass<class ATree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HungryBunnies_Source_HungryBunnies_Tree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
