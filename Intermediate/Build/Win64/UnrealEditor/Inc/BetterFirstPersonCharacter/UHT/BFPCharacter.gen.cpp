// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterFirstPersonCharacter/Public/Character/BFPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBFPCharacter() {}

// Begin Cross Module References
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPCharacter();
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPCharacter_NoRegister();
BETTERFIRSTPERSONCHARACTER_API UEnum* Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BetterFirstPersonCharacter();
// End Cross Module References

// Begin Enum EPlayerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
static UEnum* EPlayerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState, (UObject*)Z_Construct_UPackage__Script_BetterFirstPersonCharacter(), TEXT("EPlayerState"));
	}
	return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UEnum* StaticEnum<EPlayerState>()
{
	return EPlayerState_StaticEnum();
}
struct Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Idle.Name", "EPlayerState::Idle" },
		{ "ModuleRelativePath", "Public/Character/BFPCharacter.h" },
		{ "Sprint.Name", "EPlayerState::Sprint" },
		{ "Walk.Name", "EPlayerState::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerState::Idle", (int64)EPlayerState::Idle },
		{ "EPlayerState::Walk", (int64)EPlayerState::Walk },
		{ "EPlayerState::Sprint", (int64)EPlayerState::Sprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
	nullptr,
	"EPlayerState",
	"EPlayerState",
	Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
}
// End Enum EPlayerState

// Begin Class ABFPCharacter Function GetCurrentPlayerState
struct Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics
{
	struct BFPCharacter_eventGetCurrentPlayerState_Parms
	{
		EPlayerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** GETTERS ***** //\n// Returns current player state\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/BFPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** GETTERS *****\nReturns current player state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFPCharacter_eventGetCurrentPlayerState_Parms, ReturnValue), Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState, METADATA_PARAMS(0, nullptr) }; // 1871257776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABFPCharacter, nullptr, "GetCurrentPlayerState", nullptr, nullptr, Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::BFPCharacter_eventGetCurrentPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::BFPCharacter_eventGetCurrentPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABFPCharacter::execGetCurrentPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPlayerState*)Z_Param__Result=P_THIS->GetCurrentPlayerState();
	P_NATIVE_END;
}
// End Class ABFPCharacter Function GetCurrentPlayerState

// Begin Class ABFPCharacter
void ABFPCharacter::StaticRegisterNativesABFPCharacter()
{
	UClass* Class = ABFPCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentPlayerState", &ABFPCharacter::execGetCurrentPlayerState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABFPCharacter);
UClass* Z_Construct_UClass_ABFPCharacter_NoRegister()
{
	return ABFPCharacter::StaticClass();
}
struct Z_Construct_UClass_ABFPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BFPCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/BFPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BFPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/BFPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/BFPCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABFPCharacter_GetCurrentPlayerState, "GetCurrentPlayerState" }, // 1155612184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABFPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABFPCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABFPCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABFPCharacter_Statics::NewProp_CurrentPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABFPCharacter_Statics::NewProp_CurrentPlayerState = { "CurrentPlayerState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPCharacter, CurrentPlayerState), Z_Construct_UEnum_BetterFirstPersonCharacter_EPlayerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlayerState_MetaData), NewProp_CurrentPlayerState_MetaData) }; // 1871257776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABFPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPCharacter_Statics::NewProp_CurrentPlayerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPCharacter_Statics::NewProp_CurrentPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABFPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABFPCharacter_Statics::ClassParams = {
	&ABFPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABFPCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABFPCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABFPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABFPCharacter()
{
	if (!Z_Registration_Info_UClass_ABFPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABFPCharacter.OuterSingleton, Z_Construct_UClass_ABFPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABFPCharacter.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<ABFPCharacter>()
{
	return ABFPCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABFPCharacter);
ABFPCharacter::~ABFPCharacter() {}
// End Class ABFPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1871257776U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABFPCharacter, ABFPCharacter::StaticClass, TEXT("ABFPCharacter"), &Z_Registration_Info_UClass_ABFPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABFPCharacter), 1121785271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_3349868484(TEXT("/Script/BetterFirstPersonCharacter"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_BetterFirstPersonCharacter_Source_BetterFirstPersonCharacter_Public_Character_BFPCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
