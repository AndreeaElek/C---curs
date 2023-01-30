#include "Tema8.h"

std::string reverseString2(std::string &stringToReverse)
{
    std::string reversedString = "";
    for (int i = stringToReverse.length() - 1; i >= 0; i--)
    {
        reversedString += stringToReverse[i];
    }

    return reversedString;
}