#include "Warrior.h"

Warrior::Warrior(std::string name)
{
    this->name = name;
    setHealth(50);
    setDamage(70);
}

Warrior::Warrior()
{
    
}

Warrior::~Warrior()
{

}

void Warrior::Attack()
{
    std::cout<<"I'm a Warrior and I'm attacking"<<std::endl;
}