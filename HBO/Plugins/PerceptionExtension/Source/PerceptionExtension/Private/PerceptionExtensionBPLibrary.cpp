// Copyright 2021 Slashin8r. All Rights Reserved.

#include "PerceptionExtensionBPLibrary.h"
#include "PerceptionExtension.h"
/*
bool UPerceptionExtensionBPLibrary::ConfigureSightSense(UAIPerceptionComponent* Perception, float SightRadius, float LoseSightRadius, float PeripheralVisionAngleDegrees, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies, float AutoSuccessRangeFromLastSeenLocation, float MaxAge)
{
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("ConfigureSightSense: Perception == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* SightConfig = Perception->CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
        //SightConfig->Implementation = UAISense_Sight::StaticClass();
        SightConfig->SightRadius = SightRadius;
        SightConfig->LoseSightRadius = LoseSightRadius;
        SightConfig->PeripheralVisionAngleDegrees = PeripheralVisionAngleDegrees;
        SightConfig->DetectionByAffiliation.bDetectEnemies = DetectEnemies;
        SightConfig->DetectionByAffiliation.bDetectNeutrals = DetectNeutrals;
        SightConfig->DetectionByAffiliation.bDetectFriendlies = DetectFriendlies;
        SightConfig->AutoSuccessRangeFromLastSeenLocation = AutoSuccessRangeFromLastSeenLocation;
        SightConfig->SetMaxAge(MaxAge);
        Perception->ConfigureSense(*SightConfig);
    }

    return true;
}
*/
UAISenseConfig* UPerceptionExtensionBPLibrary::GetPerceptionSenseConfig(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass)
{
    UAISenseConfig* result = nullptr;
    FAISenseID Id = UAISense::GetSenseID(SenseClass);
    if (!Id.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("GetPerceptionSenseConfig: Wrong Sense ID"));
    }
    else if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetPerceptionSenseConfig: Perception == nullptr"));
    }
    else
    {
        result = Perception->GetSenseConfig(Id);
    }

    return result;
}

bool UPerceptionExtensionBPLibrary::ForgetActor(UAIPerceptionComponent* Perception, AActor* Actor)
{
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("ForgetActor: Perception == nullptr"));
        return false;
    }
    else if (Actor == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("ForgetActor: Actor == nullptr"));
        return false;
    }
    else
    {
        Perception->ForgetActor(Actor);
    }
    return true;
}

bool UPerceptionExtensionBPLibrary::ForgetAll(UAIPerceptionComponent* Perception)
{
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("ForgetAll: Perception == nullptr"));
        return false;
    }
    else
    {
        Perception->ForgetAll();
    }
    return true;
}

TSubclassOf<UAISense> UPerceptionExtensionBPLibrary::GetDominantSense(UAIPerceptionComponent* Perception)
{
    TSubclassOf<UAISense> DominantSense = nullptr;
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetDominantSense: Perception == nullptr"));
    }
    else
    {
        DominantSense = Perception->GetDominantSense();
    }
    return DominantSense;
}

bool UPerceptionExtensionBPLibrary::SetDominantSense(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass)
{
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetDominantSense: Perception == nullptr"));
        return false;
    }
    else if (SenseClass == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetDominantSense: SenseClass == nullptr"));
        return false;
    }
    else
    {
        Perception->SetDominantSense(SenseClass);
    }
    return true;
}

FAISenseAffiliationFilter UPerceptionExtensionBPLibrary::GetDetectionByAffiliation(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass)
{
    FAISenseAffiliationFilter DetectionByAffiliation = {};
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetDetectionByAffiliation: Perception == nullptr"));
    }
    else if (SenseClass == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetDetectionByAffiliation: SenseClass == nullptr"));
    }
    else
    {
        UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, SenseClass);
        UAISenseConfig_Sight* SightSenseConfig = Cast<UAISenseConfig_Sight>(Config);
        UAISenseConfig_Hearing* HearingSenseConfig = Cast<UAISenseConfig_Hearing>(Config);
        if (SightSenseConfig)
        {
            DetectionByAffiliation = SightSenseConfig->DetectionByAffiliation;
        }
        else
        {
            DetectionByAffiliation = HearingSenseConfig->DetectionByAffiliation;
        }
    }
    return DetectionByAffiliation;
}

bool UPerceptionExtensionBPLibrary::SetDetectionByAffiliation(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies)
{
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetDetectionByAffiliation: Perception == nullptr"));
        return false;
    }
    else if (SenseClass == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetDetectionByAffiliation: SenseClass == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, SenseClass);
        UAISenseConfig_Sight* SightSenseConfig = Cast<UAISenseConfig_Sight>(Config);
        UAISenseConfig_Hearing* HearingSenseConfig = Cast<UAISenseConfig_Hearing>(Config);
        if (SightSenseConfig)
        {
            SightSenseConfig->DetectionByAffiliation.bDetectEnemies = DetectEnemies;
            SightSenseConfig->DetectionByAffiliation.bDetectNeutrals = DetectNeutrals;
            SightSenseConfig->DetectionByAffiliation.bDetectFriendlies = DetectFriendlies;
        }
        else
        {
            HearingSenseConfig->DetectionByAffiliation.bDetectEnemies = DetectEnemies;
            HearingSenseConfig->DetectionByAffiliation.bDetectNeutrals = DetectNeutrals;
            HearingSenseConfig->DetectionByAffiliation.bDetectFriendlies = DetectFriendlies;
        }
    }
    return true;
}

