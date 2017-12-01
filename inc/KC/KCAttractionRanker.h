#ifndef KCATTRACTIONRANKER_H
#define KCATTRACTIONRANKER_H

#include  "dummyclasses/AttractionDummy.h"
//class Attraction;

class KCRideRanker;
class KCGameRanker;
class KCVendorRanker;
class KCCoinStandRanker;

/*
	Attraction Stub structure.
	Holds a pointer to a specific traction
	Holds that attractions current rating
*/

struct KCAttractionStub {Attraction* attrPtr; int rating;};
//Operators for sorting
bool operator> (const KCAttractionStub& lhs, const KCAttractionStub& rhs) {return lhs.rating > rhs.rating;}
bool operator< (const KCAttractionStub& lhs, const KCAttractionStub& rhs) {return lhs.rating < rhs.rating;}
//Stub comparison functor for descending sort
bool sortByHighRating(KCAttractionStub highrating, KCAttractionStub lowrating)
{return highrating > lowrating;}



/*
	Attraction Ranker super class
	
	On creation, Rankers should:
	-Build a list of attraction stubs from an array of attractions
	--Pull necessary minimum values while building list
	---Pricing is currently universal, so mCheapest included in super
	-Rate each attraction based on characteristics
	-Sort this list by rating
	
	On each clock tick, Rankers will usually:
	-Rate all items in stub list
	-Sort the list again
	
	On requests, from Chooser or CrowdDirector:
	-Fetch top-ranked stub
	-Fetch nth-ranked stub (if top attraction does not meet requirements)
	-Re-rate an individual ride on request
	-Re-sort an individual ride on request
	---Insertion sort on a single stub saves time over full sort
	
	Member variables track relevant minimum 
	-If a customer can not afford any attraction in the park, decision-process shortcuts
*/
class KCAttractionRankerSuper {
	protected:
		int mCheapest;
		KCAttractionStub * mStubList;
		int mStubListSize;
	public:
		KCAttractionRankerSuper();
	        ~KCAttractionRankerSuper();

		//Assumes null-terminated array
		virtual void buildStubList(Attraction*, int);
		//Rates individual attraction
		virtual int rateAttraction(KCAttractionStub);
		//Calls rateAttraction on entire stub list
		void rateAll();
		//Calls sort on StubList
		void sortStubList();
		//Sorts single stub into new location in list
		void sortStub(KCAttractionStub);
		
		int getCheapest();
		KCAttractionStub* getTopAttraction();
		KCAttractionStub* getRankedAttraction(int);
};

/*
	Attraction ranker Master class
	Singleton pattern
	Maintains the master list of all prime-level attractions.
	In the base implementation context, this means all rides, vendors, and games, but not coin stands. These are the attractions that visitors decide to visit.
	mRideList, mGameList, and mVendorList hold the ride, game, and vendor lists so that they are interacted with as a subset of the main ranked list.
	
	Sorts rides based on queue-length/wait-time vs satisfaction vs cost
	Cost estimation for games based on money-value of coin-cost. This may need to be estimated based on offerings of coin stands.

	updateStubLists calls rateAll and sortStubList on the master list and on each sub-list.
*/

class KCAttractionRankerMaster : protected KCAttractionRankerSuper{
	public:
		KCAttractionRankerMaster();
		~KCAttractionRankerMaster();
		
		void buildStubList(Attraction*, int);
		int rateAttraction(KCAttractionStub);

		void updateStubLists();
		
		KCRideRanker *mRideList;
		KCGameRanker *mGameList;
		KCVendorRanker *mVendorList;
};

/*
	Ride Ranker class
	Maintains list of Rides. 
	
	Sorts rides based on queue/wait vs satisfaction vs cost.
	Satisfaction assumed to correlate with thrill. If the top ranked ride is too thrilling or nauseating , Chooser can skip to next-best.
	
	Member variables track minimum thrill and minimum nausea. Shortcuts decision process if no compatible rides are available
*/

class KCRideRanker : protected KCAttractionRankerSuper{
	private:
		int mLeastThrilling;
		int mLeastNauseating;
	public:
		KCRideRanker();
		~KCRideRanker();
		
		void buildStubList(Attraction*);
		int rateAttraction(KCAttractionStub*);
		
		int getLeastThrilling();
		int getLeastNauseating();
};

/*
	Vendor Ranker class
	Maintains list of Vendors
	
	Sorts based on queue/wait vs satisfaction vs cost.
	Cost based on cheapest item at vendor.
	
	mCheapest is the price of the cheapest item for sale
*/

class KCVendorRanker : protected KCAttractionRankerSuper{
	public:
		KCVendorRanker();
		~KCVendorRanker();
		
		void buildStubList(Attraction*);
		int rateAttraction(KCAttractionStub*);
};

/*
	Game Ranker class
	Maintains list of Games.
	
	Sorts based on queue/wait vs satisfaction vs cost
	Queue/wait based solely on game wait times.
	Cost based on direct coin-cost of games.
	
	mCoinStandList holds the list of coin venders. 
*/

class KCGameRanker : protected KCAttractionRankerSuper{
	public:
		KCGameRanker();
		~KCGameRanker();
		
		void buildStubList(Attraction*);
		int rateAttraction(KCAttractionStub*);
		
		KCCoinStandRanker *mCoinStandList;
};

/*
	Coin Stand Ranker
	Maintains list of coin stands.
	
	It is assumed that all coin stands are identical, but that there may be 0 or more as desired. This is for Chooser edge-case reasons. The GUI/Attraction module will likely require at least one stand if there are more than 0 games in the park.
	
	Sorts based solely on queue-length/wait-time.
	
	Member variables for cheapest coin purchase options.
	1 to hold minimum purchase of coins, 1 for minimum money-value.
	It is assumed that these will refer to the same "bundle" (i.e. 5 coins for $1). Logic for when this is not the case to be determined later (this will be implemented in buildStubList)
	
	mCheapest will be used for minimum money-cost purchase.
	mSmallest will be used for minimum coin-value purchase.
	
	Prevents purchases if unable to afford cheapest bundle or if unable to afford enough for the cheapest game.
*/

class KCCoinStandRanker : protected KCAttractionRankerSuper{
	private:
		int mSmallest;
	public:
		KCCoinStandRanker();
		~KCCoinStandRanker();
		
		void buildStubList(Attraction*);
		int rateAttraction(KCAttractionStub*);

		int getSmallest();
};

#endif //KCATTRACTIONRANKER_H
