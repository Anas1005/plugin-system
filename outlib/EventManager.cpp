#include "EventManager.h"

void EventManager::subscribe(EventListener* listener) {
    listeners_.push_back(listener);
}
void EventManager::publish(Event event) {
    if (event.type != EventType::MARKET_DATA) return; // Only handle MARKET_DATA events
    // Parse the event payload to extract data
    for (auto* l : listeners_) l->handleEvent(event);
}
