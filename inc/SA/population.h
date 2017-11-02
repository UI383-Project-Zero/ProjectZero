#ifndef SA_POPULATION_H_
#define SA_POPULATION_H_

#include <vector>
#include "customer.h"

class SAPopulation {

private:
	int mPopSize;
    vector<SACustomer> mCustomers;

public:
	SAPopulation();
	~SAPopulation();
	void setMPopSize(int);
	int getMPopSize();
	void setMCustomers(vector<SACustomer>);
	vector<SACustomer> getMCustomers();
    int createPopulation();
    void addMCustomers(SACustomer);
    void removeMCustomers(SACustomer);
    void updateMCustomers(int);
};
#endif  // SA_POPULATION_H_
