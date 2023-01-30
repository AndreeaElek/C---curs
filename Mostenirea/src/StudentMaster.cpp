#include "StudentMaster.h"

StudentMaster::StudentMaster(int varsta, std::string nume, std::string domeniuMaster):
Student(varsta, nume)
{
    m_domeniu_master = domeniuMaster;
}

StudentMaster::~StudentMaster()
{

}