//#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "OpenWeather.cpp"
//#include "OpenWeatherFactory.h"
#include <vector>

TEST_CASE("OpenWeather.cpp test one", "Generate-Report")
{
  OpenWeather openWeather;

  vector<int> myVector = openWeather.generateReport();

  REQUIRE(myVector.empty());
}

TEST_CASE("OpenWeather.cpp test two", "Get-Weather-Data")
{
  OpenWeather openWeather;

  
}

TEST_CASE("OpenWeather.cpp test three", "Set-Ratings")
{
  OpenWeather openWeather;


}

TEST_CASE("OpenWeatherFactory.cpp test one", "Get-Weather")
{

}
