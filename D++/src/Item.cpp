#include "Item.h"

Item::Item()
{

}

Item::Item(std::string itemType, int attackPower, int magicPower, int defencePower)
{
    this->itemType = itemType;
    this->attackPower = attackPower;
    this->magicPower = magicPower;
    this->defencePower = defencePower;
}

Item::~Item()
{

}