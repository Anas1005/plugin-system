#pragma once
#include "EventManager.h"

class Predictor : public EventListener {
public:
    Predictor(EventManager& em);
    void handleEvent(Event ev) override;
};

extern "C" EventListener* create_predictor(EventManager& em); // dlsym
