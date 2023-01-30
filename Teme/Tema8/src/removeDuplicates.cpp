#include "Tema8.h"

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