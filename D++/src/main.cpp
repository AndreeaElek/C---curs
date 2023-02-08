#include "Misc.h"


int main(int argc, char const *argv[])
{
    system("cls");
    if(introScene()) 
    {
        Player* player = setupPlayer();
        roadsScene();
        if(chestScene)
        {
            player->CreateChestItem();
        }
        //player->Attack();

        delete player;
        
    }
    else 
    {
        std::cout << "You chose not to play" << std::endl << "The game has ended" << std::endl;
    }

    
    return 0; 
} 
