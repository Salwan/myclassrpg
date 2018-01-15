#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

class Player
{
public:
    Player();
    virtual ~Player();

    void init();
    void update();
    void deinit();

private:
	std::string m_name;
};

#endif
