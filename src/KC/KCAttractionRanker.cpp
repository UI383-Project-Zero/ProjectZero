#include <iostream>
#include <string>
#include <algorithm>

#include "KCAttractionRanker.h"

//////////////////////////////////////////////////Super Class Methods

template <typename stubType>
KCAttractionRankerSuper<stubType>::KCAttractionRankerSuper(){
}

template <typename stubType>
KCAttractionRankerSuper<stubType>::~KCAttractionRankerSuper(){
}

template <typename stubType>
void KCAttractionRankerSuper<stubType>::rateAll(){
  for(int i= 0; i<mStubListSize; i++)
    rateAttraction(&mStubList[i]);
}

template <typename stubType>
void KCAttractionRankerSuper<stubType>::sortStubList(){
  std::sort(mStubList, mStubList + mStubListSize, mStubList.sortByHighRating);
}

template <typename stubType>
void KCAttractionRankerSuper<stubType>::sortStub(stubType aStub){
  //std::cout << std::endl << "Moved stub to right spot";
  //Locates aStub in list array (by comparing attraction pointer)
  //Uses adapted bubblesort to move element to new position
  /////Sourced from  https://stackoverflow.com/questions/13776531/how-to-re-sort-already-sorted-array-where-one-element-updates

  ///////////Locate aStub
  int index;
  for(index= 0; index<mStubListSize; index++){
    if(aStub.attrPtr == mStubList[index].attrPtr)
      break;
  }
  if(index==mStubListSize) //aStub not in list
      return;
    
  //index now equals index of aStub in mStubList
  ///////Sort (re-use adaptation)
  //////Changes:
  //aStub takes places of h
  //index takes place of oddPosition
  //mStubList takes place of a
  //size of mStubList is known
  //comparisons flipped, as list is in descending order

  int i;
  if(aStub < mStubList[index+1]){
    for(i = index; i < mStubListSize-1 && mStubList[i+1] > aStub; i++)
      mStubList[i] = mStubList[i+1];
  }
  else{
    for(i = index; i > 0 && mStubList[i-1] < aStub; i--)
      mStubList[i] = mStubList[i-1];
  }
  mStubList[i] = aStub;
}

template <typename stubType>
int KCAttractionRankerSuper<stubType>::getCheapest(){
  return mCheapest;
}

template<typename stubType>
stubType* KCAttractionRankerSuper<stubType>::getTopAttraction(){
  return &mStubList[0];
}

template<typename stubType>
stubType* KCAttractionRankerSuper<stubType>::getRankedAttraction(int place){
  if(place < mStubListSize)
    return &mStubList[place];
  else
    return NULL;
}

////////////////////////////////////////////////////////////////Master Ranker Methods

KCAttractionRankerMaster::KCAttractionRankerMaster(){
  //std::cout << std::endl << "Created Master Rankeer";
}

KCAttractionRankerMaster::~KCAttractionRankerMaster(){
  //std::cout << std::endl << "Deleted Master Ranker";
}

void KCAttractionRankerMaster::buildStubList(Attraction **attrList, int rideCount, int vendorCount, int gameCount, int coinStandCount){
  buildStubList(attrList, rideCount + vendorCount + gameCount);
  mRideList.buildStubList(attrList, rideCount);
  mVendorList.buildStubList(attrList+rideCount, vendorCount);
  mGameList.buildStubList(attrList+rideCount+vendorCount, gameCount, coinStandCount);
}



void KCAttractionRankerMaster::buildStubList(Attraction **attrList, int attrCount){
  if(attrCount <= 0)
    return;
  mStubListSize = attrCount;

  delete mStubList;
  mStubList = new KCAttractionStub<Attraction>[mStubListSize];

  //initial cheapest
  mCheapest = attrList[0]->mRideCost;
  for(int i =0; i < mStubListSize; i++){
    //Add to list
    mStubList[i].attrPtr = attrList[i];
    //Update cheapest
    if(mStubList[i].attrPtr->mRideCost < mCheapest)
      mCheapest = mStubList[i].attrPtr->mRideCost;
    //Initial rating
    rateAttraction(&mStubList[i]);
  }
  sortStubList();
}

