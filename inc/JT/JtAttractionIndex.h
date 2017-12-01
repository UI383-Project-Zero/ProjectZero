/* Jackson Taylor 11/28/2017
	JtAttractionIndex.h
	
	Header File for the singleton class JtAttractionIndex
	This singleton exists to provide a global access to an 
	array of all attractions in the simulation. It can be called
	by other members code to get information about individual attractions
	And is called each time a new attraction is constructed to add that attraction
	to the array.
*/

#ifndef JTATTRACTIONINDEX_H
#define JTATTRACTIONINDEX_H

#include "Attraction.h"

class JtAttractionIndex
{
	private static JtAttractionIndex sUniqueInstance;
	
	private	:
		static int MAX_ATTRACTION = 100;
		Attraction mAttractionArray[MAX_ATTRACTION];
		JtAttractionIndex();
	
	public static JtAttractionIndex getInstance();
	
	public	:
		int addAttraction(Attraction caller);
		Attraction getAttraction(int index);
}