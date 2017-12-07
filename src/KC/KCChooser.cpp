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

unsigned int KCChooser::statusCheck(){ //Checks stats, decides if ride/game/vendor preference, or if neutral
  //cout << endl << "Status checked.";
  ////////////////////////Ready to leave?

  //return 0;
  ////////////////////////Hungry?

  //return 3;
  ////////////////////////Not Hungry (or nauseaus)? Have coins?

  //return 4;
  ////////////////////////No coins, not hungry, not nauseaus? Like thrill?
  //return 2;

  ////////////////////////No better selection?
  return 1;
}

unsigned int KCChooser::patienceCheck(){
  //cout << endl << "Patience checked.";
  //////////////////////////Ready to leave?
  return 0;
  //////////////////////////Almost ready to leave?
  return 1;
  //////////////////////////Okay
  return 2;
}

Attraction* KCChooser::attractionSelect(int preference){ //Picks best ride/game/vendor or overall attraction that subject has stats to use
  //cout << endl << "Attraction selected.";
  Attraction* attrChoice;
  
  return attrChoice;
}
