/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: OpenWeather.cpp
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/
#include "OpenWeather.h"
#include <vector>
#include <iostream>

using namespace std;

OpenWeather::OpenWeather()
{
    weatherData = "";
    weatherRatings = {0};
}

//Used by clients. This will get the zipcode
//from the GUI singleton, and use the two
//private functions in order return weatherRatings
vector<int> OpenWeather::generateReport()
{

    return weatherRatings;
}

//Uses this classes unique API to retrieve
//and set weatherData that will be in JSON
//or XML format.
void OpenWeather::getWeatherData()
{

}

//Parses weatherData and sets weatherRatings
//to have values between 1-3 for each day
//where 1 is bad, 2 is okay, & 3 is good
void OpenWeather::setRatings()
{

}

