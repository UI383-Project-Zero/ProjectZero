/*****************************************                                        
 * Author: Patrick VanVorce - 2017
 * File: WeatherFactory.h                                                        
 * Summary: Factory for producing varying                                      
 *          weather report sources                                                 
 ****************************************/

#include<iostream>
#include<vector>

using namespace std;

class IWeatherReport 
{
  vector<int> weatherRatings;
  string weatherData;

 public:
  virtual vector<int> generateReport();
};
