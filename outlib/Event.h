#pragma once
#include <string>

enum class EventType {
    MARKET_DATA,
    // ... other typesssssssssssssss......................................
};

struct Event {
    EventType type;
    std::string payload;
};
