// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunnies/HungryBunniesGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHungryBunniesGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_AHungryBunniesGameModeBase();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_AHungryBunniesGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunnies();
// End Cross Module References
	void AHungryBunniesGameModeBase::StaticRegisterNativesAHungryBunniesGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHungryBunniesGameModeBase);
	UClass* Z_Construct_UClass_AHungryBunniesGameModeBase_NoRegister()
	{
		return AHungryBunniesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHungryBunniesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunnies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HungryBunniesGameModeBase.h" },
		{ "ModuleRelativePath", "HungryBunniesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHungryBunniesGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::ClassParams = {
		&AHungryBunniesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHungryBunniesGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHungryBunniesGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHungryBunniesGameModeBase.OuterSingleton, Z_Construct_UClass_AHungryBunniesGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHungryBunniesGameModeBase.OuterSingleton;
	}
	template<> HUNGRYBUNNIES_API UClass* StaticClass<AHungryBunniesGameModeBase>()
	{
		return AHungryBunniesGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHungryBunniesGameModeBase);
	AHungryBunniesGameModeBase::~AHungryBunniesGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_HungryBunniesGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_HungryBunniesGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHungryBunniesGameModeBase, AHungryBunniesGameModeBase::StaticClass, TEXT("AHungryBunniesGameModeBase"), &Z_Registration_Info_UClass_AHungryBunniesGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHungryBunniesGameModeBase), 1589016949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_HungryBunniesGameModeBase_h_1379073467(TEXT("/Script/HungryBunnies"),
		Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_HungryBunniesGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_HungryBunniesGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
