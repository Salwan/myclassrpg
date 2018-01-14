#pragma once

#include <iostream>
#include "IO.h"

class World {
public:
    enum EPlace {
        START_COTTAGE,
        START_BACKROOM,
        
        PLACES_COUNT,
    };
    
    World();
    ~World();

    void init();
    void update();
    void deinit();
    
private:
};
