#include <iostream>

bool checkLimit(int limit)
{
    const int max_limit = 20;
    if(limit > max_limit)
    {
        return false;
    }
    else return true;
}

int main()
{
    bool isValid = true;

    if (isValid) // same as isValid == true
    {
        std::cout << "Access granted" << std::endl;
    }
    else 
    {
        std::cout << "Access denied" << std::endl;
    }

    if (checkLimit(15)) 
    {
        std::cout << "Access granted" << std::endl;
    }
    else 
    {
        std::cout << "Access denied" << std::endl;
    }
    std::cout << "Finishing" << std::endl;

    if (checkLimit(15) && !isValid) 
    {
        std::cout << "Access granted" << std::endl;
    }
    else 
    {
        std::cout << "Access denied" << std::endl;
    }

    int time = 20;
    if(time < 10)
    {
        std::cout << "Good morning \n";
    }
    else if (time <= 20)
    {
        std::cout << "Good day \n";
    }
    else
    {
        std::cout << "Good evening \n";
    }

    std::cout << "Introduceti operatiunea: \n";
    std::cout << "+ Adunare, - Scadere \n";
    char op;
    std::cin>>op;
    std::cout << "Intorduceti doua valori \n";
    int a,b;
    std::cin>> a >> b;
    switch(op)
    {
        case '+':
            std::cout << "Suma este: " << a+b << std::endl;
            break;
        case '-' :
            std::cout << "Diferenta este: " << a-b << std::endl;
            break;
        default: 
            std::cout << "Operatie " << op << " este invalida " << std::endl;
            break;
    }


    /* 
        TEMA

            //EX 1
        Intrarea la piscina este libera la copii sub 7 ani.
        Scrieri un program ce primeste intput vasta  si printeaza daca intrarea este gratis
        ex:
        Input: 6
        Outpu: Gratis


            //EX 2
        Pentru a studia la Univeristatea ITSchool trebuie sa treci de un examen de admitere.
        Nota minima este 8

        Task:
        Creati un program ce sa primeasca ca input nota de la examen si sa printeze ADMINS pentru
        note mai mari sau egale cu 8, iar in caz contrar sa printeze RESPINS


            //EX 3
        Un aparat de cafea face 5 tipuri de cafea:
        1-Late
        2-Americano
        3-Esspreso
        4-Cappuciono
        5-Machiato

        Screti un program ce va lua ca input numarul pentru tipul de cafea si va printa cafeaua corespunzatoare
        Ex:
        Input: 2
        Output:Americano


            //EX 4
        O functie ce verifica daca o parola respecta cerintele:
        Sa aibe cel putin un numar, sa aibe cel putin un caracter special, sa aibe o litera mare si sa fie de cel putin dimensiune 12
    
    
     */

    return 0;
}