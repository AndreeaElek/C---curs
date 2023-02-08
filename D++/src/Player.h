#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Item.h"

enum class PlayerType 
{
    Wizard,
    Warrior,
    Rogue
};

class Player
{
public:
    PlayerType playerType;
    Player(std::string name);
    Player();
    ~Player();
    virtual void Attack();
    void CheckInventory();
    void CreateChestItem();
    void setHealth(int health)
    {
        this->health = health;
    }
    int getHealth()
    {
        return this->health;
    }
    void setDamage(int damage)
    {
        this->damage = damage;
    }
    int getDamage()
    {
        return this->damage;
    }

protected:
    std::string name;

private:
    int health, damage;
    std::vector <Item*> inventory;
    

    

};

#endif