float UPerceptionExtensionBPLibrary::GetMaxAge(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass)
{
    float MaxAge = 0.0f;
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetMaxAge: Perception == nullptr"));
    }
    else if (SenseClass == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetMaxAge: SenseClass == nullptr"));
    }
    else
    {
        UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, SenseClass);
        UAISenseConfig_Sight* SightSenseConfig = Cast<UAISenseConfig_Sight>(Config);
        UAISenseConfig_Hearing* HearingSenseConfig = Cast<UAISenseConfig_Hearing>(Config);
        if (SightSenseConfig)
        {
            MaxAge = SightSenseConfig->GetMaxAge();
        }
        else
        {
            MaxAge = HearingSenseConfig->GetMaxAge();
        }
    }
    return MaxAge;
}

bool UPerceptionExtensionBPLibrary::SetMaxAge(UAIPerceptionComponent* Perception, TSubclassOf<UAISense> SenseClass, float MaxAge)
{
    if (Perception == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetMaxAge: Perception == nullptr"));
        return false;
    }
    else if (SenseClass == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetMaxAge: SenseClass == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, SenseClass);
        UAISenseConfig_Sight* SightSenseConfig = Cast<UAISenseConfig_Sight>(Config);
        UAISenseConfig_Hearing* HearingSenseConfig = Cast<UAISenseConfig_Hearing>(Config);
        if (SightSenseConfig)
        {
            SightSenseConfig->SetMaxAge(MaxAge);
        }
        else
        {
            HearingSenseConfig->SetMaxAge(MaxAge);
        }
    }
    return true;
}

float UPerceptionExtensionBPLibrary::GetSightRange(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetSightRange: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);
        result = ConfigSight->SightRadius;
    }
    return result;
}

bool UPerceptionExtensionBPLibrary::SetSightRange(UAIPerceptionComponent* Perception, float SightRange)
{
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetSightRange: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetSightRange was %f %f, setting to %f %f")
            , ConfigSight->SightRadius, ConfigSight->LoseSightRadius, SightRange, (ConfigSight->LoseSightRadius - ConfigSight->SightRadius + SightRange));

        // Save original lose range
        float LoseRange = ConfigSight->LoseSightRadius - ConfigSight->SightRadius;
        ConfigSight->SightRadius = SightRange;
        // Apply lose range to new radius of the sight
        ConfigSight->LoseSightRadius = ConfigSight->SightRadius + LoseRange;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
}

float UPerceptionExtensionBPLibrary::GetLoseSightRange(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetLoseSightRange: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);
        result = ConfigSight->LoseSightRadius;
    }
    return result;
}

bool UPerceptionExtensionBPLibrary::SetLoseSightRange(UAIPerceptionComponent* Perception, float LoseSightRange)
{
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetLoseSightRange: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);

        if (LoseSightRange < ConfigSight->SightRadius)
        {
            LoseSightRange = ConfigSight->SightRadius;
        }

        UE_LOG(LogTemp, Verbose, TEXT("SetLoseSightRange was %f, setting to %f")
            , ConfigSight->LoseSightRadius, LoseSightRange);

        ConfigSight->LoseSightRadius = LoseSightRange;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
}

float UPerceptionExtensionBPLibrary::GetVisionAngle(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetVisionAngle: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);
        result = ConfigSight->PeripheralVisionAngleDegrees * 2.0f;
    }
    return result;
}

bool UPerceptionExtensionBPLibrary::SetVisionAngle(UAIPerceptionComponent* Perception, float VisionAngle)
{
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetVisionAngle: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);

        VisionAngle = VisionAngle / 2.0f;

        UE_LOG(LogTemp, Verbose, TEXT("SetVisionAngle was %f, setting to %f")
            , ConfigSight->PeripheralVisionAngleDegrees, VisionAngle);

        ConfigSight->PeripheralVisionAngleDegrees = VisionAngle;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
}

float UPerceptionExtensionBPLibrary::GetAutoSuccessRange(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetAutoSuccessRange: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);
        result = ConfigSight->AutoSuccessRangeFromLastSeenLocation;
    }
    return result;
}

bool UPerceptionExtensionBPLibrary::SetAutoSuccessRange(UAIPerceptionComponent* Perception, float AutoSuccessRange)
{
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetAutoSuccessRange: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetAutoSuccessRange was %f, setting to %f")
            , ConfigSight->AutoSuccessRangeFromLastSeenLocation, AutoSuccessRange);

        ConfigSight->AutoSuccessRangeFromLastSeenLocation = AutoSuccessRange;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
}

float UPerceptionExtensionBPLibrary::GetPOVBackwardOffset(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
#if ENGINE_MINOR_VERSION >= 27 || ENGINE_MAJOR_VERSION >= 5
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetPOVBackwardOffset: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);
        result = ConfigSight->PointOfViewBackwardOffset;
    }
