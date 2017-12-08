#include <iostream>
#include "KCChooser.h"
#include "KCCrowdDirector.h"

KCCrowdDirector::KCCrowdDirector(){
  //std::cout << std::endl << "Crowd Director created";
}

KCCrowdDirector::~KCCrowdDirector(){
  //std::cout << std::endl << "Crowd Director deleted";
}

//Calls buildstublist for mMasterList
//Assumes array of attraction base type
void KCCrowdDirector::getRides(Attraction *aList, int rideCount, int vendorCount, int gameCount, int coinStandCount){ 
  //std::cout << std::endl << "Got a list";
  mMasterList.buildStubList(aList, rideCount, vendorCount, gameCount, coinStandCount);
}

//Just gets pointer for population object
void KCCrowdDirector::getPopulation(SAPopulation *aPop){
  //std::cout << std::endl << "Got a crowd";
  mCrowd = aPop;
}

//Steps through population and calls updateCustomer on each.
//Needs final implementation of population for loop impl. info
void KCCrowdDirector::updateCrowd(){
  std::cout << std::endl << "Updated crowd";
}

void KCCrowdDirector::updateCustomer(SACustomer* currSubject){
  //std::cout << std::endl << "Updated customer";
  mDecider.newSubject(currSubject);

  int cust_pref = mDecider.StatusCheck();
  if (!cust_pref){ //0: Remove customer 
    //remove customer
    return;//update finished
  }
  else if(cust_pref == 1){ //1:Enqueued customer
    cust_pref = mDecider.patienceCheck();
    if (!cust_pref){ //0: remove from queue
      //remove customer from queue
      return;
    }
    else if(cust_pref == 1){//1: stay, penalty
      //Penalty to stats
    }
    return; //update finished
  }
  
}

