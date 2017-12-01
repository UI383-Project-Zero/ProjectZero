/* This file will define the implementation for the dailyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#include "../../inc/CP/dailyReport.h"

 people dailyReport::getPeopleStatistics(vector<SACustomer> c){
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

 void dailyReport::makeDailyReport(){
   totaldays++;

   people p = getPeopleStatistics(/* this will be a customer vector*/);

   NumPeople = getMPopSize();

   //reminder that these values are as follows
   /* 0-satisfaction, 1-tickets, 2-hunger
      3-stamina, 4-nausea, 5-patience*/

   Satisfaction = p.stats[0];
   Tickets = p.stats[1];
   Hunger = p.stats[2];
   Stamina = p.stats[3];
   Nausea = p.stats[4];
   Patience = p.stats[5];
  //  VendorSales;
  //  GameSales;
  //  RideSales;


  //this section adds the values for the day to their respective vectors
  //for the overall report. These will be used later to compile the overall report
  dailyNumPeople.push_back(NumPeople);
  dailySatisfaction.push_back(Satisfaction);
  dailyVendorSales.push_back(VendorSales);
  dailyGameSales.push_back(GameSales);
  dailyRideSales.push_back(RideSales);
 }