#else
    UE_LOG(LogTemp, Error, TEXT("GetPOVBackwardOffset: Requires UE4.27+"));
#endif
    return result;
}

bool UPerceptionExtensionBPLibrary::SetPOVBackwardOffset(UAIPerceptionComponent* Perception, float POVBackwardOffset)
{
#if ENGINE_MINOR_VERSION >= 27 || ENGINE_MAJOR_VERSION >= 5
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetPOVBackwardOffset: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetPOVBackwardOffset was %f, setting to %f")
            , ConfigSight->PointOfViewBackwardOffset, POVBackwardOffset);

        ConfigSight->PointOfViewBackwardOffset = POVBackwardOffset;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
#else
    UE_LOG(LogTemp, Error, TEXT("SetPOVBackwardOffset: Requires UE4.27+"));
    return false;
#endif
}

float UPerceptionExtensionBPLibrary::GetNearClippingRadius(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
#if ENGINE_MINOR_VERSION >= 27 || ENGINE_MAJOR_VERSION >= 5
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetNearClippingRadius: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);
        result = ConfigSight->NearClippingRadius;
    }
#else
    UE_LOG(LogTemp, Error, TEXT("GetNearClippingRadius: Requires UE4.27+"));
#endif
    return result;
}

bool UPerceptionExtensionBPLibrary::SetNearClippingRadius(UAIPerceptionComponent* Perception, float NearClippingRadius)
{
#if ENGINE_MINOR_VERSION >= 27 || ENGINE_MAJOR_VERSION >= 5
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Sight::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetNearClippingRadius: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Sight* ConfigSight = Cast<UAISenseConfig_Sight>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetNearClippingRadius was %f, setting to %f")
            , ConfigSight->NearClippingRadius, NearClippingRadius);

        ConfigSight->NearClippingRadius = NearClippingRadius;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
#else
    UE_LOG(LogTemp, Error, TEXT("SetNearClippingRadius: Requires UE4.27+"));
    return false;
#endif
}

float UPerceptionExtensionBPLibrary::GetHearingRange(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Hearing::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetHearingRange: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Hearing* ConfigHearing = Cast<UAISenseConfig_Hearing>(Config);
        result = ConfigHearing->HearingRange;
    }
    return result;
}

bool UPerceptionExtensionBPLibrary::SetHearingRange(UAIPerceptionComponent* Perception, float HearingRange)
{
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Hearing::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetHearingRange: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Hearing* ConfigHearing = Cast<UAISenseConfig_Hearing>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetHearingRange was %f, setting to %f")
            , ConfigHearing->HearingRange, HearingRange);

        ConfigHearing->HearingRange = HearingRange;
        Perception->RequestStimuliListenerUpdate();
    }
    return true;
}

bool UPerceptionExtensionBPLibrary::GetUseLoSHearing(UAIPerceptionComponent* Perception)
{
    bool result = false;
#if !(ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 2)
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Hearing::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetUseLoSHearing: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Hearing* ConfigHearing = Cast<UAISenseConfig_Hearing>(Config);
        result = ConfigHearing->bUseLoSHearing;
    }
#endif
    return result;
}

bool UPerceptionExtensionBPLibrary::SetUseLoSHearing(UAIPerceptionComponent* Perception, bool UseLoSHearing)
{
#if !(ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 2)
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Hearing::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetUseLoSHearing: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Hearing* ConfigHearing = Cast<UAISenseConfig_Hearing>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetUseLoSHearing was %b, setting to %b")
            , ConfigHearing->bUseLoSHearing, UseLoSHearing);

        ConfigHearing->bUseLoSHearing = UseLoSHearing;
        Perception->RequestStimuliListenerUpdate();
    }
#endif
    return true;
}

float UPerceptionExtensionBPLibrary::GetLoSHearingRange(UAIPerceptionComponent* Perception)
{
    float result = 0.0f;
#if !(ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 2)
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Hearing::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("GetLoSHearingRange: Config == nullptr"));
    }
    else
    {
        UAISenseConfig_Hearing* ConfigHearing = Cast<UAISenseConfig_Hearing>(Config);
        result = ConfigHearing->LoSHearingRange;
    }
#endif
    return result;
}

bool UPerceptionExtensionBPLibrary::SetLoSHearingRange(UAIPerceptionComponent* Perception, float LoSHearingRange)
{
#if !(ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 2)
    UAISenseConfig* Config = GetPerceptionSenseConfig(Perception, UAISense_Hearing::StaticClass());
    if (Config == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetLoSHearingRange: Config == nullptr"));
        return false;
    }
    else
    {
        UAISenseConfig_Hearing* ConfigHearing = Cast<UAISenseConfig_Hearing>(Config);

        UE_LOG(LogTemp, Verbose, TEXT("SetLoSHearingRange was %f, setting to %f")
            , ConfigHearing->LoSHearingRange, LoSHearingRange);

        ConfigHearing->LoSHearingRange = LoSHearingRange;
        Perception->RequestStimuliListenerUpdate();
    }
#endif
    return true;
}