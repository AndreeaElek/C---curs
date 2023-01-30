#include "Doctorand.h"

Doctorand::Doctorand(int varsta, std::string nume, int credite, std::string domeniu_doctorat):
Student(varsta,nume)
{
    m_domeniu_doctorat = domeniu_doctorat;
}

Doctorand::~Doctorand()
{

}