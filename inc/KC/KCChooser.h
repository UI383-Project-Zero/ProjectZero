#ifndef KCCHOOSER_H
#define KCCHOOSER_H

/* 
	Chooser class

	The chooser performs a series of actions on an individual customer
	It is invoked by Crowd Director's updateCustomer method
	
	At this time it is assumed all weights and decision algorithms in Chooser are non-configurable. If this changes, the following implementation will be altered to include a constructor which reads in configurations. Private members will hold the necessary information.
	
	Call sequence:
		newSubject- Get a new customer pointer
		statusCheck- Check status(free, queue, occupied)
		--PatienceCheck- Queued customer. Decide whether to leave queue, update stats
			OR
		--AttractionSelect- Free customer. Chooses ride




		StatusCheck codes:
		0: Done. Remove customer
		1: Neutral. 
		2: Ride preference
		3: Vendor preference
		4: Game preference

		PatienceCheck codes:
		0: Leave queue.
		1: Stay, heavy penalty
		2: Stay, no penalty

		attractionSelect input codes:
		1: Neutral
		2: Ride preference
		3: Vendor preference
		4: Game preference
*/

class SACustomer; //REPLACE
#include "dummyclasses/AttractionDummy.h"; //REPLACE

#include "KCDecisionWeights.h"

class KCChooser{
	private:
		SACustomer* mSubject;
	public:
		KCChooser();
		~KCChooser();
		
		void newSubject(SACustomer*);
		unsigned int statusCheck();
		unsigned int patienceCheck();
		Attraction* attractionSelect(int);
};

#endif //KCCHOOSER_H
