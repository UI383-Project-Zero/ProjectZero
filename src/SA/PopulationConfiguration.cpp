#include <iostream>
#include <cstdlib>    /* srand, rand */

#include "../../inc/SA/constant.h"

class SAPopulationConfig {
public:
	/**
	* this function generates random value using random day of week and weather
	* 
	* @return random integer for population size
	*/
    static int generateSize() {
        int weatherIndex = (int) (rand() / 1000) % 5;  // 5 weather conditions
        int dayOfWeekIndex = (int) (rand() / 1000) % 7;  // 7 days in a week
        
        return MAX_SIZE * DAY_OF_WEEK[dayOfWeekIndex] * WEATHER[weatherIndex];
    }
};
