// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam3ShotInTheDark_init() {}
	TEAM3SHOTINTHEDARK_API UFunction* Z_Construct_UDelegateFunction_Team3ShotInTheDark_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Team3ShotInTheDark;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Team3ShotInTheDark()
	{
		if (!Z_Registration_Info_UPackage__Script_Team3ShotInTheDark.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Team3ShotInTheDark_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Team3ShotInTheDark",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAFAFFF02,
				0xBA2AFD68,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Team3ShotInTheDark.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Team3ShotInTheDark.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Team3ShotInTheDark(Z_Construct_UPackage__Script_Team3ShotInTheDark, TEXT("/Script/Team3ShotInTheDark"), Z_Registration_Info_UPackage__Script_Team3ShotInTheDark, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAFAFFF02, 0xBA2AFD68));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
