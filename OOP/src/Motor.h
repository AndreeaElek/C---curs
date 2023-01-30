#ifndef MOTOR_H
#define MOTOR_H

#pragma once
#include <iostream>
#include <string>

class Motor
{
public:
    Motor(int caiPutere);
    ~Motor();
    void start();
    int getHorsePower()
    {
        return caiPutere;
    }

private:
    int caiPutere;



};

#endif