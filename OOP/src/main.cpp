// #include <iostream>
#include "ContBancar.h"
#include "Bicicleta.h"
#include "Car.h"
#include "TV.h"
#include "Person.h"

void print()
{
    std::cout << "Hello from a function!!" << std::endl;
}

class myClass
{
public:
    void printHello()
    {
        std::cout << "Hello from my Class!!" << std::endl;
    }
};


enum zile 
{
    Luni =1,
    Marti,
    Miercuri,
    Joi,
    Vineri = 25,
    Sambata,
    Duminica
};

ContBancar* CreateAccount()
{
    std::cout << "Introduceti numele utilizatorului de cont \n";
    std::string nume;
    std::cin >> nume;
    std::cout << "Introduceti valoarea sold-ului initial: \n";
    int sold;
    std::cin>> sold;
    //ContBancar cont(nume, sold, "iban", 10);

    //operatoru new este folosit pentru a instantia pe heap
    //tip pointer numeObiect = new Obiect
    ContBancar* cont = new ContBancar(nume, sold, "iban",10);

    return cont;
}

/* TEMA
Creeati programe ce salveaza TV-uri cu lungimeea in inalimea lor
Programul trebuie sa declare o classa TV ce au membri height and widh , o metoda arie() ce calculeaza aria si un construcotr ce initializaza mebrii clasei */

int main(int argc, char const *argv[])
{
    ContBancar* cont = CreateAccount();
    //folosim operatorul sageata cand avem nevoie de acces la metode printr-un pointer
    std::cout << "Numele utilizatorului este: " << cont->getNume() << std::endl;
    delete cont; //operatorul delete va chema destructorul obiectului si va sterge obiectul de pe heap
    //std::cout << "Numele utilizatorului este: " << cont->getNume() << std::endl;  //dangeling pointers



    zile azi;
    zile maine;

    azi = Marti;
    std::cout<< "Azi este (v1): " <<  azi << std::endl;
    azi = (zile) 1;
    std::cout<< "Azi este (v2): " <<  azi << std::endl;

    //_________________________________________________________________________________________________________________________________


    ContBancar c1("Elek", 50, "Ana", 5);
    c1.printDetails();

    // c1.setNume("Popistas");
    // std::cout << "Numele utilizatorului c1 este: " << c1.getNume() << std::endl;
    // c1.set_sold(120);
    // std::cout << "Soldul utilizatorului c1 este: " << c1.get_sold() << std::endl;

    // c1.set_iban("ACBI123");
    // std::cout << "IBAN-ul utilizatorului este: " << c1.get_iban() << std::endl;

    // c1.setNume("El12");

    // c1.setNume("Elek");

    // c1.printDetails();

    /*ContBancar c2;
    c2.setNume("Cunea");*/
    //_______________________________________________________________________________________________________________________________

    std::cout << "Hello World!" << std::endl;

    myClass obiect; // instantiem un obiect de tip my class

    print();
    obiect.printHello(); // invocam metoda printHello

    myClass obj2;
    obj2.printHello();

    //_______________________________________________________________________________________________________________________________

    Bicicleta bicicleta1;
    bicicleta1.set_tip_cadru("otel");
    std::cout << "Tip de cadru: " << bicicleta1.get_tip_cadru() << std::endl;
    bicicleta1.set_dimensiune_roti(24.5);
    std::cout << "Dimensiune roti: " << bicicleta1.get_dimensiune_roti() << std::endl;
    bicicleta1.set_nr_viteze(6);
    std::cout << "Numar de viteze: " << bicicleta1.get_nr_viteze() << std::endl;
    std::cout << "Viteza: " << bicicleta1.get_viteza() << std::endl;
    bicicleta1.franeaza();
    std::cout << "Viteza dupa franare: " << bicicleta1.get_viteza() << std::endl;
    bicicleta1.accelereaza();
    std::cout << "Viteza dupa accelerare: " << bicicleta1.get_viteza() << std::endl;
    bicicleta1.accelereaza();
    std::cout << "Viteza dupa accelerare: " << bicicleta1.get_viteza() << std::endl;
    bicicleta1.franeaza();
    std::cout << "Viteza dupa franare: " << bicicleta1.get_viteza() << std::endl;

    //_______________________________________________________________________________________________________________________________

    Car Janet(100, "Gri", 2015, 5);
    Janet.printCarInfo();
    Janet.drive(100);
    Janet.printCarInfo();

    //___________________________________________________________________________________________________________________________________

    // Tema:
    // O clasa ce abstractizeaza Ziua de nastere. ( trebuie sa aibe an, zi si luna(luna sa fie string)) si o clasa Persoana ce are un nume, prenume si o Zi de nastere.
    // Clasa persoana sa aibe o metoda de a afla cati ani are in momentul in care metoda este invocata(puncte in plus daca pe langa a calcula ani faceti si mai detaliat, gen secunde , minute zile)

    ContBancar c2("Elek", 50, "iban", 5);
    c2.printDetails();
    ContBancar c3;
    c3.printDetails();

    TV tv1;
    std::cout << "Arie tv: " << tv1.arieTV() << std::endl;
    TV tv2(23.5, 12.0);
    std::cout << "Arie tv: " << tv2.arieTV() << std::endl;

    Birthday b1(2000, "January", 14);
    Person p1("Elek", "Andreea", b1);
    p1.calculateAge();


    //___________________________________________________________________________________________________________________________




    return 0;
}


