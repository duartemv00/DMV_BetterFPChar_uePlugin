// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/DMV_FootstepSoundAN.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BETTERFIRSTPERSONCHARACTER_DMV_FootstepSoundAN_generated_h
#error "DMV_FootstepSoundAN.generated.h already included, missing '#pragma once' in DMV_FootstepSoundAN.h"
#endif
#define BETTERFIRSTPERSONCHARACTER_DMV_FootstepSoundAN_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMV_FootstepSoundAN(); \
	friend struct Z_Construct_UClass_UDMV_FootstepSoundAN_Statics; \
public: \
	DECLARE_CLASS(UDMV_FootstepSoundAN, UAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterFirstPersonCharacter"), NO_API) \
	DECLARE_SERIALIZER(UDMV_FootstepSoundAN)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMV_FootstepSoundAN(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMV_FootstepSoundAN(UDMV_FootstepSoundAN&&); \
	UDMV_FootstepSoundAN(const UDMV_FootstepSoundAN&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMV_FootstepSoundAN); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMV_FootstepSoundAN); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMV_FootstepSoundAN) \
	NO_API virtual ~UDMV_FootstepSoundAN();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_29_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<class UDMV_FootstepSoundAN>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h


#define FOREACH_ENUM_EFOOTSTEPTYPE(op) \
	op(EFootstepType::WalkRun) \
	op(EFootstepType::Sprint) \
	op(EFootstepType::Jump) \
	op(EFootstepType::Land) \
	op(EFootstepType::Crouch) 

enum class EFootstepType : uint8;
template<> struct TIsUEnumClass<EFootstepType> { enum { Value = true }; };
template<> BETTERFIRSTPERSONCHARACTER_API UEnum* StaticEnum<EFootstepType>();

#define FOREACH_ENUM_EFOOTSTEPSIDE(op) \
	op(EFootstepSide::Left) \
	op(EFootstepSide::Right) 

enum class EFootstepSide : uint8;
template<> struct TIsUEnumClass<EFootstepSide> { enum { Value = true }; };
template<> BETTERFIRSTPERSONCHARACTER_API UEnum* StaticEnum<EFootstepSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
