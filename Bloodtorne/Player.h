#pragma once

#include <iostream>
#include <string>

class Player
{
public:
    Player();
    ~Player();

    void init();
    void update();
    void deinit();

private:
	std::string m_name;
};
