#include "StudentLicenta.h"

StudentLicenta::StudentLicenta(int varsta, std::string nume, int credite, std::string LucrareLicenta):
Student(varsta, nume)
{
    m_credite = credite;
    m_lucrare_licenta = LucrareLicenta;
}

StudentLicenta::~StudentLicenta()
{

}