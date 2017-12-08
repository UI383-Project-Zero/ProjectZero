/* 	Jackson Taylor 11/30/2017
  	JtAttraction.h
  	Header File for the Abstract Class JtAttraction.h to provide the 
	interface for all attractions (Ride,Vendor,GameArea,Games).
	This class exists simply to provide an interface for its subclasses
	to make it easier for other modules to interact with them in uniform ways.
	Note that all methods are abstract.
	
*/

#ifndef ATTRACTION_H
#define ATTRACTION_H
#include<string>
using namespace std;
class Attraction
{
		public:
			//all attractions have a name such as "Food Vendor" or "RollerCoaster"
			string mName;
			
			//replacing patronQueue
			SACustomer * attractionQueue [100];
	
			//attractionQueue PatronQueue; //as previously mentioned I do not have the 
			//attractionQueue code available to me yet
			
			//all attractions keep track of the number of patrons currently waiting in line
			int mLineLength;
			
			//all attractions hold onto their index value used to access the JtAttractionIndex.mAttractionArray[]
			//this value is set via the subclasses constructor upon instantiation
			int mAttractionArrayIndex;

			
		protected:
			//commented out due to the absence of a PatronQueue currently
			//virtual void removeFromQueue(PatronQueue attractionQueue) = 0;
			
			//the abstract methods more detail is documented in the individual sublcasses
			virtual float takePayment(float cost) =0;
			
			virtual void effectPatron(int satisfaction, int hunger) =0;
			
			virtual void unflagPatron() = 0;
			
			virtual float calculateProfits() =0;
			
};

#endif //ATTRACTION_H
