#include "Rogue.h"

Rogue::Rogue(std::string name)
{
    this->name = name;
}

Rogue::Rogue()
{
    
}

Rogue::~Rogue()
{

}

void Rogue::Attack()
{
    std::cout<<"I'm a Rogue, and I'm attacking"<<std::endl;
}