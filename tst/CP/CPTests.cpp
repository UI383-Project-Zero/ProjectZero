#include "tests-main.cpp"
#include "report.cpp"
#include <vector>

TEST_CASE("Weather is not empty", "WeatherEmpty")
{
  report Report;

  Report.getWeather();

  REQUIRE(!weather.empty());
}

TEST_CASE("Check Population statistics", "getPopulationStatistics")
{
  report Report;

  REQUIRE(satisfaction != null);
  REQUIRE(avg_money) != null);
  REQUIRE(avg_tickets != null);
  REQUIRE(avg_hunger != null);
  REQUIRE(avg_stamina != null);
  REQUIRE(avg_nausea != null);
  REQUIRE(avg_patience != null);
  REQUIRE(avg_thrillseeking != null);
}

TEST_CASE("getRideStatistics", "getRideStatistics")
{
  report Report;

  //Dont have enough information on what types of data we are going
  //to implement to track the rides to be able to write propper tests
}

TEST_CASE("getVendorStatistics", "getVendorStatistics")
{
  report Report;

  //Dont have enough information on what types of data we are going
  //to implement to track the vendors to be able to write propper tests
}

TEST_CASE("getGameStatistics", "getGameStatistics")
{
  report Report;

  //Dont have enough information on what types of data we are going
  //to implement to track the games to be able to write propper tests
}
