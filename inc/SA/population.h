#ifndef SA_POPULATION_H_
#define SA_POPULATION_H_

#include <vector>
#include "customer.h"

class SAPopulation {
private:
	SAPopulation();  // for making singleton
	static SAPopulation *mUniqueInstance;  // for making singleton
    static int nextId;  // to automatically assign id 
	int mPopSize;
    std::vector<SACustomer*> mCustomers;
public:
    static SAPopulation* getMUniqueInstance();
	void setMPopSize(int);
	int getMPopSize();
	void setMCustomers(std::vector<SACustomer*>);
	std::vector<SACustomer*> getMCustomers();
    void addMCustomers(SACustomer*);
    bool removeMCustomers(int);
    
    static int getNextId() {return ++nextId;}
};
// initialize static singleton pointer
SAPopulation *SAPopulation::mUniqueInstance = NULL;  // initialize unique instance to NULL at begining
// initialize customer id counter
int SAPopulation::nextId = 0;
#endif  // SA_POPULATION_H__
