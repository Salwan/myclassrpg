#pragma once

#include <iostream>
#include "IO.h"

class World {
public:
	World() {
	}
	~World() {
	}

	void init() {
		// 1. initialize all world data

		// 2. introduce the world to the player
		IO::PrintLn("Welcome to the world of Bloodtorne (no relation)");
		IO::PrintLn("An epic story of blood and rivers");
	}
	void update() {
		// print the game world status where the player is
	}
	void deinit() {
		// deinitialize everything if needed
	}
};