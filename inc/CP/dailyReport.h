/* This file will define the interface for the dailyReport class
 * Cameron Parrish, University of Idaho Fall 2017
 */

#ifndef DAILY_REPORT_H
#define DAILY_REPORT_H

#include "report.h"

class dailyReport : public report{
  int NumPeople;
  int Satisfaction;
  int Tickets;
  int Hunger;
  int Stamina;
  int Nausea;
  int Patience;
  int VendorSales;
  int GameSales;
  int RideSales;

private:
  void makeDailyReport();
  people getPeopleStatistics(vector<SACustomer>);
};

#endif
