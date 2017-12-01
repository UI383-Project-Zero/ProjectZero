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
  cout << "People Statistics:" << endl;
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
  cout << "Ride Statistics:" << endl;
  cout << "\tThe most popular ride was: " << endl;
  cout << "\tTotal Amount of money spent on rides: " << endl;
  cout << "\tTotal number of rides that people took: " << endl;
}

void report::printgames(){
  cout << "Game Statistics:" << endl;
  cout << "\tThe most popular Game was: " << endl;
  cout << "\tTotal amount of money spent on Games: " << endl;
  cout << "\tAverage Wait time in line: " << endl;
  cout << "\t" << endl;
}

void report::printvendors(){
  cout << "Vendor Statistics:" << endl;
  cout << "\tThe most popular Vendor was: " << endl;
  cout << "\tTotal amount of money spent on Vendors: " << endl;
  cout << "\tAverage Wait time in line: " << endl;
  cout << "\t" << endl;
}
