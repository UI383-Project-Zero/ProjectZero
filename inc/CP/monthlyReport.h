/* This file will define the interface for the monthlyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#include "report.h"

class monthlyReport : public report{
  unsigned int totalWeeks;
  unsigned int weeklyNumPeople;
  unsigned int weeklySatisfaction;
  unsigned int weeklyVendorSales;
  unsigned int weeklyGameSales;
  unsigned int weeklyRideSales;


private:
  void makeWeeklyReport();
};
