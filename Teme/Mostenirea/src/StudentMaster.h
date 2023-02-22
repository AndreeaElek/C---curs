#ifndef STUDENTMASTER_H
#define STUDENTMASTER_H

#pragma once
#include "Student.h"

class StudentMaster: public Student
{
public:
    StudentMaster(int varsta, std::string nume, std::string domeniuMaster);
    ~StudentMaster();

    void setDomeniuMaster(std::string domeniuMaster)
    {
        m_domeniu_master = domeniuMaster;
    }

    std::string getDomeniuMaster()
    {
        return m_domeniu_master;
    }

private:
    std::string m_domeniu_master;

};

#endif