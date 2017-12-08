#include <iostream>
#include <vector>

#include "customer.h"
#include "population.h"
#include "SAWeights.h"

SAPopulation::SAPopulation() {
  mNextID = 0;
  mMaxSize = 0;
  mCurrentWeatherMod = 3;
}

int SAPopulation::createNewPopulation(int weather){
  int startSize;
  switch(weather){
  case 1:
    mCurrentWeatherMod = WORST_WEATHER_MOD;
    break;
  case 2:
    mCurrentWeatherMod = BAD_WEATHER_MOD;
    break;
  case 3:
    mCurrentWeatherMod = GOOD_WEATHER_MOD;
    break;
  default:
    mCurrentWeatherMod = GOOD_WEATHER_MOD;
  }

  startSize = mMaxSize * mCurrentWeatherMod * INITIAL_PERCENT;

  mCustomers.clear();

  mNextID = 0;
  
  if(startSize-mCustomers.capacity() > 0){
    mCustomers.reserve(startSize - mCustomers.capacity());
  }

  addCustomers(startSize);

  return startSize;
}

void SAPopulation::addCustomers(int newCount){
 SACustomer *temp;
 for(int i = 0; i<newCount; i++){
   temp = new SACustomer(getNextID());
   mCustomers.push_back(temp);
 }
}

void SAPopulation::removeCustomer(int custID){
  for(int i = 0; i<mCustomers.size(); i++){
    if(mCustomers[i]->getMCustID()==custID){
      mCustomers.erase(mCustomers.begin()+i);
      return;
    }
  }
  return;
}

void SAPopulation::updatePopulation(int ticksLeft){
  if(ticksLeft > STOP_ADD_TICK && mNextID <= mMaxSize * mCurrentWeatherMod){
    addCustomers(ADD_PER_TICK);
  }
  return;
}
