#ifndef _GAME_H_
#define _GAME_H_

#include "IO.h"
#include "World.h"
#include "Player.h"

class Game {
public:
    Game();
    virtual ~Game();

    void run();

private:
    void init();
    void deinit();

	World* m_world;
	Player* m_player;
              
    bool bQuit;
};

#endif
