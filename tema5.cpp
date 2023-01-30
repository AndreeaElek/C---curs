#include <iostream>

int main()
{
    //Exercitiul 1
    const int ore_calatorie = 5, km_pe_ora = 40;
    int ore_parcurse = 1, distanta_parcursa = 40;
    while (ore_parcurse<=ore_calatorie)
    {
        std::cout<< "Vasul a parcurs " << distanta_parcursa << " km" << std::endl;
        ore_parcurse++;
        distanta_parcursa += km_pe_ora;
    }
    
    //Exercitiul 2
    int secunde;
    std::cout<< "Introduce numarul de secunde: ";
    std::cin >> secunde;
    while(secunde>=0)
    {
        std::cout<< secunde << std::endl;
        secunde--;
    }



    //Exercitiul 3
    float pret_produs, reducere_produs;
    const int produse_existente = 3, reducere = 15;
    int produse_introduse = 0;
    while(produse_introduse<produse_existente)
    {
        std::cout << "Introduceti pretul: ";
        std::cin >> pret_produs;
        reducere_produs = pret_produs * reducere / 100;
        std::cout << "Reducerea este: " << reducere_produs << std::endl;
        produse_introduse++;
    }



    //Exercitiul 4
    int num = 0 ;
    std::cout<< "Multipli de 3 sunt: " << std::endl;
    while(num <=20)
    {
    if(num%3==0)
    {
        std::cout << num << std::endl;
    }
    num+=1;
    }


    return 0;
}