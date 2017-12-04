/*	Jordan Cates
	CS383
	Project Zero
	PatronQueue Header
*/
#ifndef PATRONQUEUE_H
#define PATRONQUEUE_H

#include "Attraction.h"
#include "GameArea.h"
#include "Games.h"
#include <string>
/*This is the header file for the PatronQueue, a subclass of basically everything.  This is where the queue of Patrons will be created*/
class PatronQueue {
	private:
		void PatronQueue::updateQueue(); //Updates the queue of people to play games, ride rides, or visit vendors.  This also updates the new total number of Patrons in the queue.
		void PatronQueue::sendPatrons(SACustomer); //Sends a patron from the overall list of them into the specific queue for a given ride, vendor or game
	public:
		//This is where the queue thing needs to go
};

#endif