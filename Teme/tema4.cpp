#include <iostream>
#include <string>

//Exercitiul 4
bool verificareParola(std::string parola)
{
    const int minimumLength = 12;
    bool hasSpecialCharacter = false, hasCapitalLetter = false, hasNumber = false, passwordIsValid = false;
    if(parola.length() >= minimumLength)
    {
        for(int i=0; i<parola.length(); i++)
        {
            //Verificam daca caracterul curent este numar
            if(int(parola[i]) >= 48 && int(parola[i]) <= 57) 
            {
                hasNumber = true;
            }
            //Verificam daca caracterul curent este litera mare
            else if (int(parola[i]) >= 65 && int(parola[i]) <= 90)
            {
                hasCapitalLetter = true;
            }
            //Verificam daca caracterul curent este caracter special (daca nu este litera mica)
            else if(int(parola[i]) < 97 || int(parola[i]) > 122)
            {
                hasSpecialCharacter = true;
            }
        }
        if (hasNumber && hasCapitalLetter && hasSpecialCharacter)
        {
            passwordIsValid = true;
        }
    }
    return passwordIsValid;
}

int main()
{
    //Exercitiul 1
    int varsta;
    const int max_varsta_gratis = 7;
    std::cout << "Introduceti varsta: ";
    std::cin >> varsta;
    if(varsta < max_varsta_gratis) 
    {
        std::cout << "Intrare gratis" << std::endl;
    }
    else
    {
        std::cout << "Intrare cu taxa" << std::endl;
    }


    //Exercitiul 2
    float nota_primita;
    const float nota_minima_necesara = 8.00;
    std::cout << "Introduceti nota primita: ";
    std::cin >> nota_primita;
    if(nota_primita >= nota_minima_necesara)
    {
        std::cout << "ADMIS" << std::endl;
    }
    else
    {
        std::cout << "RESPINS" << std::endl;
    }


    //Exercitiul 3
    int tip_cafea;
    std::cout << "Alege tipul de cafea: ";
    std::cin >> tip_cafea;
    switch(tip_cafea)
    {
        case 1:
            std::cout << "Late" << std::endl;
            break; 
        case 2:
            std::cout << "Americano" << std::endl;
            break; 
        case 3:
            std::cout << "Esspreso" << std::endl;
            break; 
        case 4:
            std::cout << "Cappucino" << std::endl;
            break; 
        case 5:
            std::cout << "Machiato" << std::endl;
            break; 
        default:
            std::cout << "Valoarea introdusa nu este valida" << std::endl;
            break; 
    }


    //Exercitiul 4
    std::string parola;
    std::cout << "Introduceti parola: ";
    std::cin.ignore();
    std::getline(std::cin, parola);
    if(verificareParola(parola))
    {
        std::cout << "Parola valida" << std::endl;
    }
    else
    {
        std::cout << "Parola invalida" << std::endl;
    }
 

    return 0;
}