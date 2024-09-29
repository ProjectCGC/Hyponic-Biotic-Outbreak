// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerceptionExtensionBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAIPerceptionComponent;
class UAISense;
struct FAISenseAffiliationFilter;
#ifdef PERCEPTIONEXTENSION_PerceptionExtensionBPLibrary_generated_h
#error "PerceptionExtensionBPLibrary.generated.h already included, missing '#pragma once' in PerceptionExtensionBPLibrary.h"
#endif
#define PERCEPTIONEXTENSION_PerceptionExtensionBPLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLoSHearingRange); \
	DECLARE_FUNCTION(execGetLoSHearingRange); \
	DECLARE_FUNCTION(execSetUseLoSHearing); \
	DECLARE_FUNCTION(execGetUseLoSHearing); \
	DECLARE_FUNCTION(execSetHearingRange); \
	DECLARE_FUNCTION(execGetHearingRange); \
	DECLARE_FUNCTION(execSetNearClippingRadius); \
	DECLARE_FUNCTION(execGetNearClippingRadius); \
	DECLARE_FUNCTION(execSetPOVBackwardOffset); \
	DECLARE_FUNCTION(execGetPOVBackwardOffset); \
	DECLARE_FUNCTION(execSetAutoSuccessRange); \
	DECLARE_FUNCTION(execGetAutoSuccessRange); \
	DECLARE_FUNCTION(execSetVisionAngle); \
	DECLARE_FUNCTION(execGetVisionAngle); \
	DECLARE_FUNCTION(execSetLoseSightRange); \
	DECLARE_FUNCTION(execGetLoseSightRange); \
	DECLARE_FUNCTION(execSetSightRange); \
	DECLARE_FUNCTION(execGetSightRange); \
	DECLARE_FUNCTION(execSetMaxAge); \
	DECLARE_FUNCTION(execGetMaxAge); \
	DECLARE_FUNCTION(execSetDetectionByAffiliation); \
	DECLARE_FUNCTION(execGetDetectionByAffiliation); \
	DECLARE_FUNCTION(execSetDominantSense); \
	DECLARE_FUNCTION(execGetDominantSense); \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execForgetActor);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerceptionExtensionBPLibrary(); \
	friend struct Z_Construct_UClass_UPerceptionExtensionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerceptionExtensionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerceptionExtension"), NO_API) \
	DECLARE_SERIALIZER(UPerceptionExtensionBPLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerceptionExtensionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerceptionExtensionBPLibrary(UPerceptionExtensionBPLibrary&&); \
	NO_API UPerceptionExtensionBPLibrary(const UPerceptionExtensionBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerceptionExtensionBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerceptionExtensionBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerceptionExtensionBPLibrary) \
	NO_API virtual ~UPerceptionExtensionBPLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERCEPTIONEXTENSION_API UClass* StaticClass<class UPerceptionExtensionBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PerceptionExtension_Source_PerceptionExtension_Public_PerceptionExtensionBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
