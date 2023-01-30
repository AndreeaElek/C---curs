#include "Tema8.h"

std::string changeSentence(std::string& sentence)
{
    std::string newSentence="";
    std::string word="";
    std::string newWord="";
 
    for(int i=0; i<=sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            word += sentence[i];
        }
        else
        {
            newWord = changeWord(word);
            newSentence = newSentence + newWord + " ";
            word="";
        }
 
    }
    newWord = changeWord(word);
    newSentence = newSentence + newWord + " ";
 
    return newSentence;
}