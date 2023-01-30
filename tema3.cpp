#include <iostream>

int minutesToSeconds(int minutes) 
{
    int seconds;
    seconds = minutes * 60;
    return seconds; 
}

int getRest (int nr1, int nr2) 
{
    int rest;
    rest = nr1 % nr2;
    return rest;
}


int main()
{
    int minutesReceived, nr1, nr2;
    std::cout << "Input minutes: " ;
    std::cin >> minutesReceived;
    std::cout << minutesReceived << " minutes equals " << minutesToSeconds(minutesReceived) << " seconds" << std::endl;
    
    std::cout << "Primul numar: ";
    std::cin >> nr1;
    std::cout << "Al doilea numar ";
    std::cin >> nr2;
    std::cout << "Restul este: "<< getRest(nr1, nr2) << std::endl;

    return 0;
}