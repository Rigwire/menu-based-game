#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "headers/actions.h"
#include "headers/handlers.h"
#include "headers/globals.h"


int playerHealth = 100;
int enemyHealth = 100;


bool gameOver = false;

int gameLoop() {

	int decision;
	std::cout << "What would you like to do? \n1. Play\n\n2. Exit\n\n>";

	std::cin >> decision;


	while (gameOver == false)
	{
		if (playerHealth <= 0)
		{
			std::cout << "You lose! \n";
			gameOver = true;
			break;
		}
		else
		{
			if (enemyHealth <= 0)
			{
				std::cout << "You win! \n";
				gameOver = true;
				break;
			}
		}

		switch (decision)
		{
		case 1:
			handlePlayer();
			handleEnemy();
			break;

		case 2:
			gameOver = true;
			break;

		default:
			break;
		}
	}
	return 0;
}

int main() {

	

	std::cout << "Welcome to the game! \n";

	gameLoop();


	

return 0;
}

