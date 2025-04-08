#pragma once
#include "EventManager.h"
#include "Player.h"
#include "Event.h"
#include <string>

class Publisher {
public:
    Publisher(Player& player, std::string& data);

};
