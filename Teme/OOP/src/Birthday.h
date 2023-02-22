#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#pragma once
#include <iostream>
#include <string>

class Birthday
{
public:
    Birthday(int birthYear, std::string birthMonth, int birthDay);
    ~Birthday();

    int getYear();
    std::string getMonth();
    int getDay();


private:
    int birthYear, birthDay;
    std::string birthMonth; 

};

#endif