/*****************************************                                         
 * Author: Patrick VanVorce - 2017                                                 
 * File: WeatherFactory.h                                                          
 * Summary: Factory for producing varying                                         
 *          weather report sources                                                
 ****************************************/

#include <iostream>
#include <vector>
//#include "IWeatherReport.h"

using namespace std;

class OpenWeather //: public IWeatherReport
{
  

  void getWeatherData();
  void setRatings();

 public:
  vector<int> generateReport();
};
