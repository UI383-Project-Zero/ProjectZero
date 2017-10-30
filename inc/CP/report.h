/* This file will define the interface for the report class
 * Cameron Parrish, University of Idaho Fall 2017
 */

 #ifndef REPORT_H
 #define REPORT_H

 #include <cstdlib>
 #include <vector>
 using namespace std;

 class report {
    int satisfaction;
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
