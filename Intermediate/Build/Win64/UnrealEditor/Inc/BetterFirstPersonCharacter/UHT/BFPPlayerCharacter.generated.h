// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BFPPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
#ifdef BETTERFIRSTPERSONCHARACTER_BFPPlayerCharacter_generated_h
#error "BFPPlayerCharacter.generated.h already included, missing '#pragma once' in BFPPlayerCharacter.h"
#endif
#define BETTERFIRSTPERSONCHARACTER_BFPPlayerCharacter_generated_h

#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeHeadBoobing); \
	DECLARE_FUNCTION(execChangeFocus); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent);


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABFPPlayerCharacter(); \
	friend struct Z_Construct_UClass_ABFPPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ABFPPlayerCharacter, ABFPCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterFirstPersonCharacter"), NO_API) \
	DECLARE_SERIALIZER(ABFPPlayerCharacter)


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABFPPlayerCharacter(ABFPPlayerCharacter&&); \
	ABFPPlayerCharacter(const ABFPPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABFPPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABFPPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABFPPlayerCharacter) \
	NO_API virtual ~ABFPPlayerCharacter();


#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_9_PROLOG
#define FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<class ABFPPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
