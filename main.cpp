#include "EventManager.h"
#include "Player.h"
#include "Publisher.h"
#include <dlfcn.h>
#include <iostream>

int main() {
    EventManager em;
    Player player(em);
    std::string data = "Test tick: PRICE=420.69, VOLUME=1000";

    Publisher pub(player, data);

    return 0;
}
