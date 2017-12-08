#include <iostream>
#include "KCChooser.h"

using namespace std;

KCChooser::KCChooser(){
  //cout << endl << "Chooser set-up. Don't need much.";
}

KCChooser::~KCChooser(){
  //cout << endl << "Chooser deleted.";
}

void KCChooser::newSubject(SACustomer* sub){
  mSubject = sub;
}

//StatusCheck codes:
//0: Done. Remove customer
//1: Occupied. Finish update
//2: Queued. Check patience
//3: Free. Put somewhere
unsigned int KCChooser::statusCheck(){
  //DONE. Out of stamina or money/tickets
  if(mSubject->getMStamina() <= 0 || mSubject->getMMoney() <= 0){
    return 0;
  }
  //OCCUPIED. Currently on/using/visiting ride/attraction
  else if(mSubject->getMBusy()){
    return 1;
  }
  //QUEUED. Enqueued.
  else if(mSubject->getMQueue()){
    return 2;
  }
  //FREE. nothing else happening
  else{
    return 3;
  }
  
}


//Needs some sort of queue tracker implemented in customer.h
//i.e. mEnqueuedTick, getWaitTime()
unsigned int KCChooser::patienceCheck(){
  //cout << endl << "Patience checked.";
  //////////////////////////Ready to leave?
  //if wait time > sub->getMPatience();
  return 0;
  //////////////////////////Almost ready to leave?
  //else if (wait time > sub->getMPatience()*LONG_WAIT_PERCENT)
  return 1;
  //////////////////////////Okay
  //else{
  return 2;
}


//If no selection, returns NULL. Assumed to mean no possible rides
Attraction* KCChooser::attractionSelect(KCAttractionRankerMaster* mList){
  //cout << endl << "Attraction selected.";
  Attraction* attrChoice;
  attrChoice = NULL;

  //Decision making process here
  
  return attrChoice;
}
