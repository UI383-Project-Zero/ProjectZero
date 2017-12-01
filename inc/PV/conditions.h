/*
 Conditions class provides weather conditions for today
*/

#ifndef CONDITIONS_H
#define CONDITIONS_H

#include "weather.h"
namespace wunderground
{

class Conditions:public Weather
{
public:
    Conditions()=default;
    Conditions(std::string);
    /*
    load and parse xml file with all weather data
    param city: city name for which you want weather data
    param state: state name
    */
    virtual void loadData(std::string city,std::string state);


    /*
    Returns condition  for today e.g.  getCondition("humidity");
    param condition: weather, temperature, humidity, pressure, wind speed, wind direction, precipitation
    */
    std::string getCondition(std::string condition);

};

}

#endif // CONDITIONS_HPP


