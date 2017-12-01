/* This file will define the implementation for the dailyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#include "../../inc/CP/dailyReport.h"

 void dailyReport::makeDailyReport(){
   totaldays++;
   dailyNumPeople.push_back(NumPeople);
   dailySatisfaction.push_back(Satisfaction);
   dailyVendorSales.push_back(VendorSales);
   dailyGameSales.push_back(GameSales);
   dailyRideSales.push_back(RideSales);
 }
