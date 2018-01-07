#pragma once

#include <iostream>
#include <string>

class Player
{
public:
	Player() {
	}

	~Player() {
	}

	void init() {
		// 1. initialize all player data
		m_name = "Unnamed";
		// 2. define the player
		m_name = IO::GetText("What is your name?", "Bjorn");
		// 3. introduce the player		
		printf("Your name is %s\n", m_name.c_str());
	}

	void update() {

	}

	void deinit() {

	}

private:
	std::string m_name;
};