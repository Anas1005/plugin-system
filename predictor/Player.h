#pragma once

#include <dlfcn.h>
#include "EventManager.h"
#include "EventListener.h"
#include "Predictor.h"
//saknskanksn
class Player {
public:
    Player(EventManager& em);
    ~Player();

    EventManager& eventManager_;
    EventListener* predictor_;
    Predictor* predictor2_;
    void* libHandle_;
};
