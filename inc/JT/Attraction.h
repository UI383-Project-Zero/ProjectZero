/*
 * 	Jackson Taylor 10/28/2017
 * 	Attraction.h
 * 	Abstract Class to provide interface for all attractions (Ride,Patron,GameArea,Games) 
 *
 * 			*/

#ifndef ATTRACTION_H
#define ATTRACTION_H
//#include<string.h>
#include<string>
using namespace std;
class Attraction
{
		public:
			string name;
			//attractionQueue PatronQueue; 
			int lineLength;

			
		protected:
			//virtual void removeFromQueue(PatronQueue attractionQueue) = 0;
			
			virtual float takePayment(float cost) =0;
			
			virtual void effectPatron(int satisfaction, int hunger) =0;
			
			virtual void unflagPatron() = 0;
			
			virtual float calculateProfits() =0;
			
};

#endif //ATTRACTION_H
