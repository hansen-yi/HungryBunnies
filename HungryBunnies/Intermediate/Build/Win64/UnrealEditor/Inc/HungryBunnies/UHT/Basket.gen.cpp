// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunnies/Basket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_ABasket();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_ABasket_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunnies();
// End Cross Module References
	void ABasket::StaticRegisterNativesABasket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasket);
	UClass* Z_Construct_UClass_ABasket_NoRegister()
	{
		return ABasket::StaticClass();
	}
	struct Z_Construct_UClass_ABasket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunnies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasket_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Basket.h" },
		{ "ModuleRelativePath", "Basket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasket_Statics::ClassParams = {
		&ABasket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABasket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasket()
	{
		if (!Z_Registration_Info_UClass_ABasket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasket.OuterSingleton, Z_Construct_UClass_ABasket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasket.OuterSingleton;
	}
	template<> HUNGRYBUNNIES_API UClass* StaticClass<ABasket>()
	{
		return ABasket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasket);
	ABasket::~ABasket() {}
	struct Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Basket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Basket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasket, ABasket::StaticClass, TEXT("ABasket"), &Z_Registration_Info_UClass_ABasket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasket), 992628903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Basket_h_3092322221(TEXT("/Script/HungryBunnies"),
		Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Basket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HungryBunnies_Source_HungryBunnies_Basket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
