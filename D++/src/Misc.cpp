#include "Misc.h"

bool introScene()
{
    bool validAnswer = false, answerValue;
    int answer;
    std::cout<<"This is the intro text for the game" << std::endl;
    while(validAnswer==false)
    {
        std::cout<<"Do you want to play?" << std::endl 
                    << "1.Yes" << std::endl 
                    << "2.No" << std::endl;
        std::cin>>answer;
        
        system("cls");
        if(answer == 1)
        {
            answerValue =true;
            validAnswer = true;
        }
        else if(answer == 2)
        {
            answerValue = false;
            validAnswer = true;
        }
        else
        {
            std::cout<<"Wrong input. Please pick a valid option" << std::endl;
        }
    }
    
    return answerValue;
}

Player* setupPlayer()
{
    std::string playerName, heroType;
    bool validHero = false;
    int heroTypeValue;
    std::cout<<"What is you name?"<<std::endl;
    std::cin.ignore();
    std::getline(std::cin, playerName);
    while(validHero==false)
    {
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
                validHero = true;
                break;
            }
            case 2: 
            {
                heroType = "Warrior";
                validHero = true;
                break;
            }
            case 3:  
            {
                validHero = true;
                heroType = "Rogue";
                break;
            }
            default:
                //heroType = "Wrong Input";
                system("cls");
                std::cout<<"Wrong input. Please pick a valid option" << std::endl;
                break;
        }
    }
    system("cls");
    //if(!(heroType == "Wizard" || heroType == "Warrior" || heroType == "Rogue"))
    //{
    //    std::cout<<"Wrong input. Please pick a valid option" << std::endl;
   //     setupPlayer();
    //}
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
    bool validAnswer = false, openChest;
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
                openChest = true;
                break;
            }
            case 2: 
            {
                validAnswer=true;
                openChest = false;
                break;
            }
        }
        system("cls");
        if(validAnswer==false)
        {
            std::cout<<"Wrong input. Please pick a valid option." << std::endl;
        }
    }
    return openChest;
}

