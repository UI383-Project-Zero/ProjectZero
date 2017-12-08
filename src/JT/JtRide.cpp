/* Jackson Taylor 11/30/2017
	JtRide.cpp
	
	Impplementation File for Ride concrete class of Attraction
	This class exists to recieve patrons who are queued in 
	the mAttractionQueue PatronQueue (class has not been delivered)
	Take their money, place them on the ride,let the ride for the duration
	remove them from the ride effect their satisfaction and unflag them so they
	may be returned to the behaviour module.
*/


#include <iostream>
#include "Ride.h"

using namespace std;

//our constructor must do a lot of value setting to instantiate a new ride
Ride::Ride (string mNameR, int mCapacityMaxR, int mCapacityMinR, int mRideDurationR, float mCostR, int mSatisfactionR, int mThrillR) 
{
	mName = mNameR;
	mCapacityMax = mCapacityMaxR;
	mCapacityMin = mCapacityMinR;
	mRideDuration = mRideDurationR;
	mSatisfaction = mSatisfactionR;
	mCost = mCostR;		
	mLineLength = 0;							//empty line when created
	mEarnings = 0;								//no earnings at this point
	mRidingFor = 0;								//ride has not started yet
	mThrill = mThrillR;
	//attractionQueue = new PatronQueue();		//not delivered

}



int Ride::addToQueue(SACustomer * newlyArrivedCustomer)
{
	if (mLineLength == 0)
	{
		attractionQueue[0] = newlyArrivedCustomer;
		return 0;
	}
	
	if (mLineLength >= 1)
	{
		for (int i = 0; i < 100; i++)
		{
			if (attractionQueue[i] != NULL)
			{
				for (int j = 1; j < 100; j++)
				{
					int index = j+i%100;
					
						if (attractionQueue[index] == NULL)
						{
							attractionQueue[index] = newlyArrivedCustomer;
							return index;
						}
				}
			}
		}
	}

}

SACustomer * Ride::removeFromQueue()
{
	//As mentioned previously still don't have this class 
	//But the idea is to remove the front Patron from the queue
	//Decrement the line length and return thhe Patron we removed to 
	//be set to the mCurrentlyServing member variable.
	//hacking together a workaround
	if (mLineLength == 0)
	{
		//error no customer to grab
	}
	
	if (mLineLength >= 1)
	{
		for (int i = 0; i <100; i++)
		{
			if (attractionQueue[i] != NULL)
			{
				SACustomer * tempCustomer = attractionQueue[i];
				attractionQueue[i] = NULL;
				mLineLength -=1;
				return tempCustomer;
			}
		}
	}	
}
/*void Ride::removeFromQueue(PatronQueue attractionQueue)
{
}*/
//simply returns the value of mLineLength
int Ride::getMLineLength()
{
	return mLineLength;
}

//simply returns the value of mThrill
int Ride::getThrill()
{
	return mThrill;
}

//evaluates the state of the ride, for every iteration of the simulation loop
//if the ride is not currently active
//check the PatronQueue for Patrons to add to the mCurrentlyRiding[]
//continue adding patrons to the ride untill we reach max capacity or the line is empty
//if we reached max capacity -> start the ride.
//if the line is empty and mCurrentlyRiding[mCapacityMin]!= null (i.e. we have enough patrons
//to proceed -> start the ride. 
//if the ride is currently active compare mRideDuration with mRidingFor when mRidingFor == mRideDuration
//disembark patrons effect their satisfaction and unflag them clear mCurrentlyRiding and wait for next loop
void Ride::evaluateAttraction()
{
	if (mCurrentlyRiding[mCapacityMax] != null)
	{
		if (mRidingFor != mRideDuration)
		{
			mRidingFor +=1;			//iterate riding counter by 1
		}
		else if (mRidingFor == mRideDuration)
		{							//ride has finished effect patrons / disembark them
			mRidingFor = 0;
			for (int i = 0; i < mCapacityMax; i++)
			{
				effectPatron(mSatisfaction,i);
			}
		}
	}
	if (mCurrentlyRiding[0] == null)	//ride is empty waiting to be embarked
	{
		for (int i = 0; i < mCapacityMax; i++)
		{								//fill the ride with patrons from the front of the queue
		setMCurrentlyServing(DummyPatron removeFromQueue(PatronQueue attractionQueue))
		}
	}
}

//takes the patron that was just removeFromQueue(PatronQueue attractionQueue)
//and sets them to mCurrentlyServing extends the behavior present in JtVendor class
//by simply creating a for loop to iterate untill the ride is full or the line is empty 
//the for loop is contained in the evaluateAttraction() method
//note another for loop is contained in this method that iterates through the array of currently
//riding patrons searching for an empty seat
//perhaps I should change the method name here since the implementation differes slightly
//but keeping it as consistent as possible is also attractive.
void  Ride::setMCurrentlyServing(SACustomer nextPatron)
{
	for (int i =0; i < mCapacityMax; i++)
	{
		if (mCurrentlyRiding[i] == null)
		{
			mCurrentlyRiding[i] = nextPatron;
			takePayment(mCost,i);
			break;		
		}
	}
}


float Ride::takePayment(float cost, int index)
{
mCurrentlyRiding[index].mMoney -= cost;
calculateEarnings(cost);
}

void Ride::effectPatron(int satisfaction, int index)
{
	mCurrentlyRiding[index].mSatisfaction += satisfacton;
	unflagPatron(index);
}
//Removes a patron form the currently riding array and sets their busy flag to 0
void Ride::unflagPatron(int index)
{
	mCurrentlyRiding[index].isFree();	//note that isFree is a dummy / placeholder function dependant on another module
	mCurrentlyRiding[index] = null;		//clear patron from ride 
}

//simply adds the cost the patron paid to the earnings tally
float Ride::calculateEarnings(float cost)
{
mEarnings += cost;
}
