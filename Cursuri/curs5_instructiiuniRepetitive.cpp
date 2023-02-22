#include <iostream>
#include <string>

const float pi = 3.14;

void foo(){
    
    std::cout<< "Dinn foo() Pi este: " << pi << std::endl;
}

bool CheckPassword(std::string input) 
{
    if(input == "Parola")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    for(int i=0; i< 5; i++)
    {
        foo();
        std::cout << "Din Main Pi este: " << pi << std::endl;
        std::cout << "Buna dimineata \n";

    }
    int last_sum = 0;
    int last_index = 0;
    for(int i=10; i>=0; i--)
    {
        last_sum = 1 + i;
        std::cout << "Suma dintre 1 + "<< i << " este: "<< last_sum << std::endl;
        last_index = i;
        bool b = false;
    }
    std::cout << "Last sum is: "<< last_sum << std::endl;

    bool is_Valid = true;
    while(is_Valid)
    {
        std::cout << "You are in \n";
        break;
    }

    std::string parola;
    do {
        std::cout << "Introduceti parola: \n";
        std::cin >> parola;
    }
    while (!CheckPassword(parola));

    /*
    TEMA

        //Ex1 
    Esti intrun voiaj pe mare de 5 ore.
    Vasul navigeaza cu 40km pe ora.
    Scrieti un program ce va printa cati km a parcurs vasul in fiecare ora
    Ex:
    2
    Vasul a parcurs 40 km
    Vasul a parcrus 80 km


        //Ex2
    Contdown
    Creati o functie timer.Ce va lua  ca inuput un numar de secunde si va printa secundele ramase pana la 0
    Trebuie printat fiecare numar inclusiv 0
    Input:
    5
    Outpu:
    5
    4
    3
    2
    1
    0


        //Ex3
    Un supermarket a lansat o campanie de reduceri de 15%  reducere la 3 produse
    Scrieti un program ce ia ca input  pretul total pentru fiecare produs si printeaza reducerea aferenta
    Ex:
    15000
    4000
    6700
    Output:
    2250
    600
    1005


        //Ex4
    Ti se da un porgram ce va printa toate numerele de la 0 la 20
    Schimbati codul pentru a printa doar multipli de 3

    int main()
    {
    //schimba
    int num = 0 ;
    while(num <=20){
    cout << num << endl;
    num+=1;

    }
    
    
    */

    return 0;
}
