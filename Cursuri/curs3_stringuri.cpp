#include <iostream>
#include <string>


void printeaza_nume(std::string nume)
{
    std::cout << "Salut. ma cheama " << nume << std::endl;
}

int suma(int a, int b)
{
    int rezultat = a + b;
    //printeaza_nume("Andreea");
    return rezultat;
}

int main()
{
    std::cout << "Cum te cheama?" << std::endl;
    std::string numeFunc;
    std::getline(std::cin, numeFunc);
    printeaza_nume(numeFunc);
    std::cout << "Suma este: " << suma(2,3) << std::endl;

    // char nume = 'S';
    // char n1 = 'e';
    // char n2 = 'r';

    // std::cout << nume + n1 + n2 << std::endl;;

    std::string nume = "Elek";
    std::string prenume = "Andreea";
    std::string nume_complet = nume + " " + prenume;
    std::cout << nume_complet << std::endl;
    std::cout << "Numarul de caractere in variabila nume este: "<< nume.size() << std::endl;
    std::cout << "Numarul de caractere in variabila nume este: "<< nume.length() << std::endl;
    bool isEmpty = nume.empty();
    std::cout << prenume[0] << std::endl;
    prenume[0] = 'N';
    std::cout << prenume << std::endl;

    std::string input_nume_complet;
    //std::cin>>input_nume_complet;
    std::getline(std::cin, input_nume_complet);  // getline -> cand vrem sa luam mai multe input-uri
    //std::cin.ignore(); //-> in caz de probleme cu terminalul
    std::cout << input_nume_complet << std::endl;


    /*
    TEMA
    O functie ce face conversia de la minute la secunde 
    O functie ce sa returneze restul impartirii a 2 numere
    
    */

    return 0;
}