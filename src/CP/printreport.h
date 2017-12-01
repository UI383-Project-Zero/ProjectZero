/*  This file will contain all of formatting necessary for
 *  printing the report to the screen
 *
*/

#include <iostream>

using namespace std;

#include "report.h"


void printreport(){
    cout << "This report is for the entire simulation" << endl;

    cout << "People Statistics:" << endl;
    cout << "\tAverage Satisfaction: " << avg_satisfaction << endl;
    cout << "\tAverage Money per person: " << avg_money << endl;
    cout << "\tAverage number of tickets" << avg_tickets << endl;
    cout << "\tAverage hunger(1-5): " << avg_hunger << endl;
    cout << "\tAverage stamina(1-5): " << avg_stamina << endl;
    cout << "\tAverage Nausea(1-5): " << avg_nausea << endl;
    cout << "\tAverage Patience(1-5): " << avg_patience << endl;
    cout << "\tAverage Thrillseeking(1-5): " << avg_thrillseeking << endl;

    //this section will print the weather

    cout << "The weather for the week was as follows" << endl;

}
