/*****************************************                                       
 * Author: Patrick VanVorce - 2017                                                 
 * File: WeatherFactory.h                                                          
 * Summary: Factory for producing varying                                       
 *          weather report sources                                                 
 ****************************************/
#include <iostream>
#include"WeatherFactory.h"
#include"IWeatherReport.h"

using namespace std;

IWeatherReport OpenWeatherFactory::getWeather(WeatherSources weatherSource)
{
  //creates a weather source
  return NULL;
};
