/* This file will define the implementation for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

// local includes
#include "../../inc/CP/report.h"
#include "printreport.cpp"

//global includes
#include <iostream>
using namespace std;

 void report::overallReport(){
   printreport();
 }

 void report::getWeather(){
   //this will assign the vector in the report class the value of the
   // vector from the weather class
   //weather = weatherRatings;
 }

 people report::getPeopleStatistics(vector<SACustomer> c){

   people p;

   int count_people;// = getMPopSize();

   for(int i = 0; i < count_people; i++){
     //these array values corrospond to what was specified in report.h
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
