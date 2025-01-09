// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Team3ShotInTheDarkPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATeam3ShotInTheDarkCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM3SHOTINTHEDARK_Team3ShotInTheDarkPickUpComponent_generated_h
#error "Team3ShotInTheDarkPickUpComponent.generated.h already included, missing '#pragma once' in Team3ShotInTheDarkPickUpComponent.h"
#endif
#define TEAM3SHOTINTHEDARK_Team3ShotInTheDarkPickUpComponent_generated_h

#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_12_DELEGATE \
TEAM3SHOTINTHEDARK_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ATeam3ShotInTheDarkCharacter* PickUpCharacter);


#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTeam3ShotInTheDarkPickUpComponent(); \
	friend struct Z_Construct_UClass_UTeam3ShotInTheDarkPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTeam3ShotInTheDarkPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Team3ShotInTheDark"), NO_API) \
	DECLARE_SERIALIZER(UTeam3ShotInTheDarkPickUpComponent)


#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTeam3ShotInTheDarkPickUpComponent(UTeam3ShotInTheDarkPickUpComponent&&); \
	UTeam3ShotInTheDarkPickUpComponent(const UTeam3ShotInTheDarkPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeam3ShotInTheDarkPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeam3ShotInTheDarkPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTeam3ShotInTheDarkPickUpComponent) \
	NO_API virtual ~UTeam3ShotInTheDarkPickUpComponent();


#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_14_PROLOG
#define FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM3SHOTINTHEDARK_API UClass* StaticClass<class UTeam3ShotInTheDarkPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Team3ShotInTheDark_Team3ShotInTheDark_Source_Team3ShotInTheDark_Team3ShotInTheDarkPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
