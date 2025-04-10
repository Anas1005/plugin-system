#pragma once
#include "EventManager.h"
#include "PredictorBase.h"

class Predictor : public PredictorBase {
    // This class inherits from PredictorBase and implements
    // the handleEvent and print methods. It subscribes to
    // events in the constructor and handles them in the
    // handleEvent method. The print method is used to
    // display information about the predictor.
public:
    Predictor(EventManager& em);
    void print();
    void handleEvent(Event ev) override;
};

extern "C" Predictor* create_predictor(EventManager& em); // dlsym
