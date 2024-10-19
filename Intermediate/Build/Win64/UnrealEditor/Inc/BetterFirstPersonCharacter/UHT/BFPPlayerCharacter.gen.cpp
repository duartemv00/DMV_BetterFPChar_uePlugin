// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterFirstPersonCharacter/Public/Character/BFPPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBFPPlayerCharacter() {}

// Begin Cross Module References
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPCharacter();
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPPlayerCharacter();
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPPlayerCharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterFirstPersonCharacter();
// End Cross Module References

// Begin Class ABFPPlayerCharacter Function ChangeFocus
struct Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABFPPlayerCharacter, nullptr, "ChangeFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABFPPlayerCharacter::execChangeFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeFocus();
	P_NATIVE_END;
}
// End Class ABFPPlayerCharacter Function ChangeFocus

// Begin Class ABFPPlayerCharacter Function GetFirstPersonCameraComponent
struct Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics
{
	struct BFPPlayerCharacter_eventGetFirstPersonCameraComponent_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** GETTERS ***** //\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** GETTERS *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFPPlayerCharacter_eventGetFirstPersonCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABFPPlayerCharacter, nullptr, "GetFirstPersonCameraComponent", nullptr, nullptr, Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::BFPPlayerCharacter_eventGetFirstPersonCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::BFPPlayerCharacter_eventGetFirstPersonCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABFPPlayerCharacter::execGetFirstPersonCameraComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetFirstPersonCameraComponent();
	P_NATIVE_END;
}
// End Class ABFPPlayerCharacter Function GetFirstPersonCameraComponent

// Begin Class ABFPPlayerCharacter Function InitializeHeadBoobing
struct Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABFPPlayerCharacter, nullptr, "InitializeHeadBoobing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABFPPlayerCharacter::execInitializeHeadBoobing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeHeadBoobing();
	P_NATIVE_END;
}
// End Class ABFPPlayerCharacter Function InitializeHeadBoobing

// Begin Class ABFPPlayerCharacter
void ABFPPlayerCharacter::StaticRegisterNativesABFPPlayerCharacter()
{
	UClass* Class = ABFPPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeFocus", &ABFPPlayerCharacter::execChangeFocus },
		{ "GetFirstPersonCameraComponent", &ABFPPlayerCharacter::execGetFirstPersonCameraComponent },
		{ "InitializeHeadBoobing", &ABFPPlayerCharacter::execInitializeHeadBoobing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABFPPlayerCharacter);
UClass* Z_Construct_UClass_ABFPPlayerCharacter_NoRegister()
{
	return ABFPPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ABFPPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BFPPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChangeFocus_MetaData[] = {
		{ "Category", "Player features" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDLECameraShake_MetaData[] = {
		{ "Category", "Player features" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkCameraShake_MetaData[] = {
		{ "Category", "Player features" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintCameraShake_MetaData[] = {
		{ "Category", "Player features" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeadBobbing_MetaData[] = {
		{ "Category", "Player features" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First person camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Flashlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flashlight\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flashlight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightSpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Flashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BEGIN - Default Input Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BEGIN - Default Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Jump Input Action\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move Input Action\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Look Input Action\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BFPPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bChangeFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangeFocus;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IDLECameraShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WalkCameraShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SprintCameraShake;
	static void NewProp_bUseHeadBobbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeadBobbing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightSpotLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABFPPlayerCharacter_ChangeFocus, "ChangeFocus" }, // 2676425493
		{ &Z_Construct_UFunction_ABFPPlayerCharacter_GetFirstPersonCameraComponent, "GetFirstPersonCameraComponent" }, // 3922201572
		{ &Z_Construct_UFunction_ABFPPlayerCharacter_InitializeHeadBoobing, "InitializeHeadBoobing" }, // 3285260693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABFPPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bChangeFocus_SetBit(void* Obj)
{
	((ABFPPlayerCharacter*)Obj)->bChangeFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bChangeFocus = { "bChangeFocus", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABFPPlayerCharacter), &Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bChangeFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChangeFocus_MetaData), NewProp_bChangeFocus_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_IDLECameraShake = { "IDLECameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, IDLECameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDLECameraShake_MetaData), NewProp_IDLECameraShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_WalkCameraShake = { "WalkCameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, WalkCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkCameraShake_MetaData), NewProp_WalkCameraShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_SprintCameraShake = { "SprintCameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, SprintCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintCameraShake_MetaData), NewProp_SprintCameraShake_MetaData) };
void Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bUseHeadBobbing_SetBit(void* Obj)
{
	((ABFPPlayerCharacter*)Obj)->bUseHeadBobbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bUseHeadBobbing = { "bUseHeadBobbing", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABFPPlayerCharacter), &Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bUseHeadBobbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeadBobbing_MetaData), NewProp_bUseHeadBobbing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_FlashlightSpringArm = { "FlashlightSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, FlashlightSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightSpringArm_MetaData), NewProp_FlashlightSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_FlashlightSpotLight = { "FlashlightSpotLight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, FlashlightSpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightSpotLight_MetaData), NewProp_FlashlightSpotLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABFPPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bChangeFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_IDLECameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_WalkCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_SprintCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_bUseHeadBobbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_FlashlightSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_FlashlightSpotLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerCharacter_Statics::NewProp_SprintAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABFPPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABFPCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABFPPlayerCharacter_Statics::ClassParams = {
	&ABFPPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABFPPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABFPPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABFPPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ABFPPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABFPPlayerCharacter.OuterSingleton, Z_Construct_UClass_ABFPPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABFPPlayerCharacter.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<ABFPPlayerCharacter>()
{
	return ABFPPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABFPPlayerCharacter);
ABFPPlayerCharacter::~ABFPPlayerCharacter() {}
// End Class ABFPPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABFPPlayerCharacter, ABFPPlayerCharacter::StaticClass, TEXT("ABFPPlayerCharacter"), &Z_Registration_Info_UClass_ABFPPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABFPPlayerCharacter), 2145619159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_3635068486(TEXT("/Script/BetterFirstPersonCharacter"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Character_BFPPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
