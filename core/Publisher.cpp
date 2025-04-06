#include "Publisher.h"

Publisher::Publisher(EventManager& em) : eventManager(em) {}

void Publisher::publishMarketData(const std::string& data) {
    Event event;
    event.type = EventType::MARKET_DATA;
    event.payload = data;
    eventManager.publish(event); // sends to all subscribed listeners
}
