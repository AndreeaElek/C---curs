#include<iostream>

int main()
{
    const float PI = 3.14;
    const int an_curent = 2022;
    int nume_var=-1;
    std:: cout << "Valoarea variabilei este: " << nume_var << std::endl;
    //nume_var = 10;
    //std::cout << "Introduceti un numar intreg: ";
    //std::cin >> nume_var;
    //std:: cout << "Valoarea variabilei este: " << nume_var << std::endl;
    nume_var = 150;
    std::cout << "Valoarea variabilei modificate este: " << nume_var << std::endl;

    int var1,var2;
    var1 = 5;
    var2 = 3;
    float var3,var4;
    var3=5;
    var4=3;

    int sum = var1 + var2;
    int inmultire = var1 * var2;

    float impartire = var3 / var4;
    int rest = 4%2;
    std::cout << "Rest este: " << rest << std::endl;

    std::cout << "Suma este: " << sum << std::endl;
    std::cout << "Inmultirea este: " << inmultire << std::endl;
    std::cout << "Impartirea este: " << impartire << std::endl;




    std::cout << "Size of char is: " << sizeof(char) << " bytes" << std::endl; 
    std::cout << "Size of int is: " << sizeof(int) << " bytes" << std::endl; 
    std::cout << "Size of short int is: " << sizeof(short int) << " bytes" << std::endl; 
    std::cout << "Size of long int is: " << sizeof(long int) << " bytes" << std::endl; 
    std::cout << "Size of signed long int is: " << sizeof(signed long int) << " bytes" << std::endl; 
    std::cout << "Size of unsigned long int is: " << sizeof(unsigned long int) << " bytes" << std::endl; 
    std::cout << "Size of float is: " << sizeof(float) << " bytes" << std::endl; 
    std::cout << "Size of double is: " << sizeof(double) << " bytes" << std::endl; 
    std::cout << "Size of wchar_t is: " << sizeof(wchar_t) << " bytes" << std::endl; 

    /*Tema: continuati cu ce mai este in prezentare*/
    /*
    Tema: pe discord
    cand e gata -> upload tema pe pastebin si trimis pe discord 

    1.Creati un program sa va intrebe ce varsta aveti si sa va printeze pe ecran.
    Ex:
    Ce varsta aveti?
    30
    Super, ai 30 de ani
        
    2.Creati un program ce sa va intrebe in ce an v-ati nascut si sa printeze pe ecran ce varsta aveti.

    Ex:
    In ce an v-ati nascut?
    1991
    Super, aveti 31 de ani

    */

    char Nume = 'a';
    char Nume2 = 'b';

   bool isValid = 5<3;
   bool isValid2 = 5 == 5;
   bool isCharValid = Nume == Nume2;
   std::cout << (5 > 3) << std::endl;

   int a = 5;
   int c= a++;
   std::cout << c << std::endl;
   std::cout << "Valoarea lui a este: " << a <<std::endl;
   a++;
   std::cout << "Valoarea lui a este: " << a <<std::endl;
   a--;
   std::cout << "Valoarea lui a este: " << a <<std::endl;

   bool b1= true;
   bool b2 = false;
   bool b3 = b1 && b2;

   /*
   TEMA
    //EX 1
   Scrieti un program ce accepta 2 numere ca input si assignati valorile lor unor variabile a si b dupa care sa se printeze o variabila suma.

     //EX2
    Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti 
    ca sa pregatesti o ciorba de peste numita Trio
    Scrieti un program ce va lua un input de numar de pesti si sa se printeze cate ciorbe trio se pot obtine.

    ExInput: 14
    ExOutput:4

     //EX3
    Vrei sa retragi  niste bani din contul tau bancar.
    Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei sa o scoti.
    Calculati si prinati cat ramane in contul tau dupa retragere.

    Input:
    450000
    9000
    Output:
    441000
   */



    return 0;
}