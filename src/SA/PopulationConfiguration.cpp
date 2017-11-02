#include <iostream>
#include <cstdlib>    /* srand, rand */
#include <ctime>      /* time */

#include "../../inc/SA/constant.h"

using namespace std;

class SAPopulationConfig {
public:
    static int generateSize() {
        int weatherIndex = (int) (rand() / 1000) % 5;
        cout << "weatherIndex: " << weatherIndex << endl;
        int dayOfWeekIndex = (int) (rand() / 1000) % 7;
        cout << "dayOfWeekIndex: " << dayOfWeekIndex << endl;
        
        return MAX_SIZE * DAY_OF_WEEK[dayOfWeekIndex] * WEATHER[weatherIndex];
    }
};

/**
* Just for test purpose
*/
/*int main() {
    srand (time(0));
    
    int size = SAPopulationConfig::generateSize();
    cout << "SIZE: " << size << endl;
    return 0;
}*/
