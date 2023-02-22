#include <iostream>
#include <string>
#include <vector>


    //Exercitiul 1

void printNumbersInVector (std::vector<int> numbers)
{
    for(int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers.at(i) << " ";
    }
    std::cout << std::endl;
}

std::vector<int> removeDuplicates (std::vector<int> vector_with_duplicates)
{
    std::vector<int> vector_without_duplicates;
    bool duplicate = false;

    for(int i = 0; i < vector_with_duplicates.size(); i++)
    {
        for(int j=0; j < vector_without_duplicates.size(); j++)
        {
            if(vector_with_duplicates.at(i) == vector_without_duplicates.at(j))
            {
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
        {
            vector_without_duplicates.push_back(vector_with_duplicates.at(i));
        }
        duplicate = false;
    }

    return vector_without_duplicates;
}


    //Exercitiul 2
void add_ay(std::string & ref)
{
    ref += "ay";
}

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


    //Exercitiul 3
        //Varianta 1
    std::string reverseString1(std::string & stringToReverse) 
    {
        std::string reversedString=stringToReverse;
        int j=stringToReverse.length()-1;
        for(int i=0; i<stringToReverse.length(); i++)
        {
            reversedString[j] = stringToReverse[i];
            j--;
        }

        return reversedString;
    }

        //Varianta 2
    std::string reverseString2(std::string & stringToReverse) 
    {
        std::string reversedString = "";
        for(int i=stringToReverse.length()-1; i>= 0; i--)
        {
            reversedString += stringToReverse[i];
        }

        return reversedString;
    }



int main()
{
        //Exercitiul 1
    
    bool add_input=true;
    char answer; 
    int number;
    std::vector<int> inputed_vector;
    std::cout << "Input a number: ";
    std::cin >> number;
    inputed_vector.push_back(number);

    while(add_input)
    {
        std::cout << "Would you like to input another number?" << std::endl;
        std::cout << "y-> yes |  n -> no" << std::endl; 
        std::cin >> answer;
        if(answer == 'y') 
        {
            add_input = true;
            std::cout << "Input a number: " << std::endl;
            std::cin >> number;
            inputed_vector.push_back(number);
        }
        else if(answer == 'n')
        {
            add_input = false;
        }
        else
        {
            add_input = true;
            std::cout << "Invalid input" << std::endl; 
        }
    }

    std::cout << "The inputed vector is: "; 
    printNumbersInVector(inputed_vector);
    std::cout << "The vector without dublicates is: "; 
    printNumbersInVector(removeDuplicates(inputed_vector));


        //Exercitiul 2
    std::string sentence;
    std::cin.ignore();
    std::cout << "Input a sentence: ";
    std::getline(std::cin, sentence);

    std::cout<<"The sentence in the orca language is: " << changeSentence(sentence) << std::endl; 


        //Exercitiul 3
    std::string stringToReverse;
    std::cout << "Input a string to reverse: ";
    std::getline(std::cin, stringToReverse);

    std::cout<<"The reversed string (in version 1) is: " << reverseString1(stringToReverse) << std::endl; 
    std::cout<<"The reversed string (in version 2) is: " << reverseString1(stringToReverse) << std::endl;

    return 0;
}