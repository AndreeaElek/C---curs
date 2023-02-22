#ifndef PERSON_H
#define PERSON_H

#pragma once
#include "Birthday.h"
#include <ctime>

class Person
{
public:
    Person(std::string lastName, std::string firstName, Birthday birthday);
    ~Person();

    int transformMonth(std::string month);
    void calculateAge();

private:
    std::string m_lastName, m_firstName;
    Birthday m_birthday;

};

#endif