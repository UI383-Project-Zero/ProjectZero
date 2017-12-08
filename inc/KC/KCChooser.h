#ifndef KCCHOOSER_H
#define KCCHOOSER_H

/* 
	Chooser class

	The chooser makes decisions based on the customer and park state.
	It is invoked by Crowd Director's updateCustomer method.
	
	Call sequence:
		newSubject- Get a new customer pointer
		statusCheck- Check status(done, free, queue, occupied)
		--PatienceCheck- Queued customer. Decide whether to leave queue, update stats
			OR
		--AttractionSelect- Free customer. Chooses ride using rankerlist

		StatusCheck codes:
		0: Done. Remove customer
		1: Occupied. Finish update
		2: Queued. Check patience
		3: Free. Put somewhere

		PatienceCheck codes:
		0: Leave queue.
		1: Stay, heavy penalty
		2: Stay, no penalty

		attractionSelect:
		Returns pointer to attraction for enqueue.
		Null means no attraction found, remove customer
*/

#include "customer.h"

#include "KCDecisionWeights.h"
#include "KCAttractionRanker.h"
class KCChooser{
	private:
		SACustomer* mSubject;
	public:
		KCChooser();
		~KCChooser();
		
		void newSubject(SACustomer*);
		unsigned int statusCheck();
		unsigned int patienceCheck();
		Attraction* attractionSelect(KCAttractionRankerMaster *);
};

#endif //KCCHOOSER_H
