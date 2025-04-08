#include "Player.h"
#include <iostream>

Player::Player(EventManager& em) : eventManager_(em), predictor_(nullptr), libHandle_(nullptr) {
    std::cout << "[Player] Created\n";

    // //libHandle_ = dlopen("/home/anassaif/test-shared/predictor/src/build/predictor_build/libpredictor.so", RTLD_NOW);
    // libHandle_ = dlopen("/home/anassaif/test-shared/build/predictor_build/libpredictor.so", RTLD_NOW);

// #ifdef QR_ENV
//     const char* path = "/home/anassaif/test-shared/predictor/src/build/predictor_build/libpredictor.so";
// #else
//     const char* path = "/home/anassaif/test-shared/build/predictor_build/libpredictor.so";
// #endif
//     libHandle_ = dlopen(path, RTLD_NOW);

const char* customPath = std::getenv("QR_ENV_PATH");
if (customPath) {
    libHandle_ = dlopen(customPath, RTLD_NOW);
    std::cout << "QR Env" << std::endl;
} else {
    libHandle_ = dlopen("/home/anassaif/test-shared/build/predictor_build/libpredictor.so", RTLD_NOW);
    std::cout << "Default" << std::endl;
}


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
