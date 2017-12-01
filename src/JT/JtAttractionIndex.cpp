/* Jackson Taylor 11/28/2017
	JtAttractionIndex.cpp
	
	Implementation file for the singleton class JtAttractionIndex
	This singleton exists to provide a global access to an 
	array of all attractions in the simulation. It can be called
	by other members code to get information about individual attractions
	And is called each time a new attraction is constructed to add that attraction
	to the array.
*/

#include "JtAttractionIndex.h"


		//constructor
JtAttractionIndex::JtAttractionIndex()
{
		//constructor doesn't have to do anything non default currently
}

		//lazy instantiation ensures only one instantion and calls constructor if 
		//it has not been instantiated when it is called
JtAttractionIndex	JtAttractionIndex::getInstance()
{
		if (sUniqueInstance == null)
		{
			sUniqueInstance = new JtAttractionIndex();
		}
	return sUniqueInstance;	
	
}
		//Adds an Attraction that has just been instantiated to mAttractionArray
		//at the first open spot and returns its location in the array to the calling
		//attraction for storage and later use. The parameter caller is a new Attraction
		//executing its constructor.
int JtAttractionIndex::addAttraction(Attraction caller)
{	
	for (int i = 0; i < MAX_ATTRACTION; i++)
	{
		if (mAttractionArray[i] == null)
		{
			mAttractionArray[i] = caller;
			return i;
		}
	}
}

	//Returns the attraction stored in the mAttractionArray refrenced by the parameter
	//index. So the calling object can access a specific attractions member functions and 
	//data if need be.
Attraction JtAttractionIndex::getAttraction(int index)
{
	return mAttractionArray[i];
}	


