// #define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <stdlib.h>

//#include "../../inc/SA/customer.h"
//#include "../../inc/SA/population.h"
//#include "../../src/SA/PopulationConfiguration.cpp"
#include "../../src/SA/customer.cpp"
#include "../../src/SA/population.cpp"

TEST_CASE( "Population not negetive", "[population]" ) {
	SAPopulation p;
    REQUIRE( p.createPopulation() >= 0 );
}

TEST_CASE( "Population not more than the maximum of population size", "[population]" ) {
	SAPopulation p;
    REQUIRE( p.createPopulation() <= MAX_SIZE );
}
