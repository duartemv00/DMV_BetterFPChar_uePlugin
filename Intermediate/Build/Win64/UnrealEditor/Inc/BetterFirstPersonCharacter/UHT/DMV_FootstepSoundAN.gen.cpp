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
BETTERFIRSTPERSONCHARACTER_API UEnum* Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide();
BETTERFIRSTPERSONCHARACTER_API UEnum* Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_BetterFirstPersonCharacter();
// End Cross Module References

// Begin Enum EFootstepType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFootstepType;
static UEnum* EFootstepType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFootstepType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFootstepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType, (UObject*)Z_Construct_UPackage__Script_BetterFirstPersonCharacter(), TEXT("EFootstepType"));
	}
	return Z_Registration_Info_UEnum_EFootstepType.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UEnum* StaticEnum<EFootstepType>()
{
	return EFootstepType_StaticEnum();
}
struct Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouch.Name", "EFootstepType::Crouch" },
		{ "Jump.Name", "EFootstepType::Jump" },
		{ "Land.Name", "EFootstepType::Land" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
		{ "Sprint.Name", "EFootstepType::Sprint" },
		{ "WalkRun.Name", "EFootstepType::WalkRun" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFootstepType::WalkRun", (int64)EFootstepType::WalkRun },
		{ "EFootstepType::Sprint", (int64)EFootstepType::Sprint },
		{ "EFootstepType::Jump", (int64)EFootstepType::Jump },
		{ "EFootstepType::Land", (int64)EFootstepType::Land },
		{ "EFootstepType::Crouch", (int64)EFootstepType::Crouch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
	nullptr,
	"EFootstepType",
	"EFootstepType",
	Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType()
{
	if (!Z_Registration_Info_UEnum_EFootstepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFootstepType.InnerSingleton, Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFootstepType.InnerSingleton;
}
// End Enum EFootstepType

// Begin Enum EFootstepSide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFootstepSide;
static UEnum* EFootstepSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFootstepSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFootstepSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide, (UObject*)Z_Construct_UPackage__Script_BetterFirstPersonCharacter(), TEXT("EFootstepSide"));
	}
	return Z_Registration_Info_UEnum_EFootstepSide.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UEnum* StaticEnum<EFootstepSide>()
{
	return EFootstepSide_StaticEnum();
}
struct Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EFootstepSide::Left" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
		{ "Right.Name", "EFootstepSide::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFootstepSide::Left", (int64)EFootstepSide::Left },
		{ "EFootstepSide::Right", (int64)EFootstepSide::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
	nullptr,
	"EFootstepSide",
	"EFootstepSide",
	Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide()
{
	if (!Z_Registration_Info_UEnum_EFootstepSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFootstepSide.InnerSingleton, Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFootstepSide.InnerSingleton;
}
// End Enum EFootstepSide

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepType_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSide_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAttachPointName_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAttachPointName_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSoundsLibrary_MetaData[] = {
		{ "Category", "DMV_FootstepSoundAN" },
		{ "ModuleRelativePath", "Public/Animation/DMV_FootstepSoundAN.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepSide_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FootstepSide;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftAttachPointName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightAttachPointName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepSoundsLibrary_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FootstepSoundsLibrary_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FootstepSoundsLibrary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMV_FootstepSoundAN>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepType = { "FootstepType", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, FootstepType), Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepType_MetaData), NewProp_FootstepType_MetaData) }; // 1068771470
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSide = { "FootstepSide", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, FootstepSide), Z_Construct_UEnum_BetterFirstPersonCharacter_EFootstepSide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepSide_MetaData), NewProp_FootstepSide_MetaData) }; // 606944753
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_LeftAttachPointName = { "LeftAttachPointName", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, LeftAttachPointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAttachPointName_MetaData), NewProp_LeftAttachPointName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_RightAttachPointName = { "RightAttachPointName", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, RightAttachPointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAttachPointName_MetaData), NewProp_RightAttachPointName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSoundsLibrary_ValueProp = { "FootstepSoundsLibrary", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSoundsLibrary_Key_KeyProp = { "FootstepSoundsLibrary_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 161619406
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSoundsLibrary = { "FootstepSoundsLibrary", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMV_FootstepSoundAN, FootstepSoundsLibrary), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepSoundsLibrary_MetaData), NewProp_FootstepSoundsLibrary_MetaData) }; // 161619406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSide_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_LeftAttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_RightAttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSoundsLibrary_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSoundsLibrary_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::NewProp_FootstepSoundsLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMV_FootstepSoundAN_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFootstepType_StaticEnum, TEXT("EFootstepType"), &Z_Registration_Info_UEnum_EFootstepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1068771470U) },
		{ EFootstepSide_StaticEnum, TEXT("EFootstepSide"), &Z_Registration_Info_UEnum_EFootstepSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 606944753U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMV_FootstepSoundAN, UDMV_FootstepSoundAN::StaticClass, TEXT("UDMV_FootstepSoundAN"), &Z_Registration_Info_UClass_UDMV_FootstepSoundAN, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMV_FootstepSoundAN), 1473792912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_2152254817(TEXT("/Script/BetterFirstPersonCharacter"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_Animation_DMV_FootstepSoundAN_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
