#include "Profesor.h"

Profesor::Profesor(std::string nume, int ani_experienta, std::string materie_predata):
Angajat(nume,ani_experienta)
{
    m_materie_predata = materie_predata;
}

Profesor::~Profesor()
{

}