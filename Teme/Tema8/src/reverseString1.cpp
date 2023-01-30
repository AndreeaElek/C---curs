#include "Tema8.h"

std::string reverseString1(std::string &stringToReverse)
{
    std::string reversedString = stringToReverse;
    int j = stringToReverse.length() - 1;
    for (int i = 0; i < stringToReverse.length(); i++)
    {
        reversedString[j] = stringToReverse[i];
        j--;
    }

    return reversedString;
}