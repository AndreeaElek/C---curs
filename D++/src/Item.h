#ifndef ITEM_H
#define ITEM_H

#pragma once

#include <iostream>
#include <string>

class Item
{
public:
    Item();
    Item(std::string ItemName, std::string ItemType, int attackPower, int magicPower, int defencePower);
    ~Item();
    std::string getItemName()
    {
        return itemName;
    }

private:
    int attackPower, magicPower, defencePower;
    std::string itemName, itemType;

};

#endif