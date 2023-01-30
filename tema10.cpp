#include <iostream>
#include <string>

    //EXERCITIUL 1 (verifica daca un cuvant este palindorm)
//functie pentru a inversa un cuvant(string)
std::string reverseString(std::string stringToReverse)
{
    std::string reversedString = ""; //intializam o valiabila goala pentru a memora inversul cuvantului
    //se parcurge cuvantul de la sfarsit la inceput (de la ultimul caracter pana la primul)
    for (int i = stringToReverse.length() - 1; i >= 0; i--)
    {
        //fiecare caracter ar cuvantului se concateneaza la variabila cuvantului inversat
        reversedString += stringToReverse[i];
    }

    //se returneaza cuvantul inversat
    return reversedString;
}

//functie pentru a verifica daca un cuvant este palindrom
bool checkIfWordIsPalindrom (std::string word)
{
    //initalizam o variablica care memeoreaza daca un cuvant este palindrom ca find falsa (presupunem ca cuvantul nu este palindrom)
    bool isPalindrom = false;
    
    //verificam daca cuvantul si inverul cuvantului sunt identice
    if(word == reverseString(word))
    {
        //daca da, atunci cuvantul este palidrum
        isPalindrom = true;
    }

    //returnam variabile isPalidrom (adica variabila ce ne indica daca cuvantul este sau nu palindorm) 
    return isPalindrom;
    
}

    //EXERCITIUL 2 (verifica daca un cuvant poate fi palindrom)

//functie care verifica daca exista doar litere mici in cuvant
bool checkIfOnlySmallLetters(const std::string & word) 
{
    const int wordLength = word.length();
    for (int i = 0; i < wordLength; i++)
    {
        if (word[i] < 'a' || word[i] > 'z')
        {
            // In cazul in care a fost gasit un caracter nepermis, se afiseaza un mesaj de eroare si se iese din functie folosind return (se considera ca cuvantul nu este palindrom)
            std::cout << "Incorrect character found!!" << std::endl
                      << "The word should only contain small letters." << std::endl;
            return false;
        }
    }
    return true;
}

// functie pentru a verifica daca un cuvant poate fi palindrom
bool checkIfWordCanBePalindrom(std::string word)
{
    // initalizam o variablica care memeoreaza daca un cuvant poate fi palindrom ca find falsa (presupunem ca cuvantul nu poate fi palindrom)
    bool canBePalindrom = false;
    // initializam vectori care memoreaza: lungimea cuvantului (wordLength), cate grupe impare de numere exista(evenLettersNrCount), cate grupe pare de numere exista (oddLetterNrCount), de cata ori apara o anumita litera in cuvant (letterCount)
    const int wordLength = word.length(); 
    int evenLettersNrCount = 0, oddLetterNrCount = 0, letterCount = 0;

    // Se parcurge cuvantul folosind "for" si se verifica daca apare un alt tip de caracter decat litere mici (!Cuvantul trebuie sa contine doar litere mici)

    if (checkIfOnlySmallLetters(word))
    {
        // folosim doua bucle for pentru a cauta fiecare litera mica in cuvant
        // primul "for" parcurge alfabetul (cauta pe rand fiecare litera mica in cuvant)
        for (char j = 'a'; j <= 'z'; j++)
        {
            // al doilea for este folosit pentru a compara fiacare litera din cuvant cu litera cautata
            for (int i = 0; i < wordLength; i++)
            {
                // daca litera este gasita in cuvant, variabila de memorare a numarului de aparitii este incrementata
                if (word[i] == j)
                {
                    letterCount++;
                }
            }
            // daca litera a fost gasita in cuvant cel putin o data
            if (letterCount != 0)
            {
                // daca litera apare de un numar par de ori, atunci este incrementata variablila corespunzatoare aparitiilor pare (evenLettersNrCount)
                if (letterCount % 2 == 0)
                {
                    evenLettersNrCount++;
                }
                // altfel, daca litera apare de un numar impar de ori, atunci este incrementata variablila corespunzatoare aparitiilor impare (oddLettersNrCount)
                else
                {
                    oddLetterNrCount++;
                }
            }
            // variabila de memorare a numarului de aparitii este resetata (redevine 0)
            letterCount = 0;
        }

        // se verifica daca criteriile ca un cuvant sa poate fi palindrom sunt indeplinite la una dintre variante:
        // Daca cuvantul are un numar par de litere SI toate literele apar de un nr par de ori (nu exita litere care apar de un numar impar de ori)
        // SAU
        // Daca cuvantul are un numar impar de litere SI exista o singura literea care apare de un numar impar de ori
        if ((wordLength % 2 == 0 && oddLetterNrCount == 0) || (wordLength % 2 == 1 && oddLetterNrCount == 1))
        {
            canBePalindrom = true;
        }

        // returnam variabile canBePalidrom (adica variabila ce ne indica daca cuvantul poate fi palindrom sau nu poate fi palindorm)
    }
    return canBePalindrom;
}

int main()
{
        //EXERCITIUL 1
    //Initializam varibila de memorare a unui cuvant
    std::string word;
    //cerem utilizatorului sa introduca un cuvant
    std::cout << "Input a word: " << std::endl;
    //memoram cuvantul
    std::getline(std::cin,word); 
    //verificam daca cuvantul este palindrom utilizand functia de verificare "checkIfWordIsPalindrom" si afisam mesajul corespunzator
    if(checkIfWordIsPalindrom(word))
    {
        std::cout << "The world is a palindrome" << std::endl;
    }
    else
    {
        std::cout << "The world is not a palindrome" << std::endl;
    }


        //EXERCITIUL 2
    //cerem utilizatorului sa introduca un cuvant
    std::cout << "Input a word: " << std::endl;
    //memoram cuvantul
    std::getline(std::cin,word); 
    //verificam daca cuvantul poate fi palindrom utilizand functia de verificare "checkIfWordCanBePalindrom" si afisam mesajul corespunzator
    if(checkIfWordCanBePalindrom(word))
    {
        std::cout << "DA" << std::endl;
    }
    else
    {
        std::cout << "NU" << std::endl;
    }

    return 0;
}