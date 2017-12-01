/* This file will define the interface for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

 #ifndef REPORT_H
 #define REPORT_H

 #include <cstdlib>
 #include <vector>
 #include <string>
 using namespace std;

 #include "includes.h"

 struct people{
   int stats[7] = {0,0,0,0,0,0,0};
   /* 0-satisfaction, 1-tickets, 2-hunger
      3-stamina, 4-nausea, 5-patience*/
   double money = 0;
 };

 class report {
  protected:
    int totaldays;
    int avg_satisfaction;
    double avg_money;
    int avg_tickets;
    int avg_hunger;
    int avg_stamina;
    int avg_nausea;
    int avg_patience;
    string most_favoritefood;
    string least_favoritefood;
    int avg_thrillseeking;
    vector<int> weather;

    vector<int> dailyNumPeople;
    vector<int> dailySatisfaction;
    vector<int> dailyVendorSales;
    vector<int> dailyGameSales;
    vector<int> dailyRideSales;

  private:
    void overallReport();
    void getWeather();
    people getPeopleStatistics(vector<SACustomer>);
    void getRideStatistics();
    void getVendorStatistics();
    void getGameStatistics();
    void printweather();
    void printpeople();
    void printrides();
    void printgames();
    void printvendors();
    void printreport();
 };

#endif
