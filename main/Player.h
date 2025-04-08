#pragma once

#include <dlfcn.h>
#include "EventManager.h"
#include "EventListener.h"

class Player {
public:
    Player(EventManager& em);
    ~Player();

    EventManager& eventManager_;
    EventListener* predictor_;
    void* libHandle_;
};
