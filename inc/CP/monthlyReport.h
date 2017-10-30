/* This file will define the interface for the monthlyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#ifndef MONTHLY_REPORT_H
#define MONTHLY_REPORT_H

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

#endif
