#ifndef INGINER_H
#define INGINER_H

#pragma once
#include "Angajat.h"

class Inginer: public Angajat
{
public:
    Inginer(std::string nume, int ani_experienta, std::string limbaj_programare);
    ~Inginer();

    void setLimbaj(std::string limbaj_programare)
    {
        m_limbaj_programare = limbaj_programare;
    }
    std::string getLimbajProgram()
    {
        return m_limbaj_programare;
    }

private:
    std::string m_limbaj_programare;

};

#endif