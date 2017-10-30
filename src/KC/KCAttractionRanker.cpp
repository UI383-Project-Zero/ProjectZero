#include <iostream>
#include <forward_list>

#include "KCAttractionRanker.h"

KCAttractionRankerSuper::KCAttractionRankerSuper(){
  std::cout << std::endl << "Ranker Super Created";
}

KCAttractionRankerSuper::~KCAttractionRankerSuper(){
  std::cout << std::endl << "Ranker Super Deleted";
}

void KCAttractionRankerSuper::rateAll(){
  std::cout << std::endl << "Rated all stubs";
}

void KCAttractionRankerSuper::sortStubList(){
  std::cout << std::endl << "Sorted full list";
}

void KCAttractionRankerSuper::sortStub(){
  std::cout << std::endl << "Moved stub to right spot";
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

KCAttractionRankerMaster::KCAttractionRankerMaster(){
  std::cout << std::endl << "Created Master Rankeer";
}

KCAttractionRankerMaster::~KCAttractionRanekrMaster(){
  std::cout << std::endl << "Deleted Master Ranker";
}
