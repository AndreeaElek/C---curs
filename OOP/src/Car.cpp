#include "Car.h"

Car::Car(int cai_putere, std::string culoare, int anul_fabricatiei, int km):
    m_motor(cai_putere), 
    m_culoare(culoare),
    m_anul_fabricatiei(anul_fabricatiei),
    m_km(km)
{

}

Car::~Car()
{

}

void Car::printCarInfo()
{
    std::cout << "CAR INFO \n";
    std::cout << "Color: " << m_culoare << std::endl;
    std::cout << "Kilometers: " << m_km << std::endl;
    std::cout << "Fabrication year: " << m_anul_fabricatiei << std::endl;
    std::cout << "Horse power: " << m_motor.getHorsePower() << std::endl;

}

void Car::drive(int km)
{
    m_motor.start();
    m_km += km;
    std::cout << "Drove for: " << km  << " km" << std::endl;
}