#pragma once
#include <string>

enum class EventType {
    MARKET_DATA,
    // ... other types
};

struct Event {
    EventType type;
    std::string payload;
};
