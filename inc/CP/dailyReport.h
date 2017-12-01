/* This file will define the interface for the dailyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#ifndef DAILY_REPORT_H
#define DAILY_REPORT_H

#include "report.h"

class dailyReport : public report{
  int totalDays;
  int NumPeople;
  int Satisfaction;
  int VendorSales;
  int GameSales;
  int RideSales;

private:
  void makeDailyReport();
};

#endif
