#include <iostream>
#include "KCChooser.h"


KCChooser::KCChooser(){
  std::cout << std::endl << "Chooser set-up. Don't need much.";
}

KCChooser::~KCChooser(){
  std::cout << std::endl << "Chooser deleted.";
}

void KCChooser::newSubject(SACustomer* sub){
  mSubject = sub;
}

unsigned int KCChooser::statusCheck(){
  std::cout << std::endl << "Status checked.";
  return 0;
}

unsigned int KCChooser::patienceCheck(){
  std::cout << std::endl << "Patience checked.";
  return 0;
}

PlHAttractionPointer KCChooser::attractionSelect(){
  std::cout << std::endl << "Attraction selected.";
  return NULL;
}
