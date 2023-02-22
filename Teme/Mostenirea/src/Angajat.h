#ifndef ANGAJAT_H
#define ANGAJAT_H

#pragma once
#include "Persoana.h"

class Angajat: public Persoana
{
public:
    Angajat(std::string nume, int ani_experienta);
    ~Angajat();

    void setAniExperienta(int ani_experienta)
    {
        m_ani_experienta = ani_experienta;
    }

    int getAniExperienta()
    { 
        return m_ani_experienta; 
    }

private:
    int m_ani_experienta;

};

#endif