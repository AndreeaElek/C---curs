#include "Tema8.h"

void printNumbersInVector (std::vector<int> numbers)
{
    for(int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers.at(i) << " ";
    }
    std::cout << std::endl;
}