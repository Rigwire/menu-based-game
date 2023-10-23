#include <iostream>
#include <stdlib.h>
#include <random>
#include "headers/World.h"
#include "headers/EntityLogic.h"


void GameLoop(World& world) 
{

	bool gameOver = false;
	bool continueCombat = true;

	std::cout << "Who would you like to fight?\n\n1. Wizard\n\n2. Monster\n\n3. Ogre\n>";

	int enemyDecision;
	std::cin >> enemyDecision;
	Enemy enemyDecisionThrow = static_cast<Enemy>(enemyDecision);

	
	while (continueCombat)
	{
		switch (enemyDecisionThrow)
		{
		case Enemy::WIZARD:
			PlayerHandler(world.player, world.wizard);

			EnemyHandler(world.wizard, world.player);

			continueCombat = world.wizard.m_health > 0 && world.player.m_health > 0;
			break;

		case Enemy::MONSTER:
			PlayerHandler(world.player, world.monster);

			EnemyHandler(world.monster, world.player);

			continueCombat = world.monster.m_health > 0 && world.player.m_health > 0;
			break;

		case Enemy::OGRE:
			PlayerHandler(world.player, world.ogre);

			EnemyHandler(world.ogre, world.player);

			continueCombat = world.ogre.m_health > 0 && world.player.m_health > 0;
			break;

		default:
			break;
		}
		
	}
}

