#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Item.h"

class Player
{
public:
    Player(std::string name);
    Player();
    ~Player();
    virtual void Attack();
    void CheckInventory();
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
    std::vector <Item> inventory;

    

};

#endif