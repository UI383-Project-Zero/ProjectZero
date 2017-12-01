/* Jackson Taylor
 * 11/29/2017
 * JtVendor.cpp
 
 	Implementation File for the Attraction Concrete Subclass JtVendor
	This class exists to recive Patrons from the behaviour module
	and to advance them through a queue and serve them food on each iteration 
	off the main loop. Because it relies so heavily on the Patron, Behavior, and
	the PatronQueue classes which have not been completed as of yet some functionality 
	is currently commented out.
	
 * */
#include <iostream>
#include "Vendor.h"
#include "JtOrderDecorator.cpp"
#include "JtDummyPatron.h"

using namespace std;


Vendor::Vendor(string nameV, int serviceTimeV)
{
	mName = nameV;					//mName is decided via parameter during instantiation
	mServiceTime = serviceTimeV;	//serviceTime is decided via parameter during instantiation
	mLineLength = 0;				//no one is in line when the vendor is instantiated
	mCurrentlyServing = null;		//no one is being served when the vendor is instantiated
	mEarnings = 0;					//no money has been earned when the vendor is instantiated
	//attractionQueue = new PatronQueue(); 
}

/*DummyPatron Vendor::removeFromQueue(PatronQueue attractionQueue)
{
	//As mentioned previously still don't have this class 
	//But the idea is to remove the front Patron from the queue
	//Decrement the line length and return thhe Patron we removed to 
	//be set to the mCurrentlyServing member variable.
	mLineLength -=1;
	return attractionQueue.removeFromFront();
}*/

//evaluates the state of the vendor, if there is a patron in line and none being currently served
//we set the patron in the front of the line to be currently served by calling 
//setMCurrentlyServing(removeFromQueue(PatronQueue mAttracionQueue)
void Vendor::evaluateAttraction
{
	if (mCurrentlyServing == null && mLineLength != 0)
	{
		setMCurrentlyServing(removeFromQueue(PatronQueue mAttractionQueue);
	}
}
//sets the mCurrentlyServing value with the nextPatron parameter
//which ideally would be returned by the removeFromQueue method which is yet to be recieved
//For now I am using a DummyPatron object to simulate the process.
void  Vendor::setMCurrentlyServing(DummyPatron nextPatron)
{
	mCurrentlyServing = nextPatron;
	placeOrder(nextPatron.criterion);
}
//The patron places their order based on the criterion value which is a placeholder for now
//but with group input and colloboration can be resolved to be level of hunger, available funds or 
//more complex behavior. The order then calls takePayment and effectPatron passing them their parameters as well.
void Vendor::placeOrder(int criterion)
{
	if (criterion == 1)
	{
		JtOrder order1	= new JtEmpty();
		order1 = new JtNacho(order1);
		takePayment(order1.cost());
		effectPatron(order1.satisfaction());
	}	
	
	else if (criterion == 2)
	{
		JtOrder order2 = new JtEmpty();
		order2 = new JtHotDog(order2);
		takePayment(order2.cost());
		effectPatron(order2.satisfaction());
	}	
	
	else if (criterion == 3)
	{
		JtOrder order3 = new JtEmpty();
		order3 = new JtSoda(order3);
		takePayment(order3.cost());
		effectPatron(order3.satisfaction());
	}
	
	else if (criterion == 4)
	{
		JtOrder order4 = new JtEmpty();
		order4 = new JtElephantEar(order4);
		takePayment(order4.cost());
		effectPatron(order4.satisfaction());
	}
}

//decrements the patrons money based on the cost of their order
//additonally calls calculate earnings passing the cost of the order 
//as a parameter to increment the vendors earnings tally 
float Vendor::takePayment(float cost)
{
mCurrentlyServing.money -= cost;
calculateEarnings(cost);
}

//increment the patrons satisfaction level based on the value of their order
void Vendor::effectPatron(int satisfaction)
{
mCurrentlyServing.satisfaction += satisfaction;
}

//Unflags the DummyPatron that is currently being served and sets mCurrentlyServing to null 
//so that it is open to accept then next patron.
void Vendor::unflagPatron()
{
mCurrentlyServing.isfree();
mCurrentlyServing = null;
}

//simply incrments the mEarnings tally by the value of the most recent sale
float Vendor::calculateEarnings(float earnings)
{
mEarnings+= earnings;
}

