#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <SFML/Audio.hpp>

#include "Player.h"
#include "Wizard.h"
#include "Warrior.h"
#include "Rogue.h"

bool restartGame();

bool introScene(); 

Player* setupPlayer();

void roadsScene();
bool chestScene();