// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunniesCPP/HungryBunniesCPPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHungryBunniesCPPGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HUNGRYBUNNIESCPP_API UClass* Z_Construct_UClass_AHungryBunniesCPPGameModeBase();
	HUNGRYBUNNIESCPP_API UClass* Z_Construct_UClass_AHungryBunniesCPPGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunniesCPP();
// End Cross Module References
	void AHungryBunniesCPPGameModeBase::StaticRegisterNativesAHungryBunniesCPPGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHungryBunniesCPPGameModeBase);
	UClass* Z_Construct_UClass_AHungryBunniesCPPGameModeBase_NoRegister()
	{
		return AHungryBunniesCPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunniesCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HungryBunniesCPPGameModeBase.h" },
		{ "ModuleRelativePath", "HungryBunniesCPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHungryBunniesCPPGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::ClassParams = {
		&AHungryBunniesCPPGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHungryBunniesCPPGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHungryBunniesCPPGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHungryBunniesCPPGameModeBase.OuterSingleton, Z_Construct_UClass_AHungryBunniesCPPGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHungryBunniesCPPGameModeBase.OuterSingleton;
	}
	template<> HUNGRYBUNNIESCPP_API UClass* StaticClass<AHungryBunniesCPPGameModeBase>()
	{
		return AHungryBunniesCPPGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHungryBunniesCPPGameModeBase);
	AHungryBunniesCPPGameModeBase::~AHungryBunniesCPPGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_HungryBunniesCPPGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_HungryBunniesCPPGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHungryBunniesCPPGameModeBase, AHungryBunniesCPPGameModeBase::StaticClass, TEXT("AHungryBunniesCPPGameModeBase"), &Z_Registration_Info_UClass_AHungryBunniesCPPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHungryBunniesCPPGameModeBase), 2867244496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_HungryBunniesCPPGameModeBase_h_720857921(TEXT("/Script/HungryBunniesCPP"),
		Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_HungryBunniesCPPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HungryBunniesCPP_Source_HungryBunniesCPP_HungryBunniesCPPGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
