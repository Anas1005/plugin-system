#pragma once


#include "EventListener.h"
#include "EventManager.h"
#include <iostream>
class PredictorBase : public EventListener {
    // This is a base class for all predictors
    // It inherits from EventListener to handle events
    // and provides a pure virtual function for printing
    // the predictor's information.
    // This allows for polymorphism, enabling different
    // predictor implementations to be used interchangeably.
    // The derived classes must implement the print() method.
    // The constructor takes an EventManager reference
    // to subscribe to events.
public: 

    PredictorBase(EventManager& em) : EventListener(em) {
        std::cout << "[PredictorBase] Created\n";
        em.subscribe(this);
    }
    virtual void print() = 0;
    void handleEvent(Event ev) override {
        std::cout << "[PredictorBase] Got event: " << ev.payload << "\n";
    }
    virtual ~PredictorBase() {}
};