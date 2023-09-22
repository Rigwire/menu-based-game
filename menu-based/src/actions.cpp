#include <stdlib.h>
#include <iostream>
#include "headers/actions.h"
#include "headers/globals.h"
 



void playerAttack() {
	enemyHealth -= 5;

}



void playerMagic() {
	enemyHealth -= 20;

}



void enemyAttack() {
	playerHealth -= 5;

}

void enemyMagic() {
	playerHealth -= 20;

}

