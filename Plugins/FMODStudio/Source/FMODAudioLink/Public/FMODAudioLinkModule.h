// Copyright (c), Firelight Technologies Pty, Ltd. 2024-2024.

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#include "FMODAudioLinkFactory.h"

class FFMODAudioLinkModule
{
public:
    FFMODAudioLinkModule()
    {
        Factory = MakeUnique<FFMODAudioLinkFactory>();
    }
    ~FFMODAudioLinkModule()
    {
        Factory.Reset();
    }
private:
    TUniquePtr<FFMODAudioLinkFactory> Factory;
};