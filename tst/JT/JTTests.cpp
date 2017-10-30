//#define CATCH_CONFIG_MAIN
#include "catch.hpp"


#include "Attraction.h"
#include "Ride.h"
#include "Vendor.h"
/*
headers for other modules
i.e. patrons and behavior
*/

TEST_CASE ( "takePayment returns cost or -1 on fail", "[takePayment]")
{
	Ride r("rollercoaster",5,2,10);
		REQUIRE(r.takePayment(2.5) == 2.5;
		REQUIRE(r.takePayment(-2.0) == -1;
	//REQUIRE(r.takePayment( >> patron.money) == -1;
	
	Vendor v("Ice Cream", 5);
		REQUIRE(v.takePayment(2.5) == 2.5;
		REQUIRE(v.takePayment(-2.0) == -1;
	//REQUIRE(v.takePayment( >> patron.money) == -1;
}

TEST_CASE ( "effectPatron is working?" ,"[effectPatron]")
{
	/*
	I don't really have enough of the implementation figured out to 
	test this function very well yet.
	
	Ride r("rollercoaster",5,2,10);
		REQUIRE(r.effectPatron(5,5) change the value of the Patron by 5 
	Vendor v("Ice Cream", 5);
		REQUIRE(v.effectPatron(5,5) change the value of the Patron by 5
	*/
}

TEST_CASE ( "unflagPatron is actually unflagging Patrons" , "[unflagPatron]")
{
	/*
	Once again I'm not sure how to test this method without having an actual 
	patron to communicate with.

	Ride r("rollercoaster",5,2,10);
		REQUIRE(r.unflagPatron() reduce lineLength by 1;
	Vendor v("Ice Cream", 5);
		REQUIRE(v.unflagPatron(5,5) reduce lineLength by 1;
	*/
}	

TEST_CASE ( "calculateProfits returns valid data", "[calculateProfits]")
{
	/*
	Ride r("rollercoaster",5,2,10);
		REQUIRE(r.calculateProfits() == operatingCost -= r.takePayment(cost) ;
	Vendor v("Ice Cream", 5);
		REQUIRE(v.calculateProfits() == foodCost -= v.takePayment(cost);

	*/
}