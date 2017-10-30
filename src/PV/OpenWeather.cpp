/*****************************************                                        
 * Author: Patrick VanVorce - 2017                                                 
 * File: WeatherFactory.h                                                          
 * Summary: Factory for producing varying                                          
 *          weather report sources                                                 
 ****************************************/

#include<iostream>
#include<vector>
#include"OpenWeather.h"

using namespace std;

vector<int> OpenWeather::generateReport() {
  //Logic will go in here to return ratings of 
  //weather dates.

  vector<int> ratings;
  return ratings;
}

void OpenWeather::getWeatherData() {
  //Connects to OpenWeather API
}

void OpenWeather::setRatings() {
  //parses through weather data to set ratings
}
