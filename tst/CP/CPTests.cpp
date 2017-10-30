
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "report.cpp"
//#include "OpenWeatherFactory.h"
#include <vector>

TEST_CASE("getWeather", "getWeather")
{
  report Report;

  Report.getWeather();

  REQUIRE(weather.empty());
}

TEST_CASE("getPopulationStatistics", "getPopulationStatistics")
{
  report Report;

  REQUIRE(satisfaction == null);
}

TEST_CASE("OpenWeather.cpp test three", "Set-Ratings")
{
  report Report;
}

TEST_CASE("getRideStatistics", "getRideStatistics")
{
  report Report;
}

TEST_CASE("getVendorStatistics", "getVendorStatistics")
{
  report Report;
}

TEST_CASE("getGameStatistics", "getGameStatistics")
{
  report Report;
}
