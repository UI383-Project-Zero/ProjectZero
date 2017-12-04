/*	Jordan Cates
	CS383
	Project Zero
	GameArea Src
*/

#include "GameArea.h"
#include <iostream>
#include <string>
using namespace std;

void GameArea::flagPatronGameArea() {
	//Will change a patrons status if it is inside the game area
	SACustomer.mBusy = true;
}

void GameArea::giveTokens(int i) {
	//Using the Patron Characteristics passed from behavior, this function should give the Patron's an amount of coins that depends on the amount of money they have in their "wallet"
	SACustomer.Tokens + i;
	SACustomer.mMoney - i;
}