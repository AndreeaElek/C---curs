#include "Person.h"

Person::Person(std::string lastName, std::string firstName, Birthday birthday):
    m_lastName(lastName),
    m_firstName(firstName),
    m_birthday(birthday)
    {}

Person::~Person(){}

//metoda pentru trnsformarea luni de nastere din string in int
int Person::transformMonth(std::string month)
{
    int nr_month;
    if((month=="Jan") || (month == "jan") || (month == "January") || (month == "january"))
    {
        nr_month = 1;
    }
    else if((month=="Feb") || (month == "feb") || (month == "February") || (month == "february"))
    {
        nr_month = 2;
    }
    else if((month=="Mar") || (month == "mar") || (month == "March") || (month == "march"))
    {
        nr_month = 3;
    }
    else if((month=="Apr") || (month == "apr") || (month == "April") || (month == "april"))
    {
        nr_month = 4;
    }
    else if((month=="May") || (month == "may"))
    {
        nr_month = 5;
    }
    else if((month=="Jun") || (month == "jun") || (month == "June") || (month == "june"))
    {
        nr_month = 6;
    }
    else if((month=="Jul") || (month == "jul") || (month == "July") || (month == "July"))
    {
        nr_month = 7;
    }
    else if((month=="Aug") || (month == "aug") || (month == "August") || (month == "august"))
    {
        nr_month = 8;
    }
    else if((month=="Sep") || (month == "sep") || (month == "September") || (month == "september"))
    {
        nr_month = 9;
    }
    else if((month=="Oct") || (month == "oct") || (month == "October") || (month == "october"))
    {
        nr_month = 10;
    }
    else if((month=="Nov") || (month == "nov") || (month == "November") || (month == "november"))
    {
        nr_month = 11;
    }
    else if((month=="Dec") || (month == "dec") || (month == "December") || (month == "december"))
    {
        nr_month = 12;
    }
    return nr_month;
    
}


// metoda care calculeaza si afiseaza varta unei persone (ani, luni si zile)
void Person::calculateAge()
{
    //initializam variabile pentru ziua, luna si anul nasterii, ziua, luna si anul curent si anii, lunile si zile care indica varsta unsei persoane
    int pd, pm, py, bd, bm, by, d, m, y;
    int md[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    //aflam datele referitoare la timpul actual
    time_t now = time(0);
    tm *ltm = localtime(&now);

    //atribuim valorile adecvate variabilelor
    py = 1900 + ltm->tm_year;
    pm = 1 + ltm->tm_mon;
    pd = ltm->tm_mday;
    by = m_birthday.getYear();
    bm = transformMonth(m_birthday.getMonth());
    bd = m_birthday.getDay();

    //aflam varsta personei in ani
    y = py - by;

    //aflam varsta personei in luni
        //daca luna curenta este inaintea lunii nasterii
    if (pm < bm)
    {
        y--;
        m = 12 - (bm - pm);      
    }
        //daca ne aflam in luna nasterii, iar ziua actuala este inaitea zilei nasterii
    else if((pm == bm) && (pd < bd))
    {
        y--;
        m = 11;
    }
    else
    {
        m = pm - bm;
    }
    //aflam varsta persoanei in zile
        //daca ne aflam in luna nasterii, iar ziua actuala este dupa ziua nasterii sau aceasi cu ziua nasterii
    if((pm == bm) && (pd >= bd))
    {
        d = pd - bd;
    }
        //daca ne aflam in luna februarie, a unui an bisect
    else if ((pm == 3) && (py % 4 == 0))
    {
        d = ((md[pm-2] + 1) - bd) + pd;
    }
        //daca ne aflam in luna ianuarie
    else if (pm == 1)
    {
        d = (md[11] - bd) + pd;
    }
        //daca ne aflam in orice alta luna
    else
    {
        d = (md[pm-2] - bd) + pd;
    }

    std::cout << m_lastName << " " << m_firstName << " is " << y << " years, " << m << " months and " << d << " days old." << std::endl;
}