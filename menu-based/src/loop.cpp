#include <iostream>
#include <stdlib.h>
#include <random>
#include "headers/globals.h"


// GameLoop() ASKS WHO THE PLAYER WANTS TO FIGHT AND SETS THE STATE TO THAT ENEMY

void GameLoop() 
{
	std::cout << "Who would you like to fight?\n\n1. Wizard\n\n2. Monster\n\n3. Ogre\n>";

	int enemyDecision;
	std::cin >> enemyDecision;
	Enemy enemyDecisionThrow = static_cast<Enemy>(enemyDecision);



	// HAD NO IDEA HOW TO ACTUALLY IMPLEMENT THE STATE TO MAKE YOU FIGHT THE ENEMY YOU CHOOSE HEHE
	// BUT IT'S SUPPOSED TO CALL EntityHandler() IN EACH CASE 
	// EntityHandler() IS DEFINED IN EnemyLogic.cpp
	switch (enemyDecisionThrow)
	{
	case Enemy::WIZARD:
		
		break;

	case Enemy::MONSTER:
		break;

	case Enemy::OGRE:
		break;

	default:
		break;
	}
}

