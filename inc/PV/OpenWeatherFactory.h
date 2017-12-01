/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: OpenWeatherFactory.h
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/

#ifndef OPENWEATHERFACTORY_H
#define OPENWEATHERFACTORY_H

#include <iostream>
#include "IWeatherFactory.h"
#include "IWeatherReport.h"

class OpenWeatherFactory: public IWeatherFactory
{
public:
    OpenWeatherFactory();
    IWeatherReport* getWeather(int zipcode);
};

#endif // OPENWEATHERFACTORY_H
