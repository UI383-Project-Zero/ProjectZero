#include <iostream>

#include "population.h"

using namespace std;



SAPopulation::SAPopulation(){

  cout << endl << "Population set-up.";

}


SAPopulation::~SAPopulation(){

  cout << endl << "Population deleted.";

}



int SAPopulation::createPopulation(){

  cout << endl << "create population.";
  return 0;

}



void SAPopulation::addMCustomers(SACustomer){

  cout << endl << "add customers.";


}


 void SAPopulation::removeMCustomers(SACustomer){

  cout << endl << "remove customers.";
 

}


void SAPopulation::updateMCustomers(int cust){

  cout << endl << "update customers.";

}
