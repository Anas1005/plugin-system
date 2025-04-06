#pragma once
#include <vector>
#include <functional>
#include "Event.h"
class EventListener {
public:
    virtual void handleEvent(Event ev) = 0;
    virtual ~EventListener() {}
};

class EventManager {
public:
    void subscribe(EventListener* listener);
    void publish(Event event) ;
private:
    std::vector<EventListener*> listeners_;
};
