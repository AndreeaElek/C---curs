#include "Misc.h"

bool introScene()
{
    bool play = false;
    char answer;
    std::cout<<"Do you want to play?" << std::endl << "y-> yes      n-> no";
    std::cin>>answer;
    if(answer == 'y')
    {
        play = true;
    }
    return play;
}

