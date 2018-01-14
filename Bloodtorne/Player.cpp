//
//  Player.cpp
//  Bloodtorne
//

#include "Player.h"
#include "IO.h"

Player::Player() {
}

Player::~Player() {
}

void Player::init() {
    // 1. initialize all player data
    m_name = "Unnamed";
    // 2. define the player
    m_name = IO::GetText("What is your name?", "Bjorn");
    // 3. introduce the player
    printf("Your name is %s\n", m_name.c_str());
}

void Player::update() {
    
}

void Player::deinit() {
    
}