//Current rating algorithm:
// (satisfaction)/(cost * cost_weight) - (queue_length * queue_length_modifier)
//Example: 12 sat, $5, 1.0 cost_weight, 10 in queue, 0.25 queue modifier
/////////Rating = -0.1
/////////Modifiers set in weighting header
int KCAttractionRankerMaster::rateAttraction(KCAttractionStub<Attraction>* targetStub){
  if((*targetStub).attrPtr->mRideCost == 0){
    return (*targetStub).rating = ((*targetStub).attrPtr->mRideSat/(PRICE_WEIGHT*1)) - ((*targetStub).attrPtr->mQueueLen * QUEUE_LENGTH_MODIFIER);
  }

  return (*targetStub).rating = ((*targetStub).attrPtr->mRideSat/(PRICE_WEIGHT*(*targetStub).attrPtr->mRideCost)) - ((*targetStub).attrPtr->mQueueLen * QUEUE_LENGTH_MODIFIER);
}


///////////////////////////////////////////////////////Ride Ranker Methods

KCRideRanker::KCRideRanker(){
  //std::cout << std::endl << "Created Ride Ranker";
}

KCRideRanker::~KCRideRanker(){
  //std::cout << std::endl << "Deleted Ride Ranker";
}

void KCRideRanker::buildStubList(Attraction **attrList, int attrCount){
  buildStubList(dynamic_cast<Ride*>(*attrList), attrCount);
}

void KCRideRanker::buildStubList(Ride** rideList, int rideCount){
  if(rideCount <= 0 || rideList == NULL)
    return;
  
  mStubListSize = rideCount;

  delete mStubList;
  mStubList = new KCAttractionStub[mStubListSize];

  //initial cheapest
  mCheapest = rideList[0]->mRideCost;
  mLeastThrilling = rideList[0]->mRideThrill;
  mLeastNauseating = rideList[0]>mRideNaus;
  
  for(int i =0; i < mStubListSize; i++){
    //Add to list
    mStubList[i].attrPtr = rideList[i];
    //Update cheapest

     //Update cheap/least/least
     if(mStubList[i].attrPtr->mRideCost < mCheapest)
       mCheapest = mStubList[i].attrPtr->mRideCost;
     if(mStubList[i].attrPtr->mRideThrill < mLeastThrilling)
       mLeastThrilling = mStubList[i].attrPtr->mRideThrill;
     if(mStubList[i].attrPtr->mRideNaus < mLeastNauseating)
       mLeastNauseating = mStubList[i].attrPtr->mRideNaus;
     //Initial rating
    rateAttraction(&mStubList[i]);
  }
  sortStubList();
}

int KCRideRanker::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated via ride metrics";
  if((*targetStub).attrPtr->mRideCost == 0){
    return (*targetStub).rating = ((*targetStub).attrPtr->mRideSat/(PRICE_WEIGHT*1)) - ((*targetStub).attrPtr->mQueueLen * QUEUE_LENGTH_MODIFIER);
  }
  
  return (*targetStub).rating = ((*targetStub).attrPtr->mRideSat/(PRICE_WEIGHT*(*targetStub).attrPtr->mRideCost)) - ((*targetStub).attrPtr->mQueueLen * QUEUE_LENGTH_MODIFIER);
}

int KCRideRanker::getLeastThrilling(){
  return mLeastThrilling;
}

int KCRideRanker::getLeastNauseating(){
  return mLeastNauseating;
}

///////////////////////////////////////////////////////////////Vendor Ranker Methods
/*
  Vendor Ranker methods
 */

KCVendorRanker::KCVendorRanker(){
  std::cout << std::endl << "Created Vendor Ranker";
}

KCVendorRanker::~KCVendorRanker(){
  std::cout << std::endl << "Deleted Vendor Ranker";
}

void KCVendorRanker::buildStubList(Attraction *aList){
  std::cout << std::endl << "Built Vendor stub list";
}

int KCVendorRanker::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated via Vendor metrics";
}


/*
  Game Ranker methods
 */

KCGameRanker::KCGameRanker(){
  std::cout << std::endl << "Created Game Ranker";
}

KCGameRanker::~KCGameRanker(){
  std::cout << std::endl << "Deleted Game Ranker";
}

void KCGameRanker::buildStubList(Attraction *aList){
  std::cout << std::endl << "Built Game stub list";
}

int KCGameRanker::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated via Game metrics";
}

/*
  CoinStand Ranker methods
 */

KCCoinStandRanker::KCCoinStandRanker(){
  std::cout << std::endl << "Created CoinStand Ranker";
}

KCCoinStandRanker::~KCCoinStandRanker(){
  std::cout << std::endl << "Deleted CoinStand Ranker";
}

void KCCoinStandRanker::buildStubList(Attraction *aList){
  std::cout << std::endl << "Built CoinStand stub list";
}

int KCCoinStandRanker::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated via CoinStand metrics";
}

int KCCoinStandRanker::getSmallest(){
  return mSmallest;
}
