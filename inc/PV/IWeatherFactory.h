/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: WeatherFactory.h
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/
#ifndef IWEATHERFACTORY_H
#define IWEATHERFACTORY_H

#include <iostream>
#include "IWeatherReport.h"

//enum WeatherSources { openWeather } ;

class IWeatherFactory
{
public:
    IWeatherFactory();
    virtual IWeatherReport* getWeather(int zipcode) = 0;
};

#endif // WEATHERFACTORY_H
