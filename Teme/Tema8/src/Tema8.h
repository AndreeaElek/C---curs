#ifndef __TEMA8_H__
#define __TEMA8_H__

#include <iostream>
#include <string>
#include <vector>

//fuctie pentru afisarea numerelor dintr-un vector
void printNumbersInVector (std::vector<int> numbers);

//functie pentru a elimina dubicatele dintr-un vector
std::vector<int> removeDuplicates (std::vector<int> vector_with_duplicates);

//functie pentru a concatena "ay" la sfarsitul unui cuvant
void add_ay(std::string & ref);

//functie pentru a muta prima litera a unui cuvant la sfarsitul cuvantului
std::string changeWord(std::string& word);

//functie pentru a modifica fiecare cuvant al unei propozitii
std::string changeSentence(std::string& sentence);

//functie pentru a afisa inversul unui string (varianta 1)
std::string reverseString1(std::string & stringToReverse); 

//functie pentru a afisa inversul unui string (varianta 2)
std::string reverseString2(std::string & stringToReverse); 


#endif // __TEMA8_H__