#include <iostream>
#include <string>
#include <vector>

void foo()
{
    int a;
}

void printUsers (std::vector<std::string> users)
{
    for(int i = 0; i < users.size(); i++)
    {
        std::cout << users[i] << std::endl;
        std::cout << users.at(i) << std::endl;
    }
}


int main()
{
    //sintaza pentru vector este std::vector<tipData> nume_vector; 
    std::vector<int> lista;
    lista.push_back(10);
    std::cout << "Dimensiunea listei este: " << lista.size() << std::endl;
    std::cout << "Capacitatra listei mele ste: " << lista.capacity() << std::endl;
    lista.push_back(10);
    std::cout << "Dimensiunea listei este: " << lista.size() << std::endl;
    std::vector<std::string> utilizatori;
    utilizatori.push_back("Sergiu");
    utilizatori.push_back("Andrei");
    printUsers(utilizatori);
    utilizatori.push_back("Stefan");
    printUsers(utilizatori);

    utilizatori.pop_back();
    printUsers(utilizatori);

    std::string nume = "Sergiu";
    nume = "Andreea";
    for(int i = 0; i < nume.size(); i++)
    {
        std::cout << nume[i] << std::endl;
        std::cout << nume.at(i) << std::endl;
    }

    std::vector<char> numeSimilar;

    int a;


    //sinteza pt un multi array este tipul de data [d1 size] [d2 size] ... [dn size]
    int m_array[3][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}   
    };  

    std::cout << m_array[0][0] << std::endl;

    int suma_diagonala;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                suma_diagonala += m_array[i][j];
            }
        }
    }
    std::cout << "Suma pe diagonla este: " << suma_diagonala << std::endl;

    int suma_diagonala2 = 0;
    for(int i=0; i <3; i++)
    {
        suma_diagonala2 += m_array[i][i];
    }

    std::cout << "Suma pe diagonla este: " << suma_diagonala2 << std::endl;

    int x[2][3] = 
    {
        {2,3},
        {8, 9, 10}
    };


    /*
        TEMA

        //Ex 1
    De calculat suma pe diagonala secundara a matricei m_array


    //Ex2
    + tema cu password checker 


        //Ex3
    Oamenii de stiinta au nevoie de ajutor pentru a combate incalzirea globala.
    In acest exerctiu trebuie sa analizati inregistrarile temperaturilor si sa o gasititi pe cea mai apropiata de 0
    Reguli:
    Scrieti un program ce sa printeze temperatura cea mai apropiata de 0 din datele primite. 
    Daca doua numere sunt la o distanta egala spre 0.Numarul intreg pozitiv va fi considerat cel mai aproape
    (de exemplu, daca temperatura este -5 si 5,afisati 5).
    In caz de temp 0  se va printa 0
    Input:
    Linia 1: Veti primi numarul de inregistrai cu temperaturi
    Linia 2: Veti primi inregistraile cu valori.
    Ex
    Input:
    5
    1 -2 -8 4 5
    Output:
    1

    Input:
    3
    -12 -5 -137
    Output:
    -5

    Input:
    6
    42 -5 12 21 5 24
    Output:
    5

    
    */

    return 0;
}