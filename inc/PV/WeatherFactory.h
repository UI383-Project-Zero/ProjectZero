/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: WeatherFactory.h
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/
#ifndef IWEATHERREPORT_H
#define IWEATHERREPORT_H

#include <iostream>
#include "IWeatherReport.h"

using namespace std;

enum WeatherSources { openWeather } ;

class WeatherFactory
{
 public:
  virtual IWeatherReport getWeather(WeatherSources source);
};

#endif
