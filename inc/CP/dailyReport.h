/* This file will define the interface for the dailyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#ifndef DAILY_REPORT_H
#define DAILY_REPORT_H

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

#endif
