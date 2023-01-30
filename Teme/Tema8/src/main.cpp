#include "Tema8.h"

int main(int argc, char const *argv[])
{
        // Exercitiul 1

    bool add_input = true;
    char answer;
    int number;
    std::vector<int> inputed_vector;
    std::cout << "Input a number: ";
    std::cin >> number;
    inputed_vector.push_back(number);

    while (add_input)
    {
        std::cout << "Would you like to input another number?" << std::endl;
        std::cout << "y-> yes |  n -> no" << std::endl;
        std::cin >> answer;
        if (answer == 'y')
        {
            add_input = true;
            std::cout << "Input a number: " << std::endl;
            std::cin >> number;
            inputed_vector.push_back(number);
        }
        else if (answer == 'n')
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

        // Exercitiul 2
    std::string sentence;
    std::cin.ignore();
    std::cout << "Input a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "The sentence in the orca language is: " << changeSentence(sentence) << std::endl;

        // Exercitiul 3
    std::string stringToReverse;
    std::cout << "Input a string to reverse: ";
    std::getline(std::cin, stringToReverse);

    std::cout << "The reversed string (in version 1) is: " << reverseString1(stringToReverse) << std::endl;
    std::cout << "The reversed string (in version 2) is: " << reverseString1(stringToReverse) << std::endl;

    return 0;
}
