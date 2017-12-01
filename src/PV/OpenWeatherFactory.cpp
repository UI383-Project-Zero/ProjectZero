/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: OpenWeatherFactory.cpp
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/
#include "OpenWeatherFactory.h"
#include "OpenWeather.h"
#include "IWeatherFactory.h"

OpenWeatherFactory::OpenWeatherFactory()
{

}

IWeatherReport* OpenWeatherFactory::getWeather(int zipcode)
{
    return NULL;
    //return new OpenWeather(zipcode);
    /*switch(source)
    {
    case openWeather:
        return new OpenWeather(zipcode);
        break;
    default:
        return new OpenWeather(zipcode);
    }*/
}
