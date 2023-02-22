#include "Bicicleta.h"

Bicicleta::Bicicleta()
{

}

Bicicleta::~Bicicleta()
{

}

void Bicicleta::set_tip_cadru(std::string tip_cadru)
{
    this->tip_cadru = tip_cadru;
}

std::string Bicicleta::get_tip_cadru()
{
    return tip_cadru;
}

void Bicicleta::set_dimensiune_roti(double dimensiune_roti)
{
    this->dimensiune_roti = dimensiune_roti;
}

double Bicicleta::get_dimensiune_roti()
{
    return dimensiune_roti;
}

void Bicicleta::set_nr_viteze(int nr_viteze)
{
    this->nr_viteze = nr_viteze;
}

int Bicicleta::get_nr_viteze()
{
    return nr_viteze;
}

int Bicicleta::get_viteza()
{
    return viteza;
}

void Bicicleta::accelereaza()
{
    viteza++;
}

void Bicicleta::franeaza()
{
    if(viteza>0)
    {
        viteza--;
    }
}







