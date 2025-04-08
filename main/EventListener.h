#pragma once
#include <vector>
#include <iostream>
#include "EventManager.h"
#include <functional>
#include "Event.h"

class EventManager;
class EventListener {
    public:
        EventListener(EventManager& em);
        virtual void handleEvent(Event ev) = 0;
        virtual ~EventListener() {}
    };