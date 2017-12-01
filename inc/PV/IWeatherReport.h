/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: IWeatherReport.h
 * Summary: Factory for producing varying
 *          weather report sources
 ****************************************/
#ifndef IWEATHERREPORT_H
#define IWEATHERREPORT_H

#include<iostream>
#include<vector>

using namespace std;

class IWeatherReport
{
protected:
    vector<int> weatherRatings; //Rated 1-3, 1-bad, 2-okay, 3-good
    string weatherData; //will be used by child classes for parsing data

public:
    IWeatherReport();
    virtual vector<int> generateReport(int numOfDays) = 0;
};

#endif // IWEATHERREPORT_H
