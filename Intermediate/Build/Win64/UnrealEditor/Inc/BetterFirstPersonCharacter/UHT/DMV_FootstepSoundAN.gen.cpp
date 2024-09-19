// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterFirstPersonCharacter/Public/Animation/DMV_FootstepSoundAN.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMV_FootstepSoundAN() {}

// Begin Cross Module References
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_UDMV_FootstepSoundAN();
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_UDMV_FootstepSoundAN_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_BetterFirstPersonCharacter();
// End Cross Module References

// Begin Class UDMV_FootstepSoundAN
void UDMV_FootstepSoundAN::StaticRegisterNativesUDMV_FootstepSoundAN()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMV_FootstepSoundAN);
UClass* Z_Construct_UClass_UDMV_FootstepSoundAN_NoRegister()
{
	return UDMV_FootstepSoundAN::StaticClass();
}
struct Z_Construct_UClass_UDMV_FootstepSoundAN_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/DMV_FootstepSoundAN.h" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMV_FootstepSoundAN>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::ClassParams = {
	&UDMV_FootstepSoundAN::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMV_FootstepSoundAN()
{
	if (!Z_Registration_Info_UClass_UDMV_FootstepSoundAN.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMV_FootstepSoundAN.OuterSingleton, Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMV_FootstepSoundAN.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<UDMV_FootstepSoundAN>()
{
	return UDMV_FootstepSoundAN::StaticClass();
}
UDMV_FootstepSoundAN::UDMV_FootstepSoundAN(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMV_FootstepSoundAN);
UDMV_FootstepSoundAN::~UDMV_FootstepSoundAN() {}
// End Class UDMV_FootstepSoundAN

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMV_FootstepSoundAN, UDMV_FootstepSoundAN::StaticClass, TEXT("UDMV_FootstepSoundAN"), &Z_Registration_Info_UClass_UDMV_FootstepSoundAN, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMV_FootstepSoundAN), 2244439655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_2540883676(TEXT("/Script/BetterFirstPersonCharacter"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
