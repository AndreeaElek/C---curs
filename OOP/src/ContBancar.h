#ifndef CONTBANCAR_H
#define CONTBANCAR_H

#pragma once
#include <iostream>
#include <string>

class ContBancar
{
public:
    ContBancar(std::string nume, int sold, std::string iban, int val_const);  //constructor
    ContBancar();
    ~ContBancar(); //destructor 

    void setNume(std::string name);

    std::string getNume()
    {
        return m_nume;
    } 

    void set_sold(int sold);
    int get_sold()
    {
        return m_sold;
    }

    void set_iban(std::string m_iban);

    std::string get_iban()
    {
        return m_iban;
    }

    void printDetails();
    std::string generateIBAN();
    int getRandNumber();


    //TEMA: o metoda publica prin care putem printa detalile contului;
    //Extindeti cu un setter si getter pt m_iban 
    //creati o clasa cu nume bicicleta ce sa aibe atributele tip_cadru, dimensiune_roti, nr_viteze si metodele de accelerare si franare
    

private:
    std::string m_nume;
    int m_sold; 
    std::string m_iban;
    //Tema: O metoda de generat ibanul: 
    // Reguli ROITSCHOOL dupa care 15 numere random
    const int constVar = 5;


};

#endif