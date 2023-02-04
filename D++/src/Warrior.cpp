#include "Warrior.h"

Warrior::Warrior(std::string name)
{
    this->name = name;
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