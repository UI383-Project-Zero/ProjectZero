/////////////C/C++ includes
#include <iostream>

/////////////Project Zero includes. Sort by contributor.
////////////KC
#include "KCCrowdDirector.h"
#include "KCChooser.h"
#include "KCCrowdDirector.h"
///////////////////////////////

//using namespace std;
//If anyone needs this included, email the group ASAP. I went the std:: route, as did snippets I saw from 1 or 2 other members -KC

int main(){
  std::cout << std::endl << "This is our main" << std::endl;

  ////////////////////////Set-up and initialization
  std::cout << std::endl << "This is the part where we do set-up" << std::endl;

  ////////////////KC initial set-up
  new KCCrowdDirector decisionMaker;

  //////////////////////////////////////////Start
  //Presumably where the GUI takes over. Probably a large loop of some sort containing everything else.
  std::cout << std::endl << "This is the part where we start doing stuff" << std::endl;

  //////////////////////////////////Run simulation
  //Begin running simulation

  ////////////////Simulation set-up
  //Initial set-up for everything not already configured by GUI. Resets as needed

  //Get master attraction list (assumes that array of all attractions exists
  //decisionMaker.getRides(##ridelist##);


  ////////////////////////////Simulation loop start
  //Beginning of loop. Repeats and updates every day
  //Reset objects or create new as needed
  //Update weather
  //Generate new population

  //Get new population (assumes new population object created daily)
  //decisionMaker.getPopulation(##populationname##);

  //////////////////////////Day loop start
  //Beginning of day loop. Repeats at beginning of each tick

  //Update population (remove tired, spawn new)

  //Update attraction ranks
  decisionmaker->mMasterList.updateStubLists();

  //Update customers
  decisionMaker.updateCrowd();

  //Ride updates

  //Report compilation

  ////////////////Reserved for end of tick loop

  ////////////////End of day
  //End of day processing, report compilation, etc.

  ////////////////Reserved for end of simulation loop

  ////////////////Report compilation/return


  ////////////////Reserved for end of main/GUI loop
}
