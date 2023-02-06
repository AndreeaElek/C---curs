#ifndef ITEM_H
#define ITEM_H

#pragma once

#include <iostream>
#include <string>

class Item
{
public:
    Item();
    Item(std::string ItemType, int attackPower, int magicPower, int defencePower);
    ~Item();

private:
    int attackPower, magicPower, defencePower;
    std::string itemType;

};

#endif