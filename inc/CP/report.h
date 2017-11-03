/* This file will define the interface for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

 #ifndef REPORT_H
 #define REPORT_H

 #include <cstdlib>
 #include <vector>
 #include <cstring>
 using namespace std;

 class report {
  protected:
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

  private:
    void overallReport();
    void getWeather();
    void getPeopleStatistics();
    void getRideStatistics();
    void getVendorStatistics();
    void getGameStatistics();
 };

#endif
