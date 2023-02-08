#include "Misc.h"

int main(int argc, char const *argv[])
{
    bool restart = true;
    system("cls");
    
    sf::Music music1, music2, music3;
    music1.openFromFile("Main_Menu.wav");
    music2.openFromFile("Exploring.wav");
    music3.openFromFile("Final_Battle.wav");
    music1.setVolume(30);
    music2.setVolume(30);
    music3.setVolume(30);
    music1.play();
   while(restart==true)
   {
        if(introScene()) 
        {
            music1.pause();
            music2.play();
            Player* player = setupPlayer();
            roadsScene();
            if(chestScene())
            {
                player->CreateChestItem();
            }
            player->CheckInventory();
            //player->Attack();

            player->DeleteItems();
            delete player;
            music2.stop();
            music1.play();
        }
        else
        {
            std::cout << "You chose not to play" << std::endl; 
        }
        std::cout<< "The game has ended" << std::endl;
        restart=restartGame();
    }
    
    return 0; 
} 
