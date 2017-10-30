/* This file will define the interface for the dailyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#include "report.h"

class dailyReport : public report{
  unsigned int totalDays;
  unsigned int dailyNumPeople;
  unsigned int dailySatisfaction;
  unsigned int dailyVendorSales;
  unsigned int dailyGameSales;
  unsigned int dailyRideSales;

private:
  void makeDailyReport();
};
