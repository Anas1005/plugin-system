#pragma once
#include <vector>
#include <functional>
#include "EventListener.h"
#include "Event.h"

class EventListener;
class EventManager {
public:
    void subscribe(EventListener* listener);
    void publish(Event event) ;
private:
    std::vector<EventListener*> listeners_;
};
