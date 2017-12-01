/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: OpenWeather.cpp
 * Summary: Defines access syntax to the
 *          necessary user input desired
 *          by client code
 ****************************************/
#ifndef USERINPUT_H
#define USERINPUT_H

#include<iostream>

using namespace std;

class UserInput
{
private:
    int maxAttendance;
    string city;
    string state;
    int amtOfDays;
    string configurationFile;
    float avgAmtOfMoney;
    static UserInput* singleInstance;

    UserInput();

public:
    static UserInput* instance();
    int getMaxAttendance();
    string getCity();
    string getState();
    int getAmtOfDays();
    string getConfigFile();
    float getAvgAmtOfMoney();
};

#endif // USERINPUT_H
