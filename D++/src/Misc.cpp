#include "Misc.h"

bool introScene()
{
    //bool play = false;
    int answer;
    std::cout<<"This is the intro text for the game" << std::endl;
    std::cout<<"Do you want to play?" << std::endl 
                << "1.Yes" << std::endl 
                << "2.No" << std::endl;
    std::cin>>answer;
    system("cls");
    if(answer == 1)
    {
        return true;
    }
    else if(answer == 2)
    {
        return false;
    }
    else
    {
        std::cout<<"Wrong input" << std::endl;
        exit(0);
    }
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
        default:
            heroType = "Wrong Input";
            break;
    }
    system("cls");
    if(!(heroType == "Wizard" || heroType == "Warrior" || heroType == "Rogue"))
    {
        std::cout<<"Wrong input" << std::endl;
        exit(1);
    }
    std::cout<<"Welcome " << heroType << " " << playerName << std::endl; 
    std::cout << "Press any key to continue..." << std::endl;
    _getch();
    system("cls");
    if(heroType == "Wizard")
    {
        Player* player = new Wizard(playerName);
        return player;
    }
    else if(heroType == "Warrior")
    {
        Player* player = new Warrior(playerName);
        return player;
    }
    else 
    {
        Player* player = new Rogue(playerName);
        return player;
    }
    
}

void roadsScene()
{
    std::string roadChosen;
    int roadChosenValue;

    std::cout<<"You arrived at a crossroads. Where do you want to go?" << std::endl 
                << "1. To the village" << std::endl 
                << "2. To the forest" << std::endl
                << "3. To the caves" << std::endl;
    std::cin>>roadChosenValue;
    switch (roadChosenValue)
    {
        case 1: 
        {
            roadChosen = "village";
            break;
        }
        case 2: 
        {
            roadChosen = "forest";
            break;
        }
        case 3:  
        {
            roadChosen = "caves";
            break;
        }
        default:
            roadChosen = "Wrong Input";
            break;
    }
    system("cls");
    if(!(roadChosen == "village" || roadChosen == "forest" || roadChosen == "caves"))
    {
        std::cout<<"Wrong input. Please pick a valid option." << std::endl;
        roadsScene();
    }
}


bool chestScene()
{
    int chestAnswerValue;
    bool validAnswer = false, wantsToPlay;
    while(validAnswer==false)
    { 
        std::cout << "On the road, you find a chest. Do you open it?" << std::endl
                    << "1. Yes" << std::endl 
                    << "2. No" << std::endl;
        std::cin>>chestAnswerValue;
        switch (chestAnswerValue)
        {
            case 1: 
            {
                validAnswer=true;
                wantsToPlay = true;
                break;
            }
            case 2: 
            {
                validAnswer=true;
                wantsToPlay = false;
                break;
            }
        }
    }
    system("cls");
    return wantsToPlay;
}

