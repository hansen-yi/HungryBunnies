// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunnies/Farmer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_AFarmer();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_AFarmer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunnies();
// End Cross Module References
	void AFarmer::StaticRegisterNativesAFarmer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmer);
	UClass* Z_Construct_UClass_AFarmer_NoRegister()
	{
		return AFarmer::StaticClass();
	}
	struct Z_Construct_UClass_AFarmer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFarmer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunnies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Farmer.h" },
		{ "ModuleRelativePath", "Farmer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFarmer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmer_Statics::ClassParams = {
		&AFarmer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFarmer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFarmer()
	{
		if (!Z_Registration_Info_UClass_AFarmer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmer.OuterSingleton, Z_Construct_UClass_AFarmer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFarmer.OuterSingleton;
	}
	template<> HUNGRYBUNNIES_API UClass* StaticClass<AFarmer>()
	{
		return AFarmer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmer);
	AFarmer::~AFarmer() {}
	struct Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Farmer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Farmer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFarmer, AFarmer::StaticClass, TEXT("AFarmer"), &Z_Registration_Info_UClass_AFarmer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmer), 3623272119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Farmer_h_2232637591(TEXT("/Script/HungryBunnies"),
		Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Farmer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Farmer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
