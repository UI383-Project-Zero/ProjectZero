/*	Jordan Cates
	CS383
	Project Zero
	JCTests.cpp
*/

/*Most of this is super hypothetical because we're not entirely sure how all this stuff will work yet with all the variables and different modules yet, so I tried to describe things as best as possible, even though I've never done this sort of thing so I'm certain I'm doing something wrong*/

#include "catch.hpp"

#include "Attraction.h"
#include "GameArea.h"
#include "Games.h"
#include "PatronQueue.h"

TEST_CASE ("The attractions are actually being constructed?" ,"[constructFromConfigFile]") {
	
	/*I'm not really sure at the moment how this will really work with the configuration file that will be fetched by the GUI, but it will create the various attractions using the config file.*/
}

TEST_CASE("Payment is actually being taken from Patron and stored?" ,"[takePayment]") {
	Games Game;
	/*Test whether the payment for the ride, game, vendor is being removed from the patron's "wallet" depending on what they paid for.  It then stores the removed amount in a float for the total profit for that attraction for the specific amount of time*/
}

TEST_CASE ("Successfully calculates profits of each attraction?" ,"[calculateProfits]") {
	Games Game;
	/*Uses the stored money from the previous function and compares it to the operating cost for the attraction, calculating the total profits for that particular attraction*/
}

TEST_CASE("The line length is being fetched?" ,"[getLineLength]") {
	Games Game;
	/*The line length should be fetched from the games subclass, it should just be an int and this should be relatively straight forward*/
}

TEST_CASE ("updateQueue is working?" ,"[updateQueue]") {
	PatronQueue P;
	/*Updates the queue*/
}

TEST_CASE("selectPatrons is working?" ,"[selectPatrons]") {
	PatronQueue P
	/*Selects a patron from the list of available park patrons based on their stats and places them in a queue for a particular attraction.*/
}

TEST_CASE ("sendPatrons is working?" ,"[sendPatrons]") {
	PatronQueue P;
	/*Sends the patron back to the list from the queue they were in.*/
}

TEST_CASE("flagPatronGameArea is working?" ,"[flagPatronGameArea]") {
	GameArea G;
	/*Indicate with a boolean variable, whether or not a patron is currently in the Game Area, if this variable is checked, the patron may be more likely to continue playing games as opposed to moving to a separate section.*/
}


TEST_CASE ("Successfully give tokens to the Patron?" ,"[giveTokens]") {
	GameArea G;
	/*Probably the simplest of the tests, as, similarly to the Payment function, it basically just includes altering one variable.  It should remove some money from the "wallet" of the patron in exchange for some coins, which is just an integer, because you can't have half of a token.*/
}

TEST_CASE("Play is working?" ,"[Play]") {
	Games Game;
	/*Doesn't necessarily "Run the simulation" but it is used to keep the patron busy for a time slice, and then calls the appropriate functions to update the patron's stats.*/
}

