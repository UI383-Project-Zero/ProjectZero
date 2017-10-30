/* Jackson Taylor 10/28/2017
	Ride.h
	Header File for Ride concrete class of Attraction
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
		
		int capacityMax;
		int capacityMin;
		int rideDuration;
		
	public 	:
			Ride(string name,int capacityMax, int capacityMin, int rideDuration);
			
			float rideCost;
			
			//void removeFromQueue(PatronQueue attractionQueue); 
			
			float takePayment(float cost); 
			
			void effectPatron(int satisfaction, int hunger); 
			
			void unflagPatron(); 
			
			float calculateProfits();  
	
	
};

#endif //RIDE_H
