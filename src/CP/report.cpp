/* This file will define the implementation for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

// local includes
#include "report.h"
#include "printreport.h"

//global includes
#include <iostream>
using namespace std;

 void report::overallReport(){
   /*
      This function will compile the overall report at the end of
      the simulation. This will track the total amount of time and
      average all of the statistics.

      My plan is to import a typesetting library so that I can format
      the report and make it look good. This function will output the
      report to a file as well as the GUI.

   */

   printreport();
 }

 void report::getWeather(){

   /*
      This funstion will get the weather from the GUI. As of right now
      the plan is to rate the weather on an integer scale. The weather
      will be a public vector<int>.
   */

  // weather = weatherRatings;
 }

 people report::getPeopleStatistics(vector<SACustomer> c){
   /*
      This will fetch the statiscics for all of the people in the park.
      Should include average money per person, satisfaction level ect.
   */

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
