//
//  World.cpp
//  Bloodtorne
//

#include "World.h"

World::World() {
    
}

World::~World() {
    
}

void World::init() {
    // 1. initialize all world data
    
    // 2. introduce the world to the player
    IO::PrintLn("Welcome to the world of Bloodtorne (no relation)");
    IO::PrintLn("An epic story of blood and rivers");
}

void World::update() {
    // print the game world status where the player is
}

void World::deinit() {
    // deinitialize everything if needed
}
