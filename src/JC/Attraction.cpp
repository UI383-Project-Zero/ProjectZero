/*	Jordan Cates
	CS383
	Project Zero
	Attraction Src
*/

#include "Attraction.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Attraction::constructFromConfigFile() {
	 //Will create the queue of attractions from the input from the GUI.
	 ifstream file;
	 string type;
	 string tempname;
	 int nauseafactor;
	 int hungerfactor;
	 int boredomfactor;
	 int staminafactor;
	 int satisfactionfactor;

	 int j = 0;
	 int k = 0;
	 int l = 0;
	 
	 Games Game[20];
	 Vendors Vendor[20];
	 Rides Ride[20];
	 
	 file.open("SampleConfig.txt");  //Open the configuration file
	 
	 /*For each of the following, fetch each word from the config file, one line at a time.  
	 Each line, no matter what its type, will always have each of these factors because everything, 
	 Rides, Games, and Vendors are all going to impact the stats of the patron in some way shape or form, even if that factor is zero*/
	 for (int i = 0; i < 60; i++) {
		file >> type >> tempname >> nauseafactor >> hungerfactor >> boredomfactor >> staminafactor >> satisfactionfactor;
		if(type == "Ride") {
			Ride[j].name = tempname;
			Ride[j].nausea = nauseafactor;
			Ride[j].hunger = hungerfactor;
			Ride[j].boredom = boredomfactor;
			Ride[j].stamina = staminafactor;
			Ride[j].satisfaction = satisfactionfactor;
			j++;
		}
		
		if(type == "Vendor") {
			Vendor[k].name = tempname;
			Vendor[k].nausea = nauseafactor;
			Vendor[k].hunger = hungerfactor;
			Vendor[k].boredom = boredomfactor;
			Vendor[k].stamina = staminafactor;
			Vendor[k].satisfaction = satisfactionfactor;
			k++;
		}
		
		if(type == "Game") {
			Game[l].name = tempname;
			Game[l].nausea = nauseafactor;
			Game[l].hunger = hungerfactor;
			Game[l].boredom = boredomfactor;
			Game[l].stamina = staminafactor;
			Game[l].satisfaction = satisfactionfactor;
			l++;
		}
		
	 }
}

void Attraction::removeFromQueue() {
	
}

void Attraction::takePayment(int i, double cost/*,Games Game[j]*/) {
	//Removes money from the wallet of the Patron, depending on what attraction they went to.
	SACustomer[i].mMoney - cost;
	Game[j].profit + cost;
}

void Attraction::calculateProfits() {
	//Uses money gained from each Patron and the operating cost of each attraction to generate profits for each attraction.
	float GameProfits;
	float VendorProfits;
	float RideProfits;
	
	for (int i = 0; i < 20; i++) {
		GameProfits += Game[i].profit;
	}
	
	for (int i = 0; i < 20; i++) {
		VendorProfits += Vendor[i].profit;
	}
	
	for (int i = 0; i < 20; i++) {
		RideProfits += Ride[i].profit;
	}
	
}

void Attraction::unflagPatron() {
	SACustomer.mBusy = false;
}
int Attraction::getLineLength() {
	return linelength;
}
