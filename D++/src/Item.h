#ifndef ITEM_H
#define ITEM_H

#pragma once

#include <iostream>
#include <string>

class Item
{
public:
    Item();
    ~Item();

private:
    int attackPower, magicPower, deference;
    std::string itemType;

};

#endif