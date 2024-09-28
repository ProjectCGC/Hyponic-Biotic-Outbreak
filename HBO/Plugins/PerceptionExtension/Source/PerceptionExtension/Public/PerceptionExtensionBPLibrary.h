// Copyright 2021 Slashin8r. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Runtime/Launch/Resources/Version.h"
#include "PerceptionExtensionBPLibrary.generated.h"

UCLASS()
class UPerceptionExtensionBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/*
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool ConfigureSightSense(UAIPerceptionComponent* Perception, float SightRadius, float LoseSightRadius, float PeripheralVisionAngleDegrees, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies, float AutoSuccessRangeFromLastSeenLocation, float MaxAge);
	
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		UAISenseConfig_Hearing* ConfigureHearingSense(float HearingRange, bool UseLoSHearing, float LoSHearingRange, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies, FColor DebugColor, float MaxAge, bool StartsEnabled);

	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		UAISenseConfig_Touch* ConfigureTouchSense(FColor DebugColor, float MaxAge, bool StartsEnabled);

	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		UAISenseConfig_Prediction* ConfigurePredictionSense(FColor DebugColor, float MaxAge, bool StartsEnabled);

	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		UAISenseConfig_Team* ConfigureTeamSense(FColor DebugColor, float MaxAge, bool StartsEnabled);

	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		UAISenseConfig_Damage* ConfigureDamageSense(FColor DebugColor, float MaxAge, bool StartsEnabled);
	*/

	static UAISenseConfig* GetPerceptionSenseConfig(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass);
	
	//Force the AI Perception Component to forget a specific perceived Actor.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool ForgetActor(UAIPerceptionComponent* Perception, AActor* Actor);

	//Force the AI Perception Component to forget all perceived Actors.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool ForgetAll(UAIPerceptionComponent* Perception);

	//Get the current Dominant Sense of the AI Perception Component.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static TSubclassOf<UAISense> GetDominantSense(UAIPerceptionComponent* Perception);

	//Set a new Dominant Sense for the AI Perception Component.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetDominantSense(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass);

	//Get the Detection By Affiliation values for the chosen Sense of the AI Perception Component.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static FAISenseAffiliationFilter GetDetectionByAffiliation(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass);

	//Set the Detection By Affiliation values for the chosen Sense of the AI Perception Component.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetDetectionByAffiliation(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies);

	//Get the Max Age for the chosen Sense of the AI Perception Component.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetMaxAge(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass);

	//Set the Max Age for the chosen Sense of the AI Perception Component.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetMaxAge(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass, float MaxAge);

	//Get the current Sight Radius of the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetSightRange(UAIPerceptionComponent* Perception);

	//Set a new Sight Radius for the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetSightRange(UAIPerceptionComponent* Perception, float SightRange);

	//Get the current Lose Sight Radius of the AI Perception Component's Sight Config
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetLoseSightRange(UAIPerceptionComponent* Perception);

	//Set a new Lose Sight Radius for the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetLoseSightRange(UAIPerceptionComponent* Perception, float LoseSightRange);

	//Get the current Peripheral Vision Angle of the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetVisionAngle(UAIPerceptionComponent* Perception);

	//Set a new Peripheral Vision Angle for the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetVisionAngle(UAIPerceptionComponent* Perception, float VisionAngle);

	//Get the current Auto Success Range from Last Seen Location of the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetAutoSuccessRange(UAIPerceptionComponent* Perception);

	//Set a new Auto Success Range from Last Seen Location for the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetAutoSuccessRange(UAIPerceptionComponent* Perception, float AutoSuccessRange);

	//Get the current Point of View Backwards Offset of the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetPOVBackwardOffset(UAIPerceptionComponent* Perception);

	//Set a new Point of View Backwards Offset for the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetPOVBackwardOffset(UAIPerceptionComponent* Perception, float POVBackwardsOffset);

	//Get the current Near Clipping Radius of the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetNearClippingRadius(UAIPerceptionComponent* Perception);

	//Set a new Near Clipping Radius for the AI Perception Component's Sight Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetNearClippingRadius(UAIPerceptionComponent* Perception, float NearClippingRadius);

	//Get the current Hearing Range of the AI Perception Component's Hearing Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetHearingRange(UAIPerceptionComponent* Perception);

	//Set a new Hearing Range for the AI Perception Component's Hearing Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetHearingRange(UAIPerceptionComponent* Perception, float HearingRange);

	//Get the current value of Use LoS Hearing of the AI Perception Component's Hearing Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static bool GetUseLoSHearing(UAIPerceptionComponent* Perception);

	//Set a new Use LoS Hearing value for the AI Perception Component's Hearing Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetUseLoSHearing(UAIPerceptionComponent* Perception, bool UseLoSHearing);

	//Get the current LoS Hearing Range of the AI Perception Component's Hearing Config.
	UFUNCTION(BlueprintPure, Category = "Perception Extension")
		static float GetLoSHearingRange(UAIPerceptionComponent* Perception);

	//Set a new LoS Hearing Range for the AI Perception Component's Hearing Config.
	UFUNCTION(BlueprintCallable, Category = "Perception Extension")
		static bool SetLoSHearingRange(UAIPerceptionComponent* Perception, float LoSHearingRange);
};
