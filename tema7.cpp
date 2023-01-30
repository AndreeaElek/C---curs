#include <iostream>
#include <string>
#include <cstdlib> 


    //Exercitiul 2
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
    int m_array[3][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}   
    };  

    //varianta 1
    int i=2, j=0, suma=0;
    while(i>=0 && j<=2)
    {
        suma += m_array[i][j];
        i--;
        j++;
    }

    std::cout << "Suma pe diagonala secundara este: " << suma << std::endl;

    //varianta 2
    suma = 0;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            if ((i + j) == 2)
                suma += m_array[i][j];
        }
    }

    std::cout << "Suma pe diagonala secundara este: " << suma << std::endl;


        //Exercitiul 2
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


        //Exercitiul 3
    int nr_inregistrari, valoarea_apropriata, valori[50];
    std::cout << "Intruduceti numarul de temperaturi: ";
    std::cin >> nr_inregistrari;
    for(i=0; i<nr_inregistrari; i++)
    {
       std::cout << "Intruduceti valoarea " << i << ": ";
       std::cin >> valori[i];
    }
    valoarea_apropriata = valori[0];
    for(i=0;i <nr_inregistrari; i++)
    {
        if(abs(valori[i]) < abs(valoarea_apropriata))
        {
            valoarea_apropriata = valori[i];
        }
        else if(abs(valori[i]) == abs(valoarea_apropriata) && (valori[i] > valoarea_apropriata))
        {
            valoarea_apropriata = valori[i];
        }
    }
    std::cout << "Temperatura cea mai apropiata de 0 este: " << valoarea_apropriata << std::endl;


    return 0;
}