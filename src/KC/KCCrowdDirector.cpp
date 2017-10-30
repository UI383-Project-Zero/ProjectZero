#include <iostream>
#include "KCChooser.h"
#include "KCCrowdDirector.h"

KCCrowdDirector::KCCrowdDirector(){
  std::cout << std::endl << "Crowd Director created";
}

KCCrowdDirector::~KCCrowdDirector(){
  std::cout << std::endl << "Crowd Director deleted";
}

void KCCrowdDirector::getRides(PlHAttractionList *aList){
  std::cout << std::endl << "Got a list";
}

void KCCrowdDirector::getPopulation(SAPopulation *aPop){
  std::cout << std::endl << "Got a crowd";
  mCrowd = NULL;
}

void KCCrowdDirector::updateCrowd(){
  std::cout << std::endl << "Updated crowd";
}

void KCCrowdDirector::updateCustomer(SACustomer* currSubject){
  std::cout << std::endl << "Updated customer";
  mDecider.newSubject(currSubject);
}

