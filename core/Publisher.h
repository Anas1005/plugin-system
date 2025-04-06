#pragma once
#include "EventManager.h"
#include "Event.h"
#include <string>

class Publisher {
public:
    Publisher(EventManager& em);
    void publishMarketData(const std::string& data);
private:
    EventManager& eventManager;
};
