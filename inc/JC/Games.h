/*	Jordan Cates
	CS383
	Project Zero
	Games Header
*/
#ifndef GAMES_H
#define GAMES_H

#include "Attraction.h"
/*This is the header file for the Games subclass of attractions, which will be where games in the park will be created*/
class Games {
	private:
		play();
		
	public:
		int TokenCost; //How many tokens the game in question costs
		int satisfaction; //How much it alters a Patron's satisfaction stat
		int playtime; //How long the game is played before the game is freed up for the next customer and the Patron is placed back into the list of Patrons
};

#endif