#ifndef KCCROWDDIRECTOR_H
#define KCCROWDDIRECTOR_H
/*
Crowd Director class

On Creation:
Gets Population object pointer

On each clock tick:
-Steps through population list
-Runs chooser on individual
-Processes individual appropriately
--Moves to chosen attraction
----Updates Attraction ranker appropriately
--Kicks unsatisfied or broke (ready to leave) customers

On start of day:
-Gets new population pointer
---Or signals population to clear and generate new starting group
*/

#include "population.h"

#include "KCAttractionRanker.h"
#include "KCChooser.h"

class KCCrowdDirector {
	private:
		SAPopulation *mCrowd;
		KCChooser mDecider;
		KCAttractionRankerMaster mMasterList;
	public:
		KCCrowdDirector();
		~KCCrowdDirector();
		
		//void getRides(Attraction*,int,int,int,int);//Games cut
		void getRides(Attraction*, int, int);
		
		void updateRides();

		void getPopulation(SAPopulation*);
		
		void updateCrowd();
		
		void updateCustomer(SACustomer*);
};
#endif //KCCROWDDIRECTOR_H
