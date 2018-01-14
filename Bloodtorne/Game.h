#pragma once

#include "IO.h"
#include "World.h"
#include "Player.h"

class Game {
public:
	Game() {
		init();
	}
	~Game() {
		deinit();
	}

	void run() {
        while(!bQuit) {
            m_world->update();
            m_player->update();
        }
	}

private:
	void init() {
		m_world = new World();
		m_world->init();

		m_player = new Player();
		m_player->init();
	}

	void deinit() {
		if (m_world) {
			delete m_world;
			m_world = nullptr;
		}
		if (m_player) {
			delete m_player;
			m_player = nullptr;
		}
	}

	World* m_world;
	Player* m_player;
              
    bool bQuit;
};
