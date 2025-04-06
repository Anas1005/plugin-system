#include "Predictor.h"
#include <iostream>

Predictor::Predictor(EventManager& em) {
    std::cout << "[Predictor] Created\n";
    em.subscribe(this);
}

void Predictor::handleEvent(Event ev) {
    std::cout << "[Predictor] Got event: " << ev.payload << "\n";
}

extern "C" EventListener* create_predictor(EventManager& em) {
    return new Predictor(em);
}
