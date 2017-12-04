#include <iostream>
#include "KCChooser.h"
using namespace std;

KCChooser::KCChooser(){
  cout << endl << "Chooser set-up. Don't need much.";
}

KCChooser::~KCChooser(){
  cout << endl << "Chooser deleted.";
}

void KCChooser::newSubject(SACustomer* sub){
  mSubject = sub;
}

unsigned int KCChooser::statusCheck(){ //Checks stats, decides if ride/game/vendor preference, or if neutral
  cout << endl << "Status checked.";
  return 0;
}

unsigned int KCChooser::patienceCheck(){
  cout << endl << "Patience checked.";
  return 0;
}

PlHAttraction* KCChooser::attractionSelect(){ //Picks best ride/game/vendor or overall attraction that subject has stats to use
  cout << endl << "Attraction selected.";
}
