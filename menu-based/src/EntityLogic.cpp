#include <random>
#include <iostream>
#include "headers/World.h"




int EntityAttack(Entity& attacker, Entity& defender)
{
	defender.m_health = defender.m_defense / attacker.m_attack;

	return 0;
}

int EntityMagic(Entity& attacker, Entity& defender)
{
	defender.m_health = defender.m_defense / attacker.m_magic;

	return 0;
}



void EnemyHandler(Entity& enemyAttacker, Entity& playerDefender)	
{
	std::cout << enemyAttacker.m_name << ": " << playerDefender.m_health
		<< "\t" << playerDefender.m_name << ": " << playerDefender.m_health << "\n";

	std::random_device rd;
	std::uniform_int_distribution <int> dist(1, 3);

	switch (dist(rd))
	{
	case 1:
		std::cout << "\n\n" << playerDefender.m_name << " attacked!\n";

		EntityAttack(enemyAttacker, playerDefender);

		break;
		

	case 2:
		std::cout << "\n\n" << enemyAttacker.m_name << " used magic!\n";

		EntityMagic(enemyAttacker, playerDefender);

		break;

	case 3:
		std::cout << "\n\n" << enemyAttacker.m_name << " skipped!\n";
	
		break;

	default:
		break;
	}
}

void PlayerHandler(Entity& playerAttacker, Entity& enemyDefender)
{
	std::cout << playerAttacker.m_name << ": " << playerAttacker.m_health
		<< "\t" << enemyDefender.m_name << ": " << enemyDefender.m_health << "\n";

	int move;
	std::cout << "\n\n1. Attack\n\n2. Magic\n\n3. Skip\n";
	std::cin >> move;

	switch (move)
	{
	case 1:

		EntityAttack(playerAttacker, enemyDefender);

		break;


	case 2:

		EntityMagic(playerAttacker, enemyDefender);

		break;

	case 3:

		break;

	default:
		break;
	}
}

