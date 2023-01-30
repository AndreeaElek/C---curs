#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, int sold, std::string iban, int const_var):
    m_nume(nume),
    m_sold(sold),
    constVar(const_var)
{
    m_iban = generateIBAN();
    std::cout << "Un cont a fost creat \n" << std::endl;
}

ContBancar::ContBancar():m_nume("NECUNOSCUT"), m_sold(0), constVar(5)
{
    m_iban = generateIBAN();
}

ContBancar::~ContBancar()
{
    std::cout << "Un cont a fost sters \n" << std::endl;
}

void ContBancar::setNume(std::string nume)
{
    //tema: implementati un check in care nume sa fie doar caractere(litere) latine 
    int n_lenght = nume.length();
    bool onlyLetters=true;
    for(int i=0; i< n_lenght; i++)
    {
        if(! ((nume[i]>='A' && nume[i]<='Z') || (nume[i]>='a' && nume[i]<='z')) )
        {
            onlyLetters = false;
        }
    }
    if(onlyLetters)
    {
        m_nume=nume;
    }
    else
    {
        std::cout << "ERROR numele trebuie sa contina doar litere din alfabetul latin" << std::endl;
    }
}

void ContBancar::set_sold(int sold)
{
    if(sold<0)
    {
        std::cout << "ERROR soldul initial trebuie sa fie mai mare de 0 \n";
    }
    else
    {
        m_sold=sold;
    }
}

void ContBancar::set_iban(std::string m_iban)
{
    this->m_iban = m_iban;
}

void ContBancar::printDetails()
{
    std::cout << "Name:" << m_nume << std::endl;
    std::cout << "Sold: " << m_sold << std::endl;
    std::cout << "IBAN: " << m_iban << std::endl;
}

//metoda/functie de generare o cifra random
int ContBancar::getRandNumber()
{
    int numbersVector[10] = {0,1,2,3,4,5,6,7,8,9};
    int random = rand() % 10;
    int selected_number = numbersVector[random];
    return selected_number;
}

//metoda de generat IBAN
std::string ContBancar::generateIBAN()
{
    std::string iban="ROITSCHOOl";
    
    //se adauga 15 cifre random la stringul obigatoriu din IBAN
    for(int i=0; i<15; i++)
    {
        int number=getRandNumber();
        std::string numberString = std::to_string(number);
        iban = iban + numberString;
    }

    return iban;
}




