/*  This file will contain all of formatting necessary for
 *  printing the report to the screen
 *
*/

#include <iostream>
using namespace std;
#include "../../inc/CP/report.h"


void report::printreport(){
  printweather();
  printpeople();
  printrides();
  printvendors();
  printgames();
}


void report::printweather(){
  cout << "The weather for the simulation period was as follows" << endl;
  cout << "\tSunny Days: " << endl;
  cout << "\tRainy Days: " << endl;
  cout << "\tOvercast Days: " << endl;
  cout << "\tSnowy Days: " << endl;
}

void report::printpeople(){
  int total_people = 0;
  for(int i = 0; i < dailyNumPeople.size(); i++){
    total_people += dailyNumPeople[i];
  }

  cout << "People Statistics:" << endl;
  cout << "Total number of people that visited: " << total_people << endl;
  cout << "\tAverage Satisfaction: " << avg_satisfaction << endl;
  cout << "\tAverage Money per person: " << avg_money << endl;
  cout << "\tAverage number of tickets" << avg_tickets << endl;
  cout << "\tAverage hunger(1-5): " << avg_hunger << endl;
  cout << "\tAverage stamina(1-5): " << avg_stamina << endl;
  cout << "\tAverage Nausea(1-5): " << avg_nausea << endl;
  cout << "\tAverage Patience(1-5): " << avg_patience << endl;
  cout << "\tAverage Thrillseeking(1-5): " << avg_thrillseeking << endl;
}

void report::printrides(){
  int total_ride_cost = 0;
  for(int i = 0; i < dailyRideSales.size(); i++){
    total_ride_cost += dailyRideSales[i];
  }

  cout << "Ride Statistics:" << endl;
  cout << "\tThe most popular ride was: " << endl;
  cout << "\tTotal Amount of money spent on rides: " << total_ride_cost << endl;
  cout << "\tTotal number of rides that people took: " << endl;
}

void report::printgames(){
  int total_game_cost = 0;
  for(int i = 0; i < dailyGameSales.size(); i++){
    total_game_cost += dailyGameSales[i];
  }

  cout << "Game Statistics:" << endl;
  cout << "\tThe most popular Game was: " << endl;
  cout << "\tTotal amount of money spent on Games: " << total_game_cost << endl;
  cout << "\tAverage Wait time in line: " << endl;
}

void report::printvendors(){
  int total_vendor_cost = 0;
  for(int i = 0; i < dailyVendorSales.size(); i++){
    total_vendor_cost += dailyVendorSales[i];
  }

  cout << "Vendor Statistics:" << endl;
  cout << "\tThe most popular Vendor was: " << total_vendor_cost << endl;
  cout << "\tTotal amount of money spent on Vendors: " << endl;
  cout << "\tAverage Wait time in line: " << endl;
}
