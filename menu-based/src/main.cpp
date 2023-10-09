#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "headers/loop.h"
#include "headers/World.h"





/*-------------------------------------------------------------------------------------------------------START HERE------------------------------------------------------------------------------------------------------*/ 



World gameWorld;


int main() {

	

	std::cout << "Welcome to Eclaria!\n\n";			
																				
	int decision;

	std::cout << "What would you like to do? \n\n1. Play\n\n2. Exit\n";		// THIS CODE BLOCK ASKS THE PLAYER IF THEY WANT TO PLAY OR EXIT THE GAME
	std::cin >> decision;

	switch (decision)	//IF THE PLAYER DECIDES TO PLAY, GameLoop() IS CALLED OR ELSE THE PROGRAM ENDS
	{
	case 1:
		GameLoop(gameWorld); // THIS IS DEFINED IN THE handlers.cpp FILE
		break;

	case 2:
		break;

	default:
		break;
	}
	
return 0;
}

