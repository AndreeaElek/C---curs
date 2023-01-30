#include <iostream>

//Diferenta intre pointer si referinta: un pointer poatef fi null, dar o referinta nu poate fi null

void foo(int param)
{
    std::cout << param << std::endl;
    std::cout << "Adresa lui param din foo este: " << &param << std::endl;  // & -> adaresOf
}

void foo_cu_pointer(int* param)
{
    //if (param != nullptr)
   // {
    std::cout << *param << std::endl; //*pointer -> dereferntiere (adica aaccesare valoarea din adresa)
     std::cout << "Adresa lui param din foo cu pointer este: " << &param << std::endl;  // & -> adaresOf
    //}
   /* else
    {
        std::cout << "Pointer invalid";
    } */
}

int increment(int param)
{
    return ++param;
}

int increment2(int* param)
{
    //if(param != nullptr)
        *param++;
}

void printFood(std::string& mancare)
{
    std::cout << "Mancarea este: " << mancare << std::endl;
}

void addA(std::string & ref)
{
    ref += "A";
}



int main()
{
    int param = 5;
    std::cout << "Adresa lui param din main este: " << &param << std::endl;  
    foo(param);
    //foo_cu_pointer(&param);
    int *ptr; // un pointer care are o adresa int;
    ptr = &param;
    foo_cu_pointer(ptr);
    std::cout << "Intrement cu pointer: " << ptr << std::endl;
    increment2(ptr);
    std::cout << "Intrement cu pointer: " << ptr << std::endl;
    //int* ptr2 = nullptr; 
    //param = increment(param);  //workaround!
    std::cout << "Valoarea incrementata este: " << increment(param) << std::endl;
    std::cout << "Valoarea lui param este: " << param << std::endl;
    //Sinteza pointer:
    // tip_data_pointer * nume_pointer


    int my_array[5] = {1,2,3,4,5};
    for(int i=0; i < 5; i++)
    {
        std::cout << &my_array[i] << std::endl;
    }

    std::string pizza = "PIZZA";

    std::string& mancare = pizza;

    //std::cout << mancare << std::endl; 

    printFood(mancare);

    mancare = "CARTOFI";

    printFood(pizza);

    addA(pizza);

    printFood(mancare);


        //Ex 0 (Ex swap)
    //Creati o functie ce sa faca swap intre doua valori
    //a = 5;
    //b = 10;

    //dupa
    //a = 10;
    //b = 5;

        //Ex 1
    //Scoate dublicatele dinr-un vector

        //Ex2
    /*Ai 2 prieteni ce vorbesc orca intre ei.Limba orca sunt aceleasi cuvinte 
    ca in limba romana doar ca se ia prima litera a fiecarui cuvant si se pune la sfarsitul cuvantului 
    in urma caruia se adauga un ay
    drum= rumday
    Input:
    Un string ce reprezinta o propozite in limba romana
    Output:
    Un string ce reprezinta traducerea in limba orca*/

        //Ex 3
    //O functie ce sa returneze inversul unui string (reverse string) Input: Test , Output : tseT
    return 0;
}