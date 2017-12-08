/* Jackson Taylor
 * 11/29/2017
 * JtVendor.h
 
 Header File for the Attraction Concrete Subclass JtVendor
 This class exists to recive Patrons from the behaviour module
 and to advance them through a queue and serve them food on each iteration 
 off the main loop. Because it relies so heavily on the Patron, Behavior, and
 the PatronQueue classes which have not been completed as of yet some functionality 
 is currently commented out.
	
 * */

#ifndef VENDOR_H
#define VENDOR_H


#include"JtAttraction.h"
#include<string>
#include<iostream>

using namespace std;

class Vendor: public Attraction
{
 private :
				
  SACustomer mCurrentlyServing;		//is being run as a dummy module since I dont have the patron module yet
  int serviceTime;		//number of cycles it takes to serve one customer assigned in the constructor
  float mEarnings;		//running total of money recieved from patrons
				//PatronQueue? attractionQueue 	//the line in which patrons wait to be served
				//still missing the implementation from another module and is commented out for now
				

 public  :
				
  //constructor more detail in Vendor.cpp
  Vendor(string name, int rideDuration);
				
  //gets the current mlinelength value
  int getMLineLength();


  //evaluates the state of the vendor, if there is a patron in line and none being currently served
  //we set the patron in the front of the line to be currently served by calling 
  //setMCurrentlyServing(removeFromQueue(PatronQueue mAttracionQueue)
  //this is the main method that will be called for every iteration through the main simulation loop
  void evaluateAttraction();               
				
    //takes the front patron out of the attractionQueue and returns it to be served
    //note I still do not have the simlib queue shared across all attractions from JC
    //DummyhPatron removeFromQueue(PatronQueue attractionQueue);
				
    //takes the patron that was just removeFromQueue(PatronQueue attractionQueue)
    //and sets them to mCurrentlyServing
  void  setMCurrentlyServing(SACustomer nextPatron);
				
    //generates and processes a  food order for a patron based on as of yet undecided criterion
  void placeOrder(int Criterion);
				
    //decrements the patrons money based on the cost of their order 
  float takePayment(float cost);
               	
  //increment the patrons satisfaction level based on the value of their order
  void effectPatron(int satisfaction);
				
  //removes the patrons busy flag so the behaviour module can dictate their next move
  void unflagPatron(SACustomer justServed);
				
  //simply adds the most recent orders cost to the mEarnings tally
  //can be expanded with more advanced behavior later (operating costs etc.)
  float calculateEarnings(float cost);



};
#endif //VENDOR_H
