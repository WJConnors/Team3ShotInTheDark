// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team3ShotInTheDark/Team3ShotInTheDarkGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam3ShotInTheDarkGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TEAM3SHOTINTHEDARK_API UClass* Z_Construct_UClass_ATeam3ShotInTheDarkGameMode();
TEAM3SHOTINTHEDARK_API UClass* Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Team3ShotInTheDark();
// End Cross Module References

// Begin Class ATeam3ShotInTheDarkGameMode
void ATeam3ShotInTheDarkGameMode::StaticRegisterNativesATeam3ShotInTheDarkGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeam3ShotInTheDarkGameMode);
UClass* Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_NoRegister()
{
	return ATeam3ShotInTheDarkGameMode::StaticClass();
}
struct Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Team3ShotInTheDarkGameMode.h" },
		{ "ModuleRelativePath", "Team3ShotInTheDarkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeam3ShotInTheDarkGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Team3ShotInTheDark,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics::ClassParams = {
	&ATeam3ShotInTheDarkGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeam3ShotInTheDarkGameMode()
{
	if (!Z_Registration_Info_UClass_ATeam3ShotInTheDarkGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeam3ShotInTheDarkGameMode.OuterSingleton, Z_Construct_UClass_ATeam3ShotInTheDarkGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeam3ShotInTheDarkGameMode.OuterSingleton;
}
template<> TEAM3SHOTINTHEDARK_API UClass* StaticClass<ATeam3ShotInTheDarkGameMode>()
{
	return ATeam3ShotInTheDarkGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeam3ShotInTheDarkGameMode);
ATeam3ShotInTheDarkGameMode::~ATeam3ShotInTheDarkGameMode() {}
// End Class ATeam3ShotInTheDarkGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeam3ShotInTheDarkGameMode, ATeam3ShotInTheDarkGameMode::StaticClass, TEXT("ATeam3ShotInTheDarkGameMode"), &Z_Registration_Info_UClass_ATeam3ShotInTheDarkGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeam3ShotInTheDarkGameMode), 3490916335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkGameMode_h_2076424065(TEXT("/Script/Team3ShotInTheDark"),
	Z_CompiledInDeferFile_FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
