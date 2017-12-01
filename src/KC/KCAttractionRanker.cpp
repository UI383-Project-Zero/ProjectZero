#include <iostream>
#include <algorithm>

#include "KCAttractionRanker.h"


/*
  Super Class Methods
 */


KCAttractionRankerSuper::KCAttractionRankerSuper(){
  //std::cout << std::endl << "Ranker Super Created";
}

KCAttractionRankerSuper::~KCAttractionRankerSuper(){
  //std::cout << std::endl << "Ranker Super Deleted";
}

virtual void KCAttractionRankerSuper::buildStubList(Attraction* attrList){
  std::cout << std::endl << "Error. Super Ranker doesn't build lists.";
}

virtual void KCAttractionRankerSuper::rateAttraction(KCAttractionStub targetStub){
  std::cout << std::cendl << "Error. Super Ranker doesn't rate attractions.";
}

void KCAttractionRankerSuper::rateAll(){
  //std::cout << std::endl << "Rated all stubs";
  for(int i= 0; i<mStubListSize; i++)
    rateAttraction(mStubList[i]);
}

void KCAttractionRankerSuper::sortStubList(){
  //std::cout << std::endl << "Sorted full list";
  sort(mStubList, mStubList + mStubListSize, sortByHighRating);
}

void KCAttractionRankerSuper::sortStub(KCAttractionStub aStub){
  //std::cout << std::endl << "Moved stub to right spot";
  //Locates aStub in list array (by comparing attraction pointer)
  //Uses adapted bubblesort to move element to new position
  /////Sourced from  
}

int KCAttractionRankerSuper::getCheapest(){
  return mCheapest;
}

KCAttractionStub KCAttractionRankerSuper::getTopAttraction(){
  std::cout << std::endl << "Got top attraction stub";
}

KCAttractionStub KCAttractionRankerSuper::getRankedAttraction(int place){
  std::cout << std::endl << "Got " << place << " ranked stub";
}


/*
  Master Ranker methods
 */

KCAttractionRankerMaster::KCAttractionRankerMaster(){
  std::cout << std::endl << "Created Master Rankeer";
}

KCAttractionRankerMaster::~KCAttractionRankerMaster(){
  std::cout << std::endl << "Deleted Master Ranker";
}

void KCAttractionRankerMaster::buildStubList(PlHAttractionList *aList){
  std::cout << std::endl << "Built attraction stub list";
}

int KCAttractionRankerMaster::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated this stub generically";
}

/*
  Ride Ranker methods
 */

KCRideRanker::KCRideRanker(){
  std::cout << std::endl << "Created Ride Ranker";
}

KCRideRanker::~KCRideRanker(){
  std::cout << std::endl << "Deleted Ride Ranker";
}

void KCRideRanker::buildStubList(PlHAttractionList *aList){
  std::cout << std::endl << "Built ride stub list";
}

int KCRideRanker::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated via ride metrics";
}

int KCRideRanker::getLeastThrilling(){
  return mLeastThrilling;
}

int KCRideRanker::getLeastNauseating(){
  return mLeastNauseating;
}

/*
  Vendor Ranker methods
 */

KCVendorRanker::KCVendorRanker(){
  std::cout << std::endl << "Created Vendor Ranker";
}

KCVendorRanker::~KCVendorRanker(){
  std::cout << std::endl << "Deleted Vendor Ranker";
}

void KCVendorRanker::buildStubList(PlHAttractionList *aList){
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

void KCGameRanker::buildStubList(PlHAttractionList *aList){
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

void KCCoinStandRanker::buildStubList(PlHAttractionList *aList){
  std::cout << std::endl << "Built CoinStand stub list";
}

int KCCoinStandRanker::rateAttraction(KCAttractionStub *targetStub){
  std::cout << std::endl << "Rated via CoinStand metrics";
}

int KCCoinStandRanker::getSmallest(){
  return mSmallest;
}
