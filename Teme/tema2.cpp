#include <iostream>

int main()
{
    //Exercitiul 1
    int a, b, suma;
    std::cout << "Introuduceti primul numar: ";
    std::cin >> a; 
    std::cout << "Introuduceti al doilea numar: " ;
    std::cin >> b;
    suma = a + b;
    std::cout << "Suma celor doua numere numerelor este: " << suma << std::endl; 


    //Exercitiul 2
    const int pesti_necesari_ciorba=3;
    int pesti_disponibili, ciorbeTrio;
    std::cout<<"Introduce numarul de pesti disponibili: ";
    std::cin>>pesti_disponibili;
    ciorbeTrio = pesti_disponibili / pesti_necesari_ciorba;
    std::cout<<"Se pot obtine " << ciorbeTrio << " ciorbe Trio" << std::endl; 

    //Exercitiul 3
    int suma_totala, suma_retrasa, suma_ramasa;
    std::cout << "Introduceti suma existenta in cont: ";
    std::cin>>suma_totala;
    std::cout << "Introduceti suma pe care doriti sa o scoateti: ";
    std::cin>>suma_retrasa;
    suma_ramasa = suma_totala - suma_retrasa;
    std::cout << "Suma ramasa in cont este: " << suma_ramasa << std::endl;


    return 0;
}