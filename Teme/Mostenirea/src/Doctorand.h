#ifndef DOCTORAND_H
#define DOCTORAND_H

#pragma once
#include "Student.h"

class Doctorand: public Student
{
public:
    Doctorand(int varsta, std::string nume, int credite, std::string domeniu_doctorat);
    ~Doctorand();

    void setDomeniu(std::string domeniu_doctorat)
    {
        m_domeniu_doctorat = domeniu_doctorat;
    } 
    std::string getDomeniu() 
    {
        return m_domeniu_doctorat;
    }

private:
    std::string m_domeniu_doctorat;
};

#endif