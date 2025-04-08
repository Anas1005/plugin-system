#include "Publisher.h"
#include <iostream>

Publisher::Publisher(Player& player, std::string& data) {
    std::cout << "[Publisher] Created for NIFTY\n";
    Event event;
    event.type = EventType::MARKET_DATA;
    event.payload = data;
    player.eventManager_.publish(event); // sends to all subscribed listeners
}


