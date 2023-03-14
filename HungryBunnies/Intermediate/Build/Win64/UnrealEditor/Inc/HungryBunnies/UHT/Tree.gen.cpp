// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunnies/Tree.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_ATree();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_ATree_NoRegister();
	HUNGRYBUNNIES_API UFunction* Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HungryBunnies();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HungryBunnies, nullptr, "Delegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATree::execonHit)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ATree::StaticRegisterNativesATree()
	{
		UClass* Class = ATree::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onHit", &ATree::execonHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATree_onHit_Statics
	{
		struct Tree_eventonHit_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATree_onHit_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tree_eventonHit_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATree_onHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tree_eventonHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATree_onHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tree_eventonHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATree_onHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATree_onHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tree_eventonHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATree_onHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATree_onHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATree_onHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATree_onHit_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATree_onHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATree_onHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATree_onHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATree_onHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATree_onHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATree, nullptr, "onHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATree_onHit_Statics::Tree_eventonHit_Parms), Z_Construct_UFunction_ATree_onHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATree_onHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATree_onHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATree_onHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATree_onHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATree_onHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATree);
	UClass* Z_Construct_UClass_ATree_NoRegister()
	{
		return ATree::StaticClass();
	}
	struct Z_Construct_UClass_ATree_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_HitDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunnies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATree_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATree_onHit, "onHit" }, // 3119192491
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tree.h" },
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::NewProp_HitDelegate_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_ATree_Statics::NewProp_HitDelegate = { "HitDelegate", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATree, HitDelegate), Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::NewProp_HitDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::NewProp_HitDelegate_MetaData)) }; // 2530630400
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATree_Statics::NewProp_HitDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATree_Statics::ClassParams = {
		&ATree::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATree()
	{
		if (!Z_Registration_Info_UClass_ATree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATree.OuterSingleton, Z_Construct_UClass_ATree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATree.OuterSingleton;
	}
	template<> HUNGRYBUNNIES_API UClass* StaticClass<ATree>()
	{
		return ATree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATree);
	ATree::~ATree() {}
	struct Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Tree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Tree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATree, ATree::StaticClass, TEXT("ATree"), &Z_Registration_Info_UClass_ATree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATree), 863653781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Tree_h_3376859204(TEXT("/Script/HungryBunnies"),
		Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Tree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Tree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
