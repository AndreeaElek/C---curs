#include <iostream>

struct Point
{
    //pentru initializare
    Point(int x, int y)
    {
        x_coord = x;
        y_coord = y;
    }

    int x_coord;
    int y_coord;

    void goLeft()
    {
        x_coord--;
    }
    void goRight()
    {
        x_coord++;
    }
    void goUp()
    {
        y_coord++;
    }
    void goDown()
    {
        y_coord--;
    }

    void printCoord()
    {
        std::cout << "Coordonatele sunt:" << x_coord << ", " << y_coord << std::endl;
    }
};

int main()
{
    //Point p1;
    //p1.x_coord = 10;
    //p1.y_coord = 20;
    Point p1(10, 20);
    p1.printCoord();
    std::cout << "Coordonatele puntului 1 sunt: " << p1.x_coord << ", " << p1.y_coord << std::endl;
    p1.goDown();
    p1.goLeft();
    p1.printCoord();



    /*int x1, y1;
    x1 = 10;
    y1 = 20;
    std::cout << "Coordonatele puntului 1 sunt: " << x1 << ", " << y1 << std::endl;
    */

    //Point p2;
    //p2.x_coord = 30;
    //p2.y_coord = 40;
    Point p2(30, 40);
    std::cout << "Coordonatele puntului 2 sunt: " << p2.x_coord << ", " << p2.y_coord << std::endl;
    p2.printCoord();

    p1.x_coord = 50;
    p1.y_coord = 60;
    std::cout << "Coordonatele puntului 1 nou sunt: " << p1.x_coord << ", " << p1.y_coord << std::endl;


        //TEMA
    /*
            //Exercitiul 1
        O fucntie ca sa verifice daca un string este un palindrom sau nu

            //Exercitiul 2 (HINT: Use math)
        //check if a word can be reanged to be a palindrom: (Game Of Thrones problem)
            --Game of Thrones--
        Dothraki plănuiesc să usurpe tronul Regelui Robert. Regele Robert aude de această conspirație de la un raven și plănuiește să încuie singura ușă prin care inamicul poate să pătrundă în regat lui.
        Dar această ușă are nevoie de o cheie care este reprezentată de către anagrama unui palindrom. începe să caute în cutia lui de șiruri de caractere, verificând pe fiecare în parte dacă poate fi rearanjat într-un palindrom.
            Cerință:
        Pentru un șir de caractere, să se tipărească pe ecran cuvântul DA sau NU dacă acest șir poate fi rearanjat astfel încât să fie un palindrom.
            Constrangeri:
        Poate fi folosite doar caractere din alfabetul latin cu litere mici
            Date de intrare:
        Șirul de caractere.
                Exemplu:
            INPUT:
        aaabbbb
            OUTPUT:
        DA
    */

    return 0;
}