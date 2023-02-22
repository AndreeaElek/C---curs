#include "Motor.h"

Motor::Motor(int caiPutere)
{
    this->caiPutere = caiPutere;  //this -> pointer catre Motor
}

Motor::~Motor()
{

}

void Motor::start()
{
    std::cout << "Car has started" << std::endl;
}