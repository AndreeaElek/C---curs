#include "Misc.h"

bool introScene()
{
    bool play = false;
    int answer;
    std::cout<<"Do you want to play?" << std::endl 
                << "1.Yes" << std::endl 
                << "2.No" << std::endl;
    std::cin>>answer;
    if(answer == 1)
    {
        play = true;
    }
    return play;
}

Player* setupPlayer()
{
    std::string playerName, heroType;
    int heroTypeValue;
    std::cout<<"What is you name?"<<std::endl;
    std::cin.ignore();
    std::getline(std::cin, playerName);
    std::cout<<"What do you want to be?" << std::endl 
                << "1. Wizard" << std::endl 
                << "2. Warrior" << std::endl
                << "3. Rogue" << std::endl;
    std::cin>>heroTypeValue;
    switch (heroTypeValue)
    {
        case 1: 
        {
            heroType = "Wizard";
            break;
        }
        case 2: 
        {
            heroType = "Warrior";
            break;
        }
        case 3:  
        {
            heroType = "Rogue";
            break;
        }
    }
    system("cls");
    std::cout<<"Welcome " << heroType << " " << playerName << std::endl; 
    std::cout << "Press any key to continue..." << std::endl;
    _getch();
    if(heroType == "Wizard")
    {
        Wizard* wizard = new Wizard(playerName);
        Player* player = wizard;
        return player;
    }
    else if(heroType == "Warrior")
    {
        Warrior* warrior = new Warrior(playerName);
        Player* player = warrior;
        return player;
    }
    else 
    {
        Rogue* rogue = new Rogue(playerName);
        Player* player = rogue;
        return player;
    }
    
}