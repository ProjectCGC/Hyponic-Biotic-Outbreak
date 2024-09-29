// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerceptionExtension/Public/PerceptionExtensionBPLibrary.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerceptionExtensionBPLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PERCEPTIONEXTENSION_API UClass* Z_Construct_UClass_UPerceptionExtensionBPLibrary();
	PERCEPTIONEXTENSION_API UClass* Z_Construct_UClass_UPerceptionExtensionBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PerceptionExtension();
// End Cross Module References
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetLoSHearingRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoSHearingRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetLoSHearingRange(Z_Param_Perception,Z_Param_LoSHearingRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetLoSHearingRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetLoSHearingRange(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetUseLoSHearing)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_UBOOL(Z_Param_UseLoSHearing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetUseLoSHearing(Z_Param_Perception,Z_Param_UseLoSHearing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetUseLoSHearing)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetUseLoSHearing(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetHearingRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HearingRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetHearingRange(Z_Param_Perception,Z_Param_HearingRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetHearingRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetHearingRange(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetNearClippingRadius)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NearClippingRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetNearClippingRadius(Z_Param_Perception,Z_Param_NearClippingRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetNearClippingRadius)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetNearClippingRadius(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetPOVBackwardOffset)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_POVBackwardsOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetPOVBackwardOffset(Z_Param_Perception,Z_Param_POVBackwardsOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetPOVBackwardOffset)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetPOVBackwardOffset(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetAutoSuccessRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AutoSuccessRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetAutoSuccessRange(Z_Param_Perception,Z_Param_AutoSuccessRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetAutoSuccessRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetAutoSuccessRange(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetVisionAngle)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VisionAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetVisionAngle(Z_Param_Perception,Z_Param_VisionAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetVisionAngle)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetVisionAngle(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetLoseSightRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoseSightRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetLoseSightRange(Z_Param_Perception,Z_Param_LoseSightRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetLoseSightRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetLoseSightRange(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetSightRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SightRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetSightRange(Z_Param_Perception,Z_Param_SightRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetSightRange)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetSightRange(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetMaxAge)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAge);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetMaxAge(Z_Param_Perception,Z_Param_SenseClass,Z_Param_MaxAge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetMaxAge)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetMaxAge(Z_Param_Perception,Z_Param_SenseClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetDetectionByAffiliation)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_GET_UBOOL(Z_Param_DetectEnemies);
		P_GET_UBOOL(Z_Param_DetectNeutrals);
		P_GET_UBOOL(Z_Param_DetectFriendlies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetDetectionByAffiliation(Z_Param_Perception,Z_Param_SenseClass,Z_Param_DetectEnemies,Z_Param_DetectNeutrals,Z_Param_DetectFriendlies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetDetectionByAffiliation)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAISenseAffiliationFilter*)Z_Param__Result=UPerceptionExtensionBPLibrary::GetDetectionByAffiliation(Z_Param_Perception,Z_Param_SenseClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execSetDominantSense)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::SetDominantSense(Z_Param_Perception,Z_Param_SenseClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execGetDominantSense)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UAISense> *)Z_Param__Result=UPerceptionExtensionBPLibrary::GetDominantSense(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execForgetAll)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::ForgetAll(Z_Param_Perception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerceptionExtensionBPLibrary::execForgetActor)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_Perception);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPerceptionExtensionBPLibrary::ForgetActor(Z_Param_Perception,Z_Param_Actor);
		P_NATIVE_END;
	}
	void UPerceptionExtensionBPLibrary::StaticRegisterNativesUPerceptionExtensionBPLibrary()
	{
		UClass* Class = UPerceptionExtensionBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetActor", &UPerceptionExtensionBPLibrary::execForgetActor },
			{ "ForgetAll", &UPerceptionExtensionBPLibrary::execForgetAll },
			{ "GetAutoSuccessRange", &UPerceptionExtensionBPLibrary::execGetAutoSuccessRange },
			{ "GetDetectionByAffiliation", &UPerceptionExtensionBPLibrary::execGetDetectionByAffiliation },
			{ "GetDominantSense", &UPerceptionExtensionBPLibrary::execGetDominantSense },
			{ "GetHearingRange", &UPerceptionExtensionBPLibrary::execGetHearingRange },
			{ "GetLoseSightRange", &UPerceptionExtensionBPLibrary::execGetLoseSightRange },
			{ "GetLoSHearingRange", &UPerceptionExtensionBPLibrary::execGetLoSHearingRange },
			{ "GetMaxAge", &UPerceptionExtensionBPLibrary::execGetMaxAge },
			{ "GetNearClippingRadius", &UPerceptionExtensionBPLibrary::execGetNearClippingRadius },
			{ "GetPOVBackwardOffset", &UPerceptionExtensionBPLibrary::execGetPOVBackwardOffset },
			{ "GetSightRange", &UPerceptionExtensionBPLibrary::execGetSightRange },
			{ "GetUseLoSHearing", &UPerceptionExtensionBPLibrary::execGetUseLoSHearing },
			{ "GetVisionAngle", &UPerceptionExtensionBPLibrary::execGetVisionAngle },
			{ "SetAutoSuccessRange", &UPerceptionExtensionBPLibrary::execSetAutoSuccessRange },
			{ "SetDetectionByAffiliation", &UPerceptionExtensionBPLibrary::execSetDetectionByAffiliation },
			{ "SetDominantSense", &UPerceptionExtensionBPLibrary::execSetDominantSense },
			{ "SetHearingRange", &UPerceptionExtensionBPLibrary::execSetHearingRange },
			{ "SetLoseSightRange", &UPerceptionExtensionBPLibrary::execSetLoseSightRange },
			{ "SetLoSHearingRange", &UPerceptionExtensionBPLibrary::execSetLoSHearingRange },
			{ "SetMaxAge", &UPerceptionExtensionBPLibrary::execSetMaxAge },
			{ "SetNearClippingRadius", &UPerceptionExtensionBPLibrary::execSetNearClippingRadius },
			{ "SetPOVBackwardOffset", &UPerceptionExtensionBPLibrary::execSetPOVBackwardOffset },
			{ "SetSightRange", &UPerceptionExtensionBPLibrary::execSetSightRange },
			{ "SetUseLoSHearing", &UPerceptionExtensionBPLibrary::execSetUseLoSHearing },
			{ "SetVisionAngle", &UPerceptionExtensionBPLibrary::execSetVisionAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics
	{
		struct PerceptionExtensionBPLibrary_eventForgetActor_Parms
		{
			UAIPerceptionComponent* Perception;
			AActor* Actor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventForgetActor_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventForgetActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventForgetActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventForgetActor_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Force the AI Perception Component to forget a specific perceived Actor.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Force the AI Perception Component to forget a specific perceived Actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "ForgetActor", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::PerceptionExtensionBPLibrary_eventForgetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::PerceptionExtensionBPLibrary_eventForgetActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics
	{
		struct PerceptionExtensionBPLibrary_eventForgetAll_Parms
		{
			UAIPerceptionComponent* Perception;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventForgetAll_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_Perception_MetaData) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventForgetAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventForgetAll_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Force the AI Perception Component to forget all perceived Actors.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Force the AI Perception Component to forget all perceived Actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "ForgetAll", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::PerceptionExtensionBPLibrary_eventForgetAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::PerceptionExtensionBPLibrary_eventForgetAll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetAutoSuccessRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetAutoSuccessRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetAutoSuccessRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Auto Success Range from Last Seen Location of the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Auto Success Range from Last Seen Location of the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetAutoSuccessRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::PerceptionExtensionBPLibrary_eventGetAutoSuccessRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::PerceptionExtensionBPLibrary_eventGetAutoSuccessRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetDetectionByAffiliation_Parms
		{
			UAIPerceptionComponent* Perception;
			TSubclassOf<UAISense>  SenseClass;
			FAISenseAffiliationFilter ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetDetectionByAffiliation_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetDetectionByAffiliation_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetDetectionByAffiliation_Parms, ReturnValue), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(0, nullptr) }; // 1700678083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_SenseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the Detection By Affiliation values for the chosen Sense of the AI Perception Component.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the Detection By Affiliation values for the chosen Sense of the AI Perception Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetDetectionByAffiliation", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::PerceptionExtensionBPLibrary_eventGetDetectionByAffiliation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::PerceptionExtensionBPLibrary_eventGetDetectionByAffiliation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetDominantSense_Parms
		{
			UAIPerceptionComponent* Perception;
			TSubclassOf<UAISense>  ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetDominantSense_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetDominantSense_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Dominant Sense of the AI Perception Component.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Dominant Sense of the AI Perception Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetDominantSense", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::PerceptionExtensionBPLibrary_eventGetDominantSense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::PerceptionExtensionBPLibrary_eventGetDominantSense_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetHearingRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetHearingRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetHearingRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Hearing Range of the AI Perception Component's Hearing Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Hearing Range of the AI Perception Component's Hearing Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetHearingRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::PerceptionExtensionBPLibrary_eventGetHearingRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::PerceptionExtensionBPLibrary_eventGetHearingRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetLoseSightRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetLoseSightRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetLoseSightRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Lose Sight Radius of the AI Perception Component's Sight Config\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Lose Sight Radius of the AI Perception Component's Sight Config" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetLoseSightRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::PerceptionExtensionBPLibrary_eventGetLoseSightRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::PerceptionExtensionBPLibrary_eventGetLoseSightRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetLoSHearingRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetLoSHearingRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetLoSHearingRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current LoS Hearing Range of the AI Perception Component's Hearing Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current LoS Hearing Range of the AI Perception Component's Hearing Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetLoSHearingRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::PerceptionExtensionBPLibrary_eventGetLoSHearingRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::PerceptionExtensionBPLibrary_eventGetLoSHearingRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetMaxAge_Parms
		{
			UAIPerceptionComponent* Perception;
			TSubclassOf<UAISense>  SenseClass;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetMaxAge_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetMaxAge_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetMaxAge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_SenseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the Max Age for the chosen Sense of the AI Perception Component.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the Max Age for the chosen Sense of the AI Perception Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetMaxAge", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::PerceptionExtensionBPLibrary_eventGetMaxAge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::PerceptionExtensionBPLibrary_eventGetMaxAge_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetNearClippingRadius_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetNearClippingRadius_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetNearClippingRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Near Clipping Radius of the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Near Clipping Radius of the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetNearClippingRadius", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::PerceptionExtensionBPLibrary_eventGetNearClippingRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::PerceptionExtensionBPLibrary_eventGetNearClippingRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetPOVBackwardOffset_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetPOVBackwardOffset_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetPOVBackwardOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Point of View Backwards Offset of the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Point of View Backwards Offset of the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetPOVBackwardOffset", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::PerceptionExtensionBPLibrary_eventGetPOVBackwardOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::PerceptionExtensionBPLibrary_eventGetPOVBackwardOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetSightRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetSightRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetSightRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Sight Radius of the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Sight Radius of the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetSightRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::PerceptionExtensionBPLibrary_eventGetSightRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::PerceptionExtensionBPLibrary_eventGetSightRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetUseLoSHearing_Parms
		{
			UAIPerceptionComponent* Perception;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetUseLoSHearing_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_Perception_MetaData) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventGetUseLoSHearing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventGetUseLoSHearing_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current value of Use LoS Hearing of the AI Perception Component's Hearing Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current value of Use LoS Hearing of the AI Perception Component's Hearing Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetUseLoSHearing", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::PerceptionExtensionBPLibrary_eventGetUseLoSHearing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::PerceptionExtensionBPLibrary_eventGetUseLoSHearing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics
	{
		struct PerceptionExtensionBPLibrary_eventGetVisionAngle_Parms
		{
			UAIPerceptionComponent* Perception;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetVisionAngle_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventGetVisionAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Get the current Peripheral Vision Angle of the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Get the current Peripheral Vision Angle of the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "GetVisionAngle", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::PerceptionExtensionBPLibrary_eventGetVisionAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::PerceptionExtensionBPLibrary_eventGetVisionAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float AutoSuccessRange;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_AutoSuccessRange = { "AutoSuccessRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms, AutoSuccessRange), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_AutoSuccessRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Auto Success Range from Last Seen Location for the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Auto Success Range from Last Seen Location for the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetAutoSuccessRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::PerceptionExtensionBPLibrary_eventSetAutoSuccessRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms
		{
			UAIPerceptionComponent* Perception;
			TSubclassOf<UAISense>  SenseClass;
			bool DetectEnemies;
			bool DetectNeutrals;
			bool DetectFriendlies;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static void NewProp_DetectEnemies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectEnemies;
		static void NewProp_DetectNeutrals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectNeutrals;
		static void NewProp_DetectFriendlies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectFriendlies;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectEnemies_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms*)Obj)->DetectEnemies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectEnemies = { "DetectEnemies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectEnemies_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectNeutrals_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms*)Obj)->DetectNeutrals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectNeutrals = { "DetectNeutrals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectNeutrals_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectFriendlies_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms*)Obj)->DetectFriendlies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectFriendlies = { "DetectFriendlies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectFriendlies_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_SenseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectNeutrals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_DetectFriendlies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set the Detection By Affiliation values for the chosen Sense of the AI Perception Component.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set the Detection By Affiliation values for the chosen Sense of the AI Perception Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetDetectionByAffiliation", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::PerceptionExtensionBPLibrary_eventSetDetectionByAffiliation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetDominantSense_Parms
		{
			UAIPerceptionComponent* Perception;
			TSubclassOf<UAISense>  SenseClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetDominantSense_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetDominantSense_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetDominantSense_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetDominantSense_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_SenseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Dominant Sense for the AI Perception Component.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Dominant Sense for the AI Perception Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetDominantSense", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::PerceptionExtensionBPLibrary_eventSetDominantSense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::PerceptionExtensionBPLibrary_eventSetDominantSense_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetHearingRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float HearingRange;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetHearingRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetHearingRange_Parms, HearingRange), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetHearingRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetHearingRange_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_HearingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Hearing Range for the AI Perception Component's Hearing Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Hearing Range for the AI Perception Component's Hearing Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetHearingRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::PerceptionExtensionBPLibrary_eventSetHearingRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::PerceptionExtensionBPLibrary_eventSetHearingRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float LoseSightRange;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_LoseSightRange = { "LoseSightRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms, LoseSightRange), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_LoseSightRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Lose Sight Radius for the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Lose Sight Radius for the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetLoseSightRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::PerceptionExtensionBPLibrary_eventSetLoseSightRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float LoSHearingRange;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoSHearingRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_LoSHearingRange = { "LoSHearingRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms, LoSHearingRange), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_LoSHearingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new LoS Hearing Range for the AI Perception Component's Hearing Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new LoS Hearing Range for the AI Perception Component's Hearing Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetLoSHearingRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::PerceptionExtensionBPLibrary_eventSetLoSHearingRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetMaxAge_Parms
		{
			UAIPerceptionComponent* Perception;
			TSubclassOf<UAISense>  SenseClass;
			float MaxAge;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetMaxAge_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetMaxAge_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetMaxAge_Parms, MaxAge), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetMaxAge_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetMaxAge_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_SenseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_MaxAge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set the Max Age for the chosen Sense of the AI Perception Component.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set the Max Age for the chosen Sense of the AI Perception Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetMaxAge", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::PerceptionExtensionBPLibrary_eventSetMaxAge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::PerceptionExtensionBPLibrary_eventSetMaxAge_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms
		{
			UAIPerceptionComponent* Perception;
			float NearClippingRadius;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearClippingRadius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_NearClippingRadius = { "NearClippingRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms, NearClippingRadius), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_NearClippingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Near Clipping Radius for the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Near Clipping Radius for the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetNearClippingRadius", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::PerceptionExtensionBPLibrary_eventSetNearClippingRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms
		{
			UAIPerceptionComponent* Perception;
			float POVBackwardsOffset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_POVBackwardsOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_POVBackwardsOffset = { "POVBackwardsOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms, POVBackwardsOffset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_POVBackwardsOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Point of View Backwards Offset for the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Point of View Backwards Offset for the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetPOVBackwardOffset", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::PerceptionExtensionBPLibrary_eventSetPOVBackwardOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetSightRange_Parms
		{
			UAIPerceptionComponent* Perception;
			float SightRange;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetSightRange_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetSightRange_Parms, SightRange), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetSightRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetSightRange_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_SightRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Sight Radius for the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Sight Radius for the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetSightRange", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::PerceptionExtensionBPLibrary_eventSetSightRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::PerceptionExtensionBPLibrary_eventSetSightRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms
		{
			UAIPerceptionComponent* Perception;
			bool UseLoSHearing;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static void NewProp_UseLoSHearing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLoSHearing;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_Perception_MetaData) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_UseLoSHearing_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms*)Obj)->UseLoSHearing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_UseLoSHearing = { "UseLoSHearing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_UseLoSHearing_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_UseLoSHearing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Use LoS Hearing value for the AI Perception Component's Hearing Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Use LoS Hearing value for the AI Perception Component's Hearing Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetUseLoSHearing", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::PerceptionExtensionBPLibrary_eventSetUseLoSHearing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics
	{
		struct PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms
		{
			UAIPerceptionComponent* Perception;
			float VisionAngle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisionAngle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_Perception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_Perception_MetaData), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_Perception_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_VisionAngle = { "VisionAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms, VisionAngle), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms), &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_VisionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perception Extension" },
		{ "Comment", "//Set a new Peripheral Vision Angle for the AI Perception Component's Sight Config.\n" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
		{ "ToolTip", "Set a new Peripheral Vision Angle for the AI Perception Component's Sight Config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerceptionExtensionBPLibrary, nullptr, "SetVisionAngle", nullptr, nullptr, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::PerceptionExtensionBPLibrary_eventSetVisionAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerceptionExtensionBPLibrary);
	UClass* Z_Construct_UClass_UPerceptionExtensionBPLibrary_NoRegister()
	{
		return UPerceptionExtensionBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PerceptionExtension,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetActor, "ForgetActor" }, // 2856125475
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_ForgetAll, "ForgetAll" }, // 874252261
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetAutoSuccessRange, "GetAutoSuccessRange" }, // 2726206587
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDetectionByAffiliation, "GetDetectionByAffiliation" }, // 1599783094
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetDominantSense, "GetDominantSense" }, // 1375336662
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetHearingRange, "GetHearingRange" }, // 1489927803
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoseSightRange, "GetLoseSightRange" }, // 3375507358
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetLoSHearingRange, "GetLoSHearingRange" }, // 2699170496
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetMaxAge, "GetMaxAge" }, // 2663326877
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetNearClippingRadius, "GetNearClippingRadius" }, // 3673538054
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetPOVBackwardOffset, "GetPOVBackwardOffset" }, // 702951544
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetSightRange, "GetSightRange" }, // 2570322793
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetUseLoSHearing, "GetUseLoSHearing" }, // 2536189443
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_GetVisionAngle, "GetVisionAngle" }, // 2828100627
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetAutoSuccessRange, "SetAutoSuccessRange" }, // 2184894731
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDetectionByAffiliation, "SetDetectionByAffiliation" }, // 2656479642
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetDominantSense, "SetDominantSense" }, // 2553633210
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetHearingRange, "SetHearingRange" }, // 86704595
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoseSightRange, "SetLoseSightRange" }, // 418109413
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetLoSHearingRange, "SetLoSHearingRange" }, // 3733128253
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetMaxAge, "SetMaxAge" }, // 4087235186
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetNearClippingRadius, "SetNearClippingRadius" }, // 2693469660
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetPOVBackwardOffset, "SetPOVBackwardOffset" }, // 4017892505
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetSightRange, "SetSightRange" }, // 671312279
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetUseLoSHearing, "SetUseLoSHearing" }, // 1606493889
		{ &Z_Construct_UFunction_UPerceptionExtensionBPLibrary_SetVisionAngle, "SetVisionAngle" }, // 2990458458
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerceptionExtensionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PerceptionExtensionBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerceptionExtensionBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::ClassParams = {
		&UPerceptionExtensionBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPerceptionExtensionBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UPerceptionExtensionBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerceptionExtensionBPLibrary.OuterSingleton, Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPerceptionExtensionBPLibrary.OuterSingleton;
	}
	template<> PERCEPTIONEXTENSION_API UClass* StaticClass<UPerceptionExtensionBPLibrary>()
	{
		return UPerceptionExtensionBPLibrary::StaticClass();
	}
	UPerceptionExtensionBPLibrary::UPerceptionExtensionBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerceptionExtensionBPLibrary);
	UPerceptionExtensionBPLibrary::~UPerceptionExtensionBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPerceptionExtensionBPLibrary, UPerceptionExtensionBPLibrary::StaticClass, TEXT("UPerceptionExtensionBPLibrary"), &Z_Registration_Info_UClass_UPerceptionExtensionBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerceptionExtensionBPLibrary), 669619378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_2213751372(TEXT("/Script/PerceptionExtension"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
