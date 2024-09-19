// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterFirstPersonCharacter/Public/Player/BFPPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBFPPlayerController() {}

// Begin Cross Module References
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPPlayerController();
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_ABFPPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterFirstPersonCharacter();
// End Cross Module References

// Begin Class ABFPPlayerController
void ABFPPlayerController::StaticRegisterNativesABFPPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABFPPlayerController);
UClass* Z_Construct_UClass_ABFPPlayerController_NoRegister()
{
	return ABFPPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABFPPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BFPPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/BFPPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "Public/Player/BFPPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABFPPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABFPPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFPPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABFPPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABFPPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABFPPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABFPPlayerController_Statics::ClassParams = {
	&ABFPPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABFPPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABFPPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABFPPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABFPPlayerController()
{
	if (!Z_Registration_Info_UClass_ABFPPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABFPPlayerController.OuterSingleton, Z_Construct_UClass_ABFPPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABFPPlayerController.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<ABFPPlayerController>()
{
	return ABFPPlayerController::StaticClass();
}
ABFPPlayerController::ABFPPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABFPPlayerController);
ABFPPlayerController::~ABFPPlayerController() {}
// End Class ABFPPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Player_BFPPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABFPPlayerController, ABFPPlayerController::StaticClass, TEXT("ABFPPlayerController"), &Z_Registration_Info_UClass_ABFPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABFPPlayerController), 2417451120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Player_BFPPlayerController_h_1335243072(TEXT("/Script/BetterFirstPersonCharacter"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Player_BFPPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Player_BFPPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
