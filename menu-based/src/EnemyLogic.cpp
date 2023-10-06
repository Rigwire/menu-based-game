#include <random>
#include <iostream>
#include "headers/globals.h"




int EntityAttack(Entity& attacker, Entity& defender)
{
	attacker.m_health = attacker.m_attack / defender.m_defense; // FUNCTIONS FOR THE ATTACK AND MAGIC MOVES

	return 0;
}

int EntityMagic(Entity& attacker, Entity& defender)
{
	attacker.m_health = attacker.m_magic / defender.m_defense;

	return 0;
}


void EntityHandler()	// ENEMY PICKS A RANDOM NUMBER BETWEEN 1 AND 3, THE NUMBER INDICATES WHAT THE ENEMY DOES.
{

	std::random_device rd;
	std::uniform_int_distribution <int> dist(1, 3);

	switch (dist(rd))
	{
	case 1:
		std::cout << "\n\n[ENEMY NAME] attacked!\n";

		EntityAttack([CHOSEN_ENEMY], player); /* TRYING TO PASS THE Entity VARIABLES AS PARAMETERS BUT GETTING UNDEFINED ERRORS.
												 [CHOSEN ENEMY] IS JUST THERE TO LET YOU KNOW WHAT'S SUPPOSED TO BE THERE
												 REEPLACE [CHOSEN ENEMY] WITH ANY OF THE Entity VARIABLES DEFINED IN globals.cpp AND YOU'LL STILL GET AN UNDEFINED ERROR
		break;									 THE Entity VARIABLES AND ENUMS ARE DEFINED IN THE globals.cpp AND globals.h FILES */
		

	case 2:
		std::cout << "\n\n[ENEMY NAME] used magic!\n";

		EntityMagic([CHOSEN_ENEMY], player); // SAME HERE
		break;

	case 3:
		std::cout << "\n\n[ENEMY NAME] skipped!\n";
									 /* SUPPOSED TO BE A PLAYER FUNCTION HERE BUT I DIDN'T KNOW HOW TO DEFINE IT. 
									 IT'S SUPPOSED TO ASK WHAT THE PLAYER WANTS TO DO,
									 THEN CHOOSE EITHER EntityAttack(), EntityMagic() OR SKIP DEPENDING ON THE PLAYER'S CHOICE
									 BUT THE PLAYER IS THE ATTACKER AND THE ENEMY IS THE DEFENDER WHEN CALLING THE FUNCTIONS */
		break;

	default:
		break;
	}
}

// THAT'S HOW THE GAME GOES UNTIL SOMEONE'S HEALTH REACHES ZERO
// THEN IT ASKS IF YOU WANT PLAY AGAIN OR EXIT


