/* This file will define the implementation for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

// local includes
#include "report.h"

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


 }

 void report::getWeather(){

   /*
      This funstion will get the weather from the GUI. As of right now
      the plan is to rate the weather on an integer scale. The weather
      will be a public vector<int>.
   */
 }

 void report::getPeopleStatistics(){
   /*
      This will fetch the statiscics for all of the people in the park.
      Should include average money per person, satisfaction level ect.
   */
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
