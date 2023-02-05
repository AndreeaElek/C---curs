#include "Wizard.h"

Wizard::Wizard(std::string name):Player(name)
{
    setHealth(40);
    setDamage(80);
}

Wizard::Wizard()
{
    
}

Wizard::~Wizard()
{

}

void Wizard::Attack()
{
    std::cout<<"I'm a Wizard, and I'm attacking"<<std::endl;
}