/* Jackson Taylor 11/30/2017
	Ride.h
	
	Header File for Ride concrete class of Attraction
	This class exists to recieve patrons who are queued in 
	the mAttractionQueue PatronQueue (class has not been delivered)
	Take their money, place them on the ride,let the ride for the duration
	remove them from the ride effect their satisfaction and unflag them so they
	may be returned to the behaviour module.
*/
	
#ifndef RIDE_H
#define RIDE_H

#include"Attraction.h"
#include<string>
#include<iostream>
using namespace std;

class Ride: public Attraction
{
	private	:
		
		static int final mCapacityMax;				//the maximumnumber of ptrons that can ride at the same time
		int mCapacityMin;							//the minimum number of patrons that the ride will start with
		int mRideDuration;							//the number of the cycles the ride goes for
		int mRidingFor;								//the number of cycles the ride has been active for
		float mCost;								//cost that patrons must pay to ride
		int mEarnings;								//running total of money recieve from patrons
		int mSatisfaction;							//satisfaction value a patron recieves from the ride
		DummyPatron mCurrentlyRiding [capacityMax];	//array that holds the Patrons currently on the ride
		//PatronQueue mAttractionQueue				//the line in which patrons wait to board the ride no class exists yet
		
		
	public 	:
			//Ride constructor needs to be passed the 5 parameters manually when the ride is instantiated
			Ride(string mName,int mCapacityMax, int mCapacityMin, int mrideDuration, float mCost, int mSatisfaction);
			
				

        public  :
				
				//constructor more detail in Vendor.cpp
				Vendor(string name, int rideDuration);
				
				//gets the current mlinelength value
				int getMLineLength();


				//evaluates the state of the ride, for every iteration of the simulation loop
				//if the ride is not currently active
				//check the PatronQueue for Patrons to add to the mCurrentlyRiding[]
				//continue adding patrons to the ride untill we reach max capacity or the line is empty
				//if we reached max capacity -> start the ride.
				//if the line is empty and mCurrentlyRiding[mCapacityMin]!= null (i.e. we have enough patrons
				//to proceed -> start the ride. 
				//if the ride is currently active compare mRideDuration with mRidingFor when mRidingFor == mRideDuration
				//disembark patrons effect their satisfaction and unflag them clear mCurrentlyRiding and wait for next loop
				void evaluateAttraction()                
				
				//takes the front patron out of the attractionQueue and returns it to be served
				//note I still do not have the simlib queue shared across all attractions from JC
				//DummyhPatron removeFromQueue(PatronQueue attractionQueue);
				
				//takes the patron that was just removeFromQueue(PatronQueue attractionQueue)
				//and sets them to mCurrentlyServing extends the behavior present in JtVendor class
				//by simply creating a for loop to iterate untill the ride is full or the line is empty 
				//more detail in JtRid.cpp
				void  setMCurrentlyServing(Patron nextPatron)
				

				
				//decrements the patrons money based on the cost of the ride happens when they are added to mCurrentlyRiding[]
				float takePayment(float cost);
               	
				//increment the patrons satisfaction level based on the value of the ride happens whey they are removed form mCurrentlyRiding[]
				void effectPatron(int satisfaction);
				
              	//removes the patrons busy flag so the behaviour module can dictate their next move
				void unflagPatron(Patron justServed);
				
				//simply adds the cost of the ride to the earnings tally when a patron pays 
				//can be expanded with more advanced behavior later (operating costs etc.)
               	float calculateEarnings(float cost);
	
	
};

#endif //RIDE_H