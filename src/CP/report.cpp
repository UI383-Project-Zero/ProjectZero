/* This file will define the implementation for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

// local includes
#include "../../inc/CP/report.h"
#include "printreport.h"

//global includes
#include <iostream>
using namespace std;

 void report::overallReport(){
   printreport();
 }

 void report::getWeather(){
   weather = weatherRatings;
 }

 people report::getPeopleStatistics(vector<SACustomer> c){

   people p;

   int count_people = getMPopSize();

   for(int i = 0; i < count_people; i++){
     p.stats[0] += c[i].getMSatisfaction();
     p.stats[1] += c[i].getMTickets();
     p.stats[2] += c[i].getMHunger();
     p.stats[3] += c[i].getMStamina();
     p.stats[4] += c[i].getMNausea();
     p.stats[5] += c[i].getMPatience();
     //p.stats[6] += c[i].mThrillSeeking

     p.money += c[i].getMMoney();
   }

   for(int i = 0; i < 7; i++){
     p.stats[i] = p.stats[i] / count_people;
   }

   p.money = p.money / count_people;

   return p;
 }

 void report::getRideStatistics(){
   /*
      This will get the statistics for all of the rides in the park.
      Should include average number of people per given time slice,
      total amount of money spent, ect.
   */
 }

 void report::getVendorStatistics(){
   /*
      Will fetch the statistics for the vendors in the park.
      Should include total number of people per time slice,
      average amount spent per customer, total spent in time slice,
      ect.
   */
 }

 void report::getGameStatistics(){
   /*
      Will fetch statistics about all of the games in the park.
      Should include the total number of people per time slice,
      total money exchanged for coins, number of coins spent,
      number of coins upon departure, ect.
   */
 }

 // void report::printreport(){
 //   printweather();
 //   printpeople();
 //   printrides();
 //   printvendors();
 //   printgames();
 // }
 //
 //
 // void report::printweather(){
 //   cout << "The weather for the simulation period was as follows" << endl;
 //   cout << "\tSunny Days: " << endl;
 //   cout << "\tRainy Days: " << endl;
 //   cout << "\tOvercast Days: " << endl;
 //   cout << "\tSnowy Days: " << endl;
 // }
 //
 // void report::printpeople(){
 //   cout << "People Statistics:" << endl;
 //   cout << "\tAverage Satisfaction: " << avg_satisfaction << endl;
 //   cout << "\tAverage Money per person: " << avg_money << endl;
 //   cout << "\tAverage number of tickets" << avg_tickets << endl;
 //   cout << "\tAverage hunger(1-5): " << avg_hunger << endl;
 //   cout << "\tAverage stamina(1-5): " << avg_stamina << endl;
 //   cout << "\tAverage Nausea(1-5): " << avg_nausea << endl;
 //   cout << "\tAverage Patience(1-5): " << avg_patience << endl;
 //   cout << "\tAverage Thrillseeking(1-5): " << avg_thrillseeking << endl;
 // }
 //
 // void report::printrides(){
 //   cout << "Ride Statistics:" << endl;
 //   cout << "\tThe most popular ride was: " << endl;
 //   cout << "\tTotal Amount of money spent on rides: " << endl;
 //   cout << "\tTotal number of rides that people took: " << endl;
 // }
 //
 // void report::printgames(){
 //   cout << "Game Statistics:" << endl;
 //   cout << "\tThe most popular Game was: " << endl;
 //   cout << "\tTotal amount of money spent on Games: " << endl;
 //   cout << "\tAverage Wait time in line: " << endl;
 //   cout << "\t" << endl;
 // }
 //
 // void report::printvendors(){
 //   cout << "Vendor Statistics:" << endl;
 //   cout << "\tThe most popular Vendor was: " << endl;
 //   cout << "\tTotal amount of money spent on Vendors: " << endl;
 //   cout << "\tAverage Wait time in line: " << endl;
 //   cout << "\t" << endl;
 // }
