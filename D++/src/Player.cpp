#include "Player.h"

Player::Player()
{

}

Player::Player(std::string name)
{
    this->name = name;
}

Player::~Player()
{

}

void Player::Attack()
{
    std::cout<<"Player is attacking"<<std::endl;
}


