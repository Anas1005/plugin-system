#include "Predictor.h"
#include <iostream>

Predictor::Predictor(EventManager& em) : PredictorBase(em) {
    std::cout << "[Predictor] Created\n";
    //em.subscribe(this);
}

void Predictor::handleEvent(Event ev) {
    std::cout << "[Predictor] Gottttttttkdnskjndjsndjnjntnt NIFTY: " << ev.payload << "\n";
}

void Predictor::print() {
    std::cout << "[Predictor] Print function called\n";
}

extern "C" Predictor* create_predictor(EventManager& em) {
    return new Predictor(em);
}
