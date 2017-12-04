/*	Jordan Cates
	CS383
	Project Zero
	Attraction Header
*/

#ifndef ATTRACTION_H
#define ATTRACTION_H

#include <string>
/*This is the header file for the Attraction Superclass, where all of the attractions in the park, games, rides, and vendors will be defined*/
class Attraction {
	private:
		void Attraction::constructFromConfigFile(); //Will create the queue of attractions from the input from the GUI.
		void Attraction::removeFromQueue();
		void Attraction::takePayment(int, double);//Removes money from the wallet of the Patron, depending on what attraction they went to.
		void Attraction::calculateProfits(); //Uses money gained from each Patron and the operating cost of each attraction to generate profits for each attraction.
		void Attraction::unflagPatron();
		int Attraction::getLineLength();
	
	public:
		string name; //The name of each attraction(games, vendors, rides)
		int linelength; //Defines the the length of each attraction, which will impact the Patrons' decisions of what attraction they will go to.
		//PatronQueue attractionQueue; //Creates the array of Attractions

};

#endif