/*****************************************                                       
 * Author: Patrick VanVorce - 2017                                                 
 * File: WeatherFactory.h                                                          
 * Summary: Factory for producing varying                                      
 *          weather report sources                                                 
 ****************************************/

#include <iostream>
#include "WeatherFactory.h"

using namespace std;

class OpenWeatherFactory //: public WeatherFactory
{
 public:
  IWeatherReport getWeather(WeatherSources source)();
};
