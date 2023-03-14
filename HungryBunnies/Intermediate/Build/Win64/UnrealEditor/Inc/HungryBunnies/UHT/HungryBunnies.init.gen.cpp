// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHungryBunnies_init() {}
	HUNGRYBUNNIES_API UFunction* Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HungryBunnies;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HungryBunnies()
	{
		if (!Z_Registration_Info_UPackage__Script_HungryBunnies.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HungryBunnies_Delegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HungryBunnies",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x961C2BD9,
				0x18C58346,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HungryBunnies.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HungryBunnies.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HungryBunnies(Z_Construct_UPackage__Script_HungryBunnies, TEXT("/Script/HungryBunnies"), Z_Registration_Info_UPackage__Script_HungryBunnies, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x961C2BD9, 0x18C58346));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
