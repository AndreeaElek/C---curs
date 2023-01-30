#include "Inginer.h"

Inginer::Inginer(std::string nume, int ani_experienta, std::string limbaj_programare):
Angajat(nume, ani_experienta)
{
    m_limbaj_programare = limbaj_programare;
}

Inginer::~Inginer()
{

}