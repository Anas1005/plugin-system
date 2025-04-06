#include "EventManager.h"
#include "Publisher.h"
#include "Event.h"
#include <dlfcn.h>
#include <iostream>

int main() {
    EventManager em;

    // Load shared library
    void* handle = dlopen("/home/anassaif/test-shared/main/libpredictor.so", RTLD_NOW);
    if (!handle) {
        std::cerr << "dlopen failed: " << dlerror() << "\n";
        return 1;
    }

    // Lookup symbol
    using CreateFn = EventListener* (*)(EventManager&);
    CreateFn create = (CreateFn)dlsym(handle, "create_predictor");
    if (!create) {
        std::cerr << "dlsym failed: " << dlerror() << "\n";
        return 1;
    }

    // Create Predictor
    EventListener* predictor = create(em);

    // Use Publisher to simulate market data
    Publisher pub(em);
    pub.publishMarketData("Test tick: PRICE=420.69, VOLUME=1000");

    delete predictor;
    dlclose(handle);
    return 0;
}
