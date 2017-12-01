/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: IWeatherReport.cpp
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/
#include "IWeatherReport.h"
#include<iostream>
using namespace std;

IWeatherReport::IWeatherReport()
{
    weatherData = "Nothing";
    weatherRatings = {0};
}

vector<int> IWeatherReport::generateReport(int numOfDays)
{

    return weatherRatings;
}
