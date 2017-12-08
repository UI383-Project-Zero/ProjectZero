#ifndef SA_POPULATION_H_
#define SA_POPULATION_H_

#include <vector>
#include "customer.h"

class SAPopulation {
 private:
  SAPopulation();  // for making singleton
  static int mNextID;  // to automatically assign id 
  int mMaxSize;
  std::vector<SACustomer*> mCustomers;
 public:
  void setMMaxSize(int);
  int getMMaxSize();
  std::vector<SACustomer*> getMCustomers();
  void addMCustomers(int);
  void removeMCustomer(SACustomer*);
  int createPopulation();
  void updatePopulation(int);
};

#endif
