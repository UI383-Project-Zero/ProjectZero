/*****************************************                                       
 * Author: Patrick VanVorce - 2017                                                 
 * File: WeatherFactory.cpp                                                          
 * Summary: Factory for producing varying                                       
 *          weather report sources                                                 
 ****************************************/
#ifndef WEATHERFACTORY_H
#define WEATHERFACTORY_H
#ifndef IWEATHERREPORT_H
#define IWEATHERREPORT_H

#include <iostream>
#include"WeatherFactory.h"
#include"IWeatherReport.h"

using namespace std;

IWeatherReport OpenWeatherFactory::getWeather(WeatherSources weatherSource)
{
  //creates a weather source
  return NULL;
};

#endif
#endif
