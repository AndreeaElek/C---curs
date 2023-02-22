#ifndef STUDENTLICENTA_H
#define STUDENTLICENTA_H

#pragma once
#include "Student.h"

class StudentLicenta : public Student
{
public:
    StudentLicenta(int varsta, std::string nume, int credite, std::string getLucrareLicenta);
    ~StudentLicenta();

    void setCredite(int credite)
    {
        m_credite = credite;
    }

    int getCredite() 
    { 
        return m_credite; 
    }

    void setLucrareLicenta(int lucrare_licenta)
    {
        m_lucrare_licenta = m_lucrare_licenta;
    }

    std::string getLucrareLicenta()
    {
        return m_lucrare_licenta;
    }

private:
    int m_credite;
    std::string m_lucrare_licenta;

};

#endif