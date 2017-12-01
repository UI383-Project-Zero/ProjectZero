#include <iostream>

#include "../../inc/SA/population.h"
#include "PopulationConfiguration.cpp"

/**
* Constructor population.
*
* @param 
* @return 
*/
SAPopulation::SAPopulation() {
  //std::cout << "SAPopulation() Constructor.\n";
}

/**create population
* this is for singleton pattern 
*
* @return 
*/
SAPopulation* SAPopulation::getMUniqueInstance() {
	if (mUniqueInstance == NULL) {
		mUniqueInstance = new SAPopulation();
		std::cout << "population instant created\n";
	}
	return mUniqueInstance;
}

/**
* Set population size.
*
* @param i to be population size
* @return void
*/

void SAPopulation::setMPopSize(int i) {
	//std::cout << "SACustomer::setMPopSize(int)\n";
	mPopSize = i;
}

/**
* Get population size.
*
* @return population size
*/
int SAPopulation::getMPopSize() {
	//std::cout << "SACustomer::getMPopSize()\n";
	return 	mPopSize;
}

/**
* Set customers.
*
* @param x to be customers
* @return void
*/
void SAPopulation::setMCustomers(std::vector<SACustomer*> x) {
	//std::cout << "SAPopulation::setMCustomers(vector<SACustomer>)\n";
	mCustomers=x;
}

/**
* Get customers.
* 
* @return customers.
*/
std::vector<SACustomer*> SAPopulation::getMCustomers() {
	//cout << "SAPopulation::getMCustomers()";
	return mCustomers;
}

/**
* Create population.
*
* @param 
* @return initial population
*/
//int SAPopulation::createPopulation() {
  //std::cout << "SAPopulation::createPopulation()\n";
  //int initialSize = 0;
  //initialSize = SAPopulationConfig::generateSize();
  //return initialSize;
//}

/**
* Adds new customer to the population.
*
* @param cust customer to be added in population
* @return void
*/
void SAPopulation::addMCustomers(SACustomer* cust) {
  //std::cout << "SAPopulation::addMCustomers(SACustomer)\n";
  mCustomers.push_back (cust);
}

/**
* Delete customers from the population.
*
* @param cust customer to be removed from population
* @return bool true if found item to remove, false if not found
*/
bool SAPopulation::removeMCustomers(int custId) {
    //std::cout << "SAPopulation::removeMCustomers(SACustomer)\n";
    bool isFound = false;
    std::vector <SACustomer*>::iterator iter;
    for (iter = mCustomers.begin(); iter != mCustomers.end(); ++iter) {
        if ((*iter)->getMCustID() == custId) {
            iter = mCustomers.erase(iter); // After erasing, iter is now pointing the next location.
            --iter; // Go to the previous location because of ++iter in the end of for loop.
            isFound = true;
        }
    }
    
    return isFound;
}

/**
* Update customers.
*
* @param cust customer 
* @return void
*/
//void SAPopulation::updateMCustomers(int cust) {
  //std::cout << "SAPopulation::updateMCustomers(int)\n";
//}
