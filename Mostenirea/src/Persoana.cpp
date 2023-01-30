#include "Persoana.h"

Persoana::Persoana(std::string nume):
m_nume(nume)
{
    m_nume = nume;
    std::cout << "O persoana a fost creat \n";
}

Persoana::~Persoana()
{
    std::cout << "O persoana a fost stearsa \n";
}

void Persoana::sayHello()
{
    std::cout << "Hello, my name is " << m_nume << std::endl;
}