#ifndef PERSOANA_H
#define PERSOANA_H

#pragma once

#include <iostream>
#include <string>

class Persoana
{
    std::string m_nume; //private

public:
    Persoana(std::string nume);
    ~Persoana();

    void sayHello();

    int getVarsta() 
    {
        return m_varsta;
    }

    void setNume(std::string nume)
    {
        m_nume = nume;
    }


protected:
    int m_varsta;

//private:
    


};

#endif