/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: OpenWeather.h
 * Summary: Factory for producing
 *          weather report source
 ****************************************/
#ifndef OPENWEATHER_H
#define OPENWEATHER_H

#include <iostream>
#include <vector>
#include "IWeatherReport.h"

using namespace std;

class OpenWeather : public IWeatherReport
{
private:
    void getWeatherData();
    void setRatings();
public:
    OpenWeather();
    vector<int> generateReport();
};

#endif // OPENWEATHER_H
