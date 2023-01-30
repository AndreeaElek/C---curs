#include "Tema8.h"

std::string changeWord(std::string& word)
{
    char primaLitera = word[0];
    for(int i= 0; i< word.length()-1; i++)
    {
        word[i]=word[i+1];
    }
    word[word.length()-1] = primaLitera;
    add_ay(word);
    return word;
}