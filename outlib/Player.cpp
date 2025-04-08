#include "Player.h"
#include <iostream>

Player::Player(EventManager& em) : eventManager_(em), predictor_(nullptr), libHandle_(nullptr) {
    std::cout << "[Player] Created\n";

    libHandle_ = dlopen("/home/anassaif/test-shared/predictor/src/build/predictor_build/libpredictor.so", RTLD_NOW);
    if (!libHandle_) {
        std::cerr << "dlopen failed: " << dlerror() << "\n";
        return;
    }

    using CreateFn = EventListener* (*)(EventManager&);
    CreateFn create = (CreateFn)dlsym(libHandle_, "create_predictor");
    if (!create) {
        std::cerr << "dlsym failed: " << dlerror() << "\n";
        return;
    }

    predictor_ = create(eventManager_);
    if (!predictor_) {
        std::cerr << "Failed to create predictor\n";
        return;
    }

    std::cout << "[Player] Predictor created\n";
}

Player::~Player() {
    if (predictor_) {
        delete predictor_;
    }

    if (libHandle_) {
        dlclose(libHandle_);
    }

    std::cout << "[Player] Cleaned up\n";
}
