#include <iostream>
#include "Ride.h"
using namespace std;


Ride::Ride (string nameR, int capacityMaxR, int capacityMinR, int rideDurationR) 
{
	name = nameR;
	lineLength = 0;
	capacityMax = capacityMaxR;
	capacityMin = capacityMinR;
	rideDuration = rideDurationR;
	
}

/*void Ride::removeFromQueue(PatronQueue attractionQueue)
{

}*/

float Ride::takePayment(float cost)
{

}

void Ride::effectPatron(int satisfaction, int hunger)
{

}

void Ride::unflagPatron()
{

}

float Ride::calculateProfits()
{

}
