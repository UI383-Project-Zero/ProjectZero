#ifndef SA_POPULATION_H_
#define SA_POPULATION_H_

#include <vector>
#include "customer.h"

class SAPopulation {
 private:
  SAPopulation();
  static int mNextID;  // to automatically assign id
  int getNextID(){return mNextID++;}
  int mMaxSize;
  double mCurrentWeatherMod;
  std::vector<SACustomer*> mCustomers;
 public:
  void setMMaxSize(int newMax){mMaxSize = newMax;}
  int getMMaxSize(){return mMaxSize;}
  std::vector<SACustomer*> getMCustomers(){return mCustomers;}
  int createNewPopulation(int);
  void addCustomers(int);
  void removeCustomer(int);
  void updatePopulation(int);
};

#endif
