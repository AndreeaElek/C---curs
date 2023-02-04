#include "Wizard.h"

Wizard::Wizard(std::string name)
{
    this->name = name;
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