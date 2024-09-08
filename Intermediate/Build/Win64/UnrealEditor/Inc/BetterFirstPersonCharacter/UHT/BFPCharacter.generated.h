// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BFPCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerState : uint8;
#ifdef BETTERFIRSTPERSONCHARACTER_BFPCharacter_generated_h
#error "BFPCharacter.generated.h already included, missing '#pragma once' in BFPCharacter.h"
#endif
#define BETTERFIRSTPERSONCHARACTER_BFPCharacter_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentPlayerState);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABFPCharacter(); \
	friend struct Z_Construct_UClass_ABFPCharacter_Statics; \
public: \
	DECLARE_CLASS(ABFPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterFirstPersonCharacter"), NO_API) \
	DECLARE_SERIALIZER(ABFPCharacter)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABFPCharacter(ABFPCharacter&&); \
	ABFPCharacter(const ABFPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABFPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABFPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABFPCharacter) \
	NO_API virtual ~ABFPCharacter();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_29_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<class ABFPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::Idle) \
	op(EPlayerState::Walk) \
	op(EPlayerState::Sprint) 

enum class EPlayerState : uint8;
template<> struct TIsUEnumClass<EPlayerState> { enum { Value = true }; };
template<> BETTERFIRSTPERSONCHARACTER_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
