#include "catch.hpp"

#include "KCChooser.cpp"
#include "KCAttractionRanker.cpp"
#include "KCCrowdDirector.cpp"

/*
  Include Attraction headers for interaction
*/

/*
  Include Population headers for interaction
*/


SCENARIO( "Stub lists work" ) {
  GIVEN( "A Master Ranker and a list of mixed Attraction types" ) {
    /*
      Create array of attractions
      attrList
      Relatively low cost on one ride -> cheap_value
      Add CoinStands in marked locations
    */
    new KCAttractionRankerMaster testMaster();

    WHEN( "The Maker builds a stub list"){
    /*
      testMaster.buildStubList( attrList );
     */
      THEN( "mCheapest is set appropriately" ) {
	REQUIRE ( testMaster.getCheapest() == cheap_value );
      }
      THEN ( "All attractions but coin stands are read in" ){
	/*
	  REQUIRE ( testMaster.getTopAttraction.attrPtr == &attrList[0] );
	  REQUIRE ( testMaster.getRankedAttraction(1).attrPtr == &attrList[1] );
	  ...
	  REQUIRE ( testMaster.getRankedAttraction([[# real rides -1]]).attrPtr == &attrList[[[#attractions - coin stands - 1]]] );
	 */
      }
      WHEN( "The stubs are rated and sorted" ) {
	testMaster.rateAll();
	testMaster.sortStubList();
	
	THEN ( "All attractions are in order by rating" ){
	  REQUIRE ( testMaster.getTopAttraction.rating >= testMaster.getRankedAttraction(1).rating );
	  REQUIRE ( testMaster.getRankedAttraction(1).rating >= testMaster.getRankedAttraction(2).rating );
	  /*
	    repeat
	   */
	}
      }
    }
  }     
}

