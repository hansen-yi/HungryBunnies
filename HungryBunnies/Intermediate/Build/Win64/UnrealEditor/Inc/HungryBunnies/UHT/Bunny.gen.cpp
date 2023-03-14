// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunnies/Bunny.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBunny() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_ABunny();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_ABunny_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunnies();
// End Cross Module References
	void ABunny::StaticRegisterNativesABunny()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABunny);
	UClass* Z_Construct_UClass_ABunny_NoRegister()
	{
		return ABunny::StaticClass();
	}
	struct Z_Construct_UClass_ABunny_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABunny_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunnies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABunny_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bunny.h" },
		{ "ModuleRelativePath", "Bunny.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABunny_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABunny>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABunny_Statics::ClassParams = {
		&ABunny::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABunny_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABunny_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABunny()
	{
		if (!Z_Registration_Info_UClass_ABunny.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABunny.OuterSingleton, Z_Construct_UClass_ABunny_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABunny.OuterSingleton;
	}
	template<> HUNGRYBUNNIES_API UClass* StaticClass<ABunny>()
	{
		return ABunny::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABunny);
	ABunny::~ABunny() {}
	struct Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Bunny_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Bunny_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABunny, ABunny::StaticClass, TEXT("ABunny"), &Z_Registration_Info_UClass_ABunny, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABunny), 3688000632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Bunny_h_3012689737(TEXT("/Script/HungryBunnies"),
		Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Bunny_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Bunny_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
