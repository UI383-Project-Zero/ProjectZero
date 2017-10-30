/* Jackson Taylor
 * 10/28/2017
 * Vendor.h
 * */

#ifndef VENDOR_H
#define VENDOR_H

#include"Attraction.h"
#include<string>
#include<iostream>

using namespace std;

class Vendor: public Attraction
{
        private :

                int serviceTime;

        public  :
		int lineLength;

		struct food 
		{
			float foodcost;
			string foodname;
			int foodhungervalue;
			int foodsatisfactionvalue;

		};

                Vendor(string name, int rideDuration);
                        
		//void removeFromQueue(PatronQueue attractionQueue);
		
		float takePayment(float cost);

               	void effectPatron(int satisfaction, int hunger);

              	void unflagPatron();

               	float calculateProfits();

		void getFoodInfo();

		void giveFood();

};
#endif //VENDOR_H
