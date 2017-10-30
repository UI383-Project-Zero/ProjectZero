/* This file will define the interface for the weeklyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

 #ifndef WEEKLY_REPORT_H
 #define WEEKLY_REPORT_H

 #include "report.h"

class weeklyReport : public report{
  unsigned int totalDays;
  unsigned int weeklyNumPeople;
  unsigned int weeklySatisfaction;
  unsigned int weeklyVendorSales;
  unsigned int weeklyGameSales;
  unsigned int weeklyRideSales;

private:
  void makeWeeklyReport();
};

#endif
