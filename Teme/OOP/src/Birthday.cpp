#include "Birthday.h"

Birthday::Birthday(int birthYear, std::string birthMonth, int birthDay)
{
    this->birthYear = birthYear;
    this->birthMonth = birthMonth;
    this->birthDay = birthDay;
}

Birthday::~Birthday()
{

}

int Birthday::getYear()
{
    return birthYear;
}

std::string Birthday::getMonth()
{
    return birthMonth;
}

int Birthday::getDay()
{
    return birthDay;
}

