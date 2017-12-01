/* Jackson Taylor 11/25/2017
	JtOrderDecorator.cpp
	
	Implementation file for the Decorator Design Pattern to 
	handle food orders from patrons visiting a vendor.
	In the interest of not blowing up the directory with numerous tiny
	class header files and implementation files I have elected to violate
	our coding standard and include all relevent class in this one implementation 
	file.
*/

#include <string>
#include <iostream>
using namespace std;


//Abstract base classes for an order and its respective decorator
	//abstract base class for vendor food orders 
class JtOrder
{
string name = "UnknownOrder";

	string getName()
	{
		return name;
	}
	
	//abstract methods for getting an orders total cost and satisfaction
	virtual int getSatisfaction() = 0;
	virtual double getCost() = 0;
}
	//abstract base class for vendor food order decorators (items being sold)
class JtOrderDecorator:JtOrder
{
	//abstract method for getting an orders name
	virtual string getName() = 0;
}


//Order(s)
		//The empty order doesn't do much besides serve as a base
		//to decorate with food items, however note that it would be 
		//possible to modify the return 0; to perhaps do something useful
		//like  calculate sales tax. Similarly we don't need any orders besides
		//this empty order unlike the example we covered in class. It may be
		//overkill for now but it provides us with a good avenue for expansion
		//and modifcation to the system in the future.
		
class JtEmpty:JtOrder
{
		//constructor just sets name 
	JtEmpty()	
	{
		name = "EmptyOrder";
	}
		//no food no satisfaction
	int satisfaction()
	{
		return 0;
	}
		//similarly going hungry is free
	double cost()
	{
		return 0.00;
	}
}

//FoodItems as Decorators
//All these decorator classes will follow the same pattern:
//	-mOrder holds the order they are decorating, which is set by their constructor (passed as a parameter)
//	-getName() appends the food items name to that of the order which is "Empty" for now.
//	-satisfaction() returns the food items satisfaction value + that of the empty meal ( 0 )
//	-cost()	returns the food items cost + that of the empty meal ( 0 )
//Note there aren't a lot of choices avaialable currently but this is more of creative 
//design problem rather than a software design one. Once this functionality was introduced
//I could demonstrate it for the client and get a better idea of what items they would want included
//and their respective cost and satisfaction values.

class JtNacho:JtOrderDecorator
{
	JtOrder mOrder;
	
	JtNacho(JtOrder mOrder)
	{
		this.mOrder = mOrder;
	}
	
	string getName()
	{
		return mOrder.getName() + " Nachos ";
	}
	
	int satisfaction()
	{
		return 3 + mOrder.cost();
	}
	
	double cost()
	{
		return 3.75 + mOrder.cost();
	}	
}

class JtHotDog:JtOrderDecorator
{
	JtOrder mOrder;
	
	JtHotDog(JtOrder mOrder)
	{
		this.mOrder = mOrder;
	}
	
	string getName()
	{
		return mOrder.getName() + " Hot Dog ";
	}
	
	int satisfaction()
	{
		return 2 + mOrder.cost();
	}
	
	double cost()
	{
		return 2.50 + mOrder.cost();
	}	
}

class JtSoda:JtOrderDecorator
{
	JtOrder mOrder;
	
	JtSoda(JtOrder mOrder)
	{
		this.mOrder = mOrder;
	}
	
	string getName()
	{
		return mOrder.getName() + " Soda ";
	}
	
	int satisfaction()
	{
		return 1 + mOrder.cost();
	}
	
	double cost()
	{
		return 1.75 + mOrder.cost();
	}	
}

class JtElephantEar:JtOrderDecorator
{
	JtOrder mOrder;
	
	JtElephantEar(JtOrder mOrder)
	{
		this.mOrder = mOrder;
	}
	
	string getName()
	{
		return mOrder.getName() + " Elephant Ear ";
	}
	
	int satisfaction()
	{
		return 4 + mOrder.cost();
	}
	
	double cost()
	{
		return 4.00 + mOrder.cost();
	}	
}




