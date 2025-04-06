#pragma once
#include <vector>
#include <functional>

class EventListener {
public:
    virtual void handleEvent(int data) = 0;
    virtual ~EventListener() {}
};

class EventManager {
public:
    void subscribe(EventListener* listener);
    void publish(int data);
private:
    std::vector<EventListener*> listeners_;
};
