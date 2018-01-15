//
//  Game.cpp
//  Bloodtorne
//

#include "Game.h"

Game::Game() {
    init();
}

Game::~Game() {
    deinit();
}

void Game::run() {
    while(!bQuit) {
        m_world->update();
        m_player->update();
    }
}

void Game::init() {
    m_world = new World();
    m_world->init();
    
    m_player = new Player();
    m_player->init();
}

void Game::deinit() {
    if (m_world) {
        delete m_world;
        m_world = nullptr;
    }
    if (m_player) {
        delete m_player;
        m_player = nullptr;
    }
}
