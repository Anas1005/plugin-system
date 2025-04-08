#include "Predictor.h"
#include <iostream>

Predictor::Predictor(EventManager& em) : EventListener(em) {
    std::cout << "[Predictor] Created\n";
    em.subscribe(this);
}

void Predictor::handleEvent(Event ev) {
    std::cout << "[Predictor] Gottttttttttnt NIFTY: " << ev.payload << "\n";
}

extern "C" EventListener* create_predictor(EventManager& em) {
    return new Predictor(em);
}
