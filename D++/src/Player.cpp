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

void Player::CreateChestItem()
{
    switch (this->playerType)
    {
        case PlayerType::Wizard:
        {
            Item* wand = new Item("attack",10,15,5);
            this->inventory.push_back(wand);
            std::cout<<"Wand added to inventory \n";
            break;
        }
        case PlayerType::Warrior:
        {
            Item* shield = new Item("defence",5,5,15);
            this->inventory.push_back(shield);
            std::cout<<"Shield added to inventory \n";
            break;
        }
        case PlayerType::Rogue:
        {
            Item* knife = new Item("attack",15,5,10);
            this->inventory.push_back(knife);
            std::cout<<"Knife added to inventory \n";
            break;
        }
    }
}


