#include <iostream>

void calcul(int number) {
    int prod = 1;
    if(number >= 100 && number <= 999) 
    {
        while(number>0) 
        {
            prod = prod * (number % 10);
            number = number / 10;
        }
        if(prod % 2 == 0) 
        {
            std::cout<< "Ultima cifra este: "<<(prod % 10);
        } 
        else 
        {
            std::cout<<"Produsul este impar." << std::endl;
        }
    }
}

int main()
{
    int number;
    std::cin>>number;
    calcul(number);

    return 0;
}