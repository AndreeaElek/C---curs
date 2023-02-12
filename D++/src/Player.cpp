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

int Player::Attack()
{
    int playerAttackPower = this->getDamage() + this->getItemsAttackPower();
    return playerAttackPower;
}

void Player::CheckInventory()
{
    if(inventory.empty())
    {
        std::cout<<"Your inventory is empty \n";
    }
    else
    {
        std::cout<<"Items in your inventory: ";
        for(auto& item : inventory)
        {
            std::cout<<item->getItemName()<<"; ";
        }
        std::cout<< std::endl;
    }
}

void Player::CreateChestItem()
{
    switch (this->playerType)
    {
        case PlayerType::Wizard:
        {
            Item* wand = new Item("Wand", "attack",10,15,5);
            this->inventory.push_back(wand);
            std::cout<<"Wand added to inventory \n";
            break;
        }
        case PlayerType::Warrior:
        {
            Item* shield = new Item("Shield","defence",5,5,15);
            this->inventory.push_back(shield);
            std::cout<<"Shield added to inventory \n";
            break;
        }
        case PlayerType::Rogue:
        {
            Item* knife = new Item("Knife", "attack",15,5,10);
            this->inventory.push_back(knife);
            std::cout<<"Knife added to inventory \n";
            break;
        }
    }
}

int Player::getItemsAttackPower()
{
    int totalItemsDamage=0;
    if(!(inventory.empty()))
    {
        for(auto& item : inventory)
        {
            totalItemsDamage += item->getAttackPower();
        }
    }
    return totalItemsDamage;
}

void Player::DeleteItems()
{
    if(!(inventory.empty()))
    {
        for(auto& item : inventory)
        {
            delete item;
        }
    }
    inventory.clear();
}


