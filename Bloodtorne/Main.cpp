#include <iostream>
#include "Game.h"

int main() {
	IO::PrintLn("Bloodtorne");
	IO::PrintLn("======================================");

	Game game;
	game.run();

	system("pause");
    return 0;
}
