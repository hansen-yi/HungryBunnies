// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HungryBunnies/Global.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_AGlobal();
	HUNGRYBUNNIES_API UClass* Z_Construct_UClass_AGlobal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HungryBunnies();
// End Cross Module References
	DEFINE_FUNCTION(AGlobal::execincrementApples)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->incrementApples();
		P_NATIVE_END;
	}
	void AGlobal::StaticRegisterNativesAGlobal()
	{
		UClass* Class = AGlobal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "incrementApples", &AGlobal::execincrementApples },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGlobal_incrementApples_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGlobal_incrementApples_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlobal_incrementApples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlobal, nullptr, "incrementApples", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGlobal_incrementApples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobal_incrementApples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGlobal_incrementApples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGlobal_incrementApples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlobal);
	UClass* Z_Construct_UClass_AGlobal_NoRegister()
	{
		return AGlobal::StaticClass();
	}
	struct Z_Construct_UClass_AGlobal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentApples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentApples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasketApples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BasketApples;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlobal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HungryBunnies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGlobal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlobal_incrementApples, "incrementApples" }, // 487332322
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global.h" },
		{ "ModuleRelativePath", "Global.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobal_Statics::NewProp_CurrentApples_MetaData[] = {
		{ "Category", "Global" },
		{ "ModuleRelativePath", "Global.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobal_Statics::NewProp_CurrentApples = { "CurrentApples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlobal, CurrentApples), METADATA_PARAMS(Z_Construct_UClass_AGlobal_Statics::NewProp_CurrentApples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::NewProp_CurrentApples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobal_Statics::NewProp_BasketApples_MetaData[] = {
		{ "Category", "Global" },
		{ "ModuleRelativePath", "Global.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobal_Statics::NewProp_BasketApples = { "BasketApples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGlobal, BasketApples), METADATA_PARAMS(Z_Construct_UClass_AGlobal_Statics::NewProp_BasketApples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::NewProp_BasketApples_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobal_Statics::NewProp_CurrentApples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobal_Statics::NewProp_BasketApples,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlobal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobal_Statics::ClassParams = {
		&AGlobal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGlobal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlobal()
	{
		if (!Z_Registration_Info_UClass_AGlobal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobal.OuterSingleton, Z_Construct_UClass_AGlobal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGlobal.OuterSingleton;
	}
	template<> HUNGRYBUNNIES_API UClass* StaticClass<AGlobal>()
	{
		return AGlobal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobal);
	AGlobal::~AGlobal() {}
	struct Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Global_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Global_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGlobal, AGlobal::StaticClass, TEXT("AGlobal"), &Z_Registration_Info_UClass_AGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobal), 3729448870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Global_h_169404027(TEXT("/Script/HungryBunnies"),
		Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Global_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_vivit_Repos_CIS_568_hungryBunnies_HungryBunnies_Source_HungryBunnies_Global_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
