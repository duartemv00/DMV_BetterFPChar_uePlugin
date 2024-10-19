// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BetterFirstPersonCharacter/Public/FlashlightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlightComponent() {}

// Begin Cross Module References
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_UFlashlightComponent();
BETTERFIRSTPERSONCHARACTER_API UClass* Z_Construct_UClass_UFlashlightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterFirstPersonCharacter();
// End Cross Module References

// Begin Class UFlashlightComponent Function AddSpotLight
struct Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics
{
	struct FlashlightComponent_eventAddSpotLight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlashlightComponent_eventAddSpotLight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlashlightComponent_eventAddSpotLight_Parms), &Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightComponent, nullptr, "AddSpotLight", nullptr, nullptr, Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::FlashlightComponent_eventAddSpotLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::FlashlightComponent_eventAddSpotLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlashlightComponent_AddSpotLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlashlightComponent_AddSpotLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlashlightComponent::execAddSpotLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddSpotLight();
	P_NATIVE_END;
}
// End Class UFlashlightComponent Function AddSpotLight

// Begin Class UFlashlightComponent Function AddSpringArm
struct Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics
{
	struct FlashlightComponent_eventAddSpringArm_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlashlightComponent_eventAddSpringArm_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlashlightComponent_eventAddSpringArm_Parms), &Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightComponent, nullptr, "AddSpringArm", nullptr, nullptr, Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::FlashlightComponent_eventAddSpringArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::FlashlightComponent_eventAddSpringArm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlashlightComponent_AddSpringArm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlashlightComponent_AddSpringArm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlashlightComponent::execAddSpringArm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddSpringArm();
	P_NATIVE_END;
}
// End Class UFlashlightComponent Function AddSpringArm

// Begin Class UFlashlightComponent Function ConstructFlighlight
struct Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics
{
	struct FlashlightComponent_eventConstructFlighlight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlashlightComponent_eventConstructFlighlight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlashlightComponent_eventConstructFlighlight_Parms), &Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightComponent, nullptr, "ConstructFlighlight", nullptr, nullptr, Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::FlashlightComponent_eventConstructFlighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::FlashlightComponent_eventConstructFlighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlashlightComponent::execConstructFlighlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConstructFlighlight();
	P_NATIVE_END;
}
// End Class UFlashlightComponent Function ConstructFlighlight

// Begin Class UFlashlightComponent Function ToggleFlashlight
struct Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightComponent, nullptr, "ToggleFlashlight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlashlightComponent::execToggleFlashlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleFlashlight();
	P_NATIVE_END;
}
// End Class UFlashlightComponent Function ToggleFlashlight

// Begin Class UFlashlightComponent
void UFlashlightComponent::StaticRegisterNativesUFlashlightComponent()
{
	UClass* Class = UFlashlightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSpotLight", &UFlashlightComponent::execAddSpotLight },
		{ "AddSpringArm", &UFlashlightComponent::execAddSpringArm },
		{ "ConstructFlighlight", &UFlashlightComponent::execConstructFlighlight },
		{ "ToggleFlashlight", &UFlashlightComponent::execToggleFlashlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlashlightComponent);
UClass* Z_Construct_UClass_UFlashlightComponent_NoRegister()
{
	return UFlashlightComponent::StaticClass();
}
struct Z_Construct_UClass_UFlashlightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FlashlightComponent.h" },
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlashLightOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlashlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static void NewProp_bFlashLightOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlashLightOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlashlightComponent_AddSpotLight, "AddSpotLight" }, // 2149848495
		{ &Z_Construct_UFunction_UFlashlightComponent_AddSpringArm, "AddSpringArm" }, // 1337470412
		{ &Z_Construct_UFunction_UFlashlightComponent_ConstructFlighlight, "ConstructFlighlight" }, // 311776669
		{ &Z_Construct_UFunction_UFlashlightComponent_ToggleFlashlight, "ToggleFlashlight" }, // 1743393493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashlightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlashlightComponent, SpringArm), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlashlightComponent, SpotLight), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
void Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_bFlashLightOn_SetBit(void* Obj)
{
	((UFlashlightComponent*)Obj)->bFlashLightOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_bFlashLightOn = { "bFlashLightOn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlashlightComponent), &Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_bFlashLightOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlashLightOn_MetaData), NewProp_bFlashLightOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashlightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_SpotLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightComponent_Statics::NewProp_bFlashLightOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlashlightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterFirstPersonCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlashlightComponent_Statics::ClassParams = {
	&UFlashlightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlashlightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlashlightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlashlightComponent()
{
	if (!Z_Registration_Info_UClass_UFlashlightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlashlightComponent.OuterSingleton, Z_Construct_UClass_UFlashlightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlashlightComponent.OuterSingleton;
}
template<> BETTERFIRSTPERSONCHARACTER_API UClass* StaticClass<UFlashlightComponent>()
{
	return UFlashlightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashlightComponent);
UFlashlightComponent::~UFlashlightComponent() {}
// End Class UFlashlightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_FlashlightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlashlightComponent, UFlashlightComponent::StaticClass, TEXT("UFlashlightComponent"), &Z_Registration_Info_UClass_UFlashlightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlashlightComponent), 412181289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_FlashlightComponent_h_3264450243(TEXT("/Script/BetterFirstPersonCharacter"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_FlashlightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_FPTemplate_Plugins_DMV_BetterFPChar_ue5Plugin_Source_BetterFirstPersonCharacter_Public_FlashlightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
