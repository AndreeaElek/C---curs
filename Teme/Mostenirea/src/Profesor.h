#ifndef PROFESOR_H
#define PROFESOR_H

#pragma once
#include "Angajat.h"

class Profesor: public Angajat
{
public:
    Profesor(std::string nume, int ani_experienta, std::string materie_predata);
    ~Profesor();

    void setMaterie(std::string materie_predata)
    {
        materie_predata = materie_predata;
    } 
    std::string getMaterie()
    {
        return m_materie_predata;
    }

private:
    std::string m_materie_predata;

};

#endif