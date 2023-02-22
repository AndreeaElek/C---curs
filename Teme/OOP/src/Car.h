#ifndef CAR_H
#define CAR_H

#pragma once

#include "Motor.h" 


class Car
{
public:
    Car(int cai_putere, std::string culoare, int anul_fabricatiei, int km);
    ~Car();

    void printCarInfo();
    void drive(int km);


private:
    std::string m_culoare;
    int m_anul_fabricatiei;
    int m_km;
    Motor m_motor;

};

#endif