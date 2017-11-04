/*	Jordan Cates
	CS383
	Project Zero
	Game Area Header
*/
#ifndef GAMEAREA_H
#define GAMEAREA_H

#include "Attraction.h"

/* This header file is a subclass of the Attraction superclass.  This subclass is mostly to encompass all of the various games in the park.  It will be used to mark patrons as playing games, and it will alter the amount of coins they have on them.*/

class GameArea {
	private:
		flagPatronGameArea(); //Will change a patrons status if it is inside the game area
		giveTokens(); //Using the Patron Characteristics passed from behavior, this function should give the Patron's an amount of coins that depends on the amount of money they have in their "wallet"
		
	public:
		int cost; //The cost of each game
};

#endif