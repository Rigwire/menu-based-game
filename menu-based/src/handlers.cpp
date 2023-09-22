#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "headers/handlers.h"
#include "headers/actions.h"
#include "headers/globals.h"
#include <random>

int handlePlayer() {
	
	std::cout << "\nPlayer: " << playerHealth << "		"
		<< "Enemy: " << enemyHealth << "\n\n";
	int a;
	std::cout << "1. Attack\n\n2. Magic\n\n3. Skip\n\n>";
	std::cin >> a;

	switch (a)
	{
		case 1:
			playerAttack();
			break;

		case 2:
			playerMagic();
			break;

		case 3:
			handleEnemy();
			break;

		default:
			break;
	}

	return 0;
}

int handleEnemy() {
	
	std::random_device rd;
	std::uniform_int_distribution <int> dist(1, 3);
	
	switch (dist(rd))
	{
	case 1:
		std::cout << "\n\nEnemy attacked!\n";
		enemyAttack();
		break;

	case 2:
		std::cout << "\n\nEnemy used magic!\n";
		enemyMagic();
		break;

	case 3:
		std::cout << "\n\nEnemy skipped!\n";
		handlePlayer();
		break;

	default:
		break;
	}
	return 0;
}