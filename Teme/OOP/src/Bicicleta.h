#ifndef BICICLETA_H
#define BICICLETA_H

#pragma once
#include <iostream>
#include <string>

class Bicicleta
{
public:
    Bicicleta();
    ~Bicicleta();

    void set_tip_cadru(std::string tip_cadru);
    std::string get_tip_cadru();

    void set_dimensiune_roti(double dimensiune_roti);
    double get_dimensiune_roti();

    void set_nr_viteze(int nr_viteze);
    int get_nr_viteze();

    int get_viteza();

    void accelereaza();

    void franeaza();

private:
    std::string tip_cadru;
    double dimensiune_roti;
    int nr_viteze;
    int viteza=0;


};

#endif