#include "Goblin.h"

Goblin::Goblin()
{
    setHP(60);
    setDamage(40);
    this->enemyType = EnemyType::Goblin;
}

Goblin::~Goblin()
{

}