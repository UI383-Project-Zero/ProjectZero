#ifndef SA_POPULATION_H_
#define SA_POPULATION_H_

#include <vector>
#include "customer.h"

class SAPopulation {
 private:
  SAPopulation();  // for making singleton
  static SAPopulation *mUniqueInstance;  // for making singleton
  static int mNextID;  // to automatically assign id 
  int mMaxSize;
  std::vector<SACustomer*> mCustomers;
 public:
  static SAPopulation* getMUniqueInstance();
  void setMMaxSize(int);
  int getMMaxSize();
  std::vector<SACustomer*> getMCustomers();
  void addMCustomers(int);
  void removeMCustomer(SACustomer*);
  int createPopulation();
  void updateMCustomers(int);
    
  static int getNextId() {return ++nextId;}
};
// initialize static singleton pointer
SAPopulation *SAPopulation::mUniqueInstance = NULL;  // initialize unique instance to NULL at begining
// initialize customer id counter
int SAPopulation::nextId = 0;
#endif  // SA_POPULATION_H__
