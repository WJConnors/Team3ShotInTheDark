// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Team3ShotInTheDarkProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM3SHOTINTHEDARK_Team3ShotInTheDarkProjectile_generated_h
#error "Team3ShotInTheDarkProjectile.generated.h already included, missing '#pragma once' in Team3ShotInTheDarkProjectile.h"
#endif
#define TEAM3SHOTINTHEDARK_Team3ShotInTheDarkProjectile_generated_h

#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeam3ShotInTheDarkProjectile(); \
	friend struct Z_Construct_UClass_ATeam3ShotInTheDarkProjectile_Statics; \
public: \
	DECLARE_CLASS(ATeam3ShotInTheDarkProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team3ShotInTheDark"), NO_API) \
	DECLARE_SERIALIZER(ATeam3ShotInTheDarkProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATeam3ShotInTheDarkProjectile(ATeam3ShotInTheDarkProjectile&&); \
	ATeam3ShotInTheDarkProjectile(const ATeam3ShotInTheDarkProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeam3ShotInTheDarkProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeam3ShotInTheDarkProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeam3ShotInTheDarkProjectile) \
	NO_API virtual ~ATeam3ShotInTheDarkProjectile();


#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_12_PROLOG
#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM3SHOTINTHEDARK_API UClass* StaticClass<class ATeam3ShotInTheDarkProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
