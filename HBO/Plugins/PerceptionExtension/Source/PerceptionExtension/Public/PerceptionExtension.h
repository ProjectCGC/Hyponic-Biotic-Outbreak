// Copyright 2021 Slashin8r. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FPerceptionExtensionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
