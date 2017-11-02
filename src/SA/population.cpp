#include <iostream>

#include "../../inc/SA/population.h"
#include "PopulationConfiguration.cpp"
using namespace std;



SAPopulation::SAPopulation(){
  cout << "SAPopulation() Constructor."<< endl;
}

SAPopulation::	~SAPopulation(){
  cout << "~SAPopulation() Destructor."<< endl;
}
void SAPopulation::setMPopSize(int i) {
	cout << "SACustomer::setMPopSize(int)" << endl;
	mPopSize = i;
}

int SAPopulation::getMPopSize() {
	cout << "SACustomer::getMPopSize()" << endl;
	return 	mPopSize;
}
void SAPopulation::setMCustomers(vector<SACustomer> x){
	cout << "SAPopulation::setMCustomers(vector<SACustomer>)" << endl;
	mCustomers=x;
}
vector<SACustomer> SAPopulation::getMCustomers(){
	cout << "SAPopulation::getMCustomers()" << endl;
	return mCustomers;
}
int SAPopulation::createPopulation() {
  cout << "SAPopulation::createPopulation()"<< endl ;
  int initialSize = 0;
  initialSize = SAPopulationConfig::generateSize();
  return initialSize;
}

void SAPopulation::addMCustomers(SACustomer cust){
  cout << "SAPopulation::addMCustomers(SACustomer)"<< endl ;
  mCustomers.push_back (cust);
}


 void SAPopulation::removeMCustomers(SACustomer cust){
  cout << "SAPopulation::removeMCustomers(SACustomer)"<< endl;
  //mCustomers.erase (mCustomers.begin() + 5);  // think logic to remove from vector
  /*int index = 0;
  for (std::vector<SACustomer>::iterator it = mCustomers.begin() ; it != mCustomers.end(); ++it)
    SACustomer c = *it;
    if(cust.getMCustID() == c.getMCustID()) {
    	index = 
	}*/
}

void SAPopulation::updateMCustomers(int cust){

  cout << "SAPopulation::updateMCustomers(int)"<< endl;

}



