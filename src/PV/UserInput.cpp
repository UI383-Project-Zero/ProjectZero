/*****************************************
 * Author: Patrick VanVorce - 2017
 * File: OpenWeather.cpp
 * Summary: Implementation of singleton
 *          used by clients to get the user
 *          input necessary.
 ****************************************/
#include "UserInput.h"

UserInput* UserInput::singleInstance = NULL; //global variable

//Initialize private variable to
//be equal to the GUI values
UserInput::UserInput()
{
    //Code here will set the values
    //of the singleton's private variables
    //to be equal to the corresponding
    //values entered into the GUI, or
    //if a gui is not made, then by the command
    //line and I will need to edit the constructor
    //to take arguments...

    //Dummy code below, for demonstration purposes only
    maxAttendance = 100;
    city = "Moscow";
    state = "Idaho";
    amtOfDays = 4;
    configurationFile = "C://Users/pat/Qt/5.9.1/...";
    avgAmtOfMoney = 300.31;
}

UserInput* UserInput::instance()
{
    if(!singleInstance) //ALlow's only one instance
        singleInstance = new UserInput;

    return singleInstance;
}

int UserInput::getMaxAttendance()
{
    return maxAttendance;
}

string UserInput::getCity()
{
    return city;
}

string UserInput::getState()
{
    return state;
}

int UserInput::getAmtOfDays()
{
    return amtOfDays;
}

string UserInput::getConfigFile()
{
    return configurationFile;
}

float UserInput::getAvgAmtOfMoney()
{
    return avgAmtOfMoney;
}
