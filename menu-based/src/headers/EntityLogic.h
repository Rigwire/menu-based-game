#pragma once
#include "World.h"

int EntityAttack(Entity& attacker, Entity& defender);

int EntityMagic(Entity& attacker, Entity& defender);

void EnemyHandler(Entity& enemyAttacker, Entity& playerDefender);

void PlayerHandler(Entity& playerAttacker, Entity& enemyDefender);

