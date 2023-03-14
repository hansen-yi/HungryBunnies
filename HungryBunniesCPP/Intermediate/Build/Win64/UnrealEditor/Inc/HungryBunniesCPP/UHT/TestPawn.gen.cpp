// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunniesCPP/TestPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	HUNGRYBUNNIESCPP_API UClass* Z_Construct_UClass_ATestPawn();
	HUNGRYBUNNIESCPP_API UClass* Z_Construct_UClass_ATestPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunniesCPP();
// End Cross Module References
	void ATestPawn::StaticRegisterNativesATestPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPawn);
	UClass* Z_Construct_UClass_ATestPawn_NoRegister()
	{
		return ATestPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunniesCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestPawn.h" },
		{ "ModuleRelativePath", "TestPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPawn_Statics::ClassParams = {
		&ATestPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPawn()
	{
		if (!Z_Registration_Info_UClass_ATestPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPawn.OuterSingleton, Z_Construct_UClass_ATestPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPawn.OuterSingleton;
	}
	template<> HUNGRYBUNNIESCPP_API UClass* StaticClass<ATestPawn>()
	{
		return ATestPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPawn);
	ATestPawn::~ATestPawn() {}
	struct Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_TestPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_TestPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPawn, ATestPawn::StaticClass, TEXT("ATestPawn"), &Z_Registration_Info_UClass_ATestPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPawn), 3795247342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_TestPawn_h_338558389(TEXT("/Script/HungryBunniesCPP"),
		Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_TestPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_TestPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
