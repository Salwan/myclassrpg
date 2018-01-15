#ifndef _WORLD_H_
#define _WORLD_H_

#include <iostream>
#include "IO.h"

enum EPlace {
    START_COTTAGE,
    START_BACKROOM,
    
    PLACES_COUNT,
};

class World {
public:
    World();
    virtual ~World();

    void init();
    void update();
    void deinit();
    
private:
};

#endif
