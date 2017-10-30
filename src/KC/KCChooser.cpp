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

unsigned int KCChooser::statusCheck(){
  cout << endl << "Status checked.";
  return 0;
}

unsigned int KCChooser::patienceCheck(){
  cout << endl << "Patience checked.";
  return 0;
}

PlHAttraction* KCChooser::attractionSelect(){
  cout << endl << "Attraction selected.";
}
