#include <iostream>

#include "../../inc/SA/customer.h"


/**
* Set customer ID.
*
* @param c to be customer ID
* @return void
*/
void SACustomer::setMCustID(int c) {
	//std::cout << "SACustomer::setMCustID(int)\n";
	mCustID = c;
}

/**
* Get customer ID.
*
* @param 
* @return customer ID.
*/
int SACustomer::getMCustID() {
	//std::cout << "SACustomer::getMCustID()\n";
	return 	mCustID;
}

/**
* Set satisfaction.
*
* @param s to be satisfaction.
* @return void
*/
void SACustomer::setMSatisfaction(int s) {
	//std::cout << "SACustomer::setMSatisfaction(int)\n";
	mSatisfaction = s;
}

/**
* Get satisfaction.
*
* @return satisfaction.
*/
int SACustomer::getMSatisfaction() {
	//std::cout << "SACustomer::getMSatisfaction()\n";
	return mSatisfaction;
}

/**
* Set money.
*
* @param m to be money.
* @return void
*/
void SACustomer::setMMoney(double m) {
	//std::cout << "SACustomer::setMMoney(double)\n";
	mMoney= m;
}

/**
* Get money.
* 
* @return money.
*/
double SACustomer::getMMoney() {
	//std::cout << "SACustomer::getMMoney()\n";
	return mMoney;
}

/**
* Set tickets.
*
* @param t to be tickets.
* @return void
*/
void SACustomer::setMTickets(int t) {
	//std::cout << "SACustomer::setMTickets(int)\n";
	mTickets = t;
}

/**
* Get tickets.
* 
* @return tickets.
*/
int SACustomer::getMTickets() {
	//std::cout << "SACustomer::getMTickets()\n";
	return mTickets;
}

/**
* Set hunger.
*
* @param h to be hunger.
* @return void
*/
void SACustomer::setMHunger(int h) {
	//std::cout << "SACustomer::setMHunger(int)\n";
    mHunger = h;
}

/**
* Get hunger.
*
* @return hunger.
*/
int SACustomer::getMHunger() {
	//std::cout << "SACustomer::getMHunger()\n";
	return mHunger;
}

/**
* Set stamina.
*
* @param a to be stamina.
* @return void
*/
void SACustomer::setMStamina(int a) {
	//std::cout << "SACustomer::setMStamina(int)\n";
    mStamina = a;
}

/**
* Get stamina.
* 
* @return stamina.
*/
int SACustomer::getMStamina() {
	//std::cout << "SACustomer::getMStamina()\n";
	return  mStamina;
}

/**
* Set Nausea
*
* @param n to be Nausea.
* @return void
*/
void SACustomer::setMNausea(int n) {
	//std::cout << "SACustomer::setMNausea(int)\n";
    mNausea = n;
}

/**
* Get Nausea.
*
* @return Nausea.
*/
int SACustomer::getMNausea() {
	//std::cout << "SACustomer::getMNausea()\n";
	return  mNausea;
}

/**
* Set Patience.
*
* @param p to be Patience.
* @return void
*/
void SACustomer::setMPatience(int p) {
	//std::cout << "SACustomer::setMPatience(int)\n";
    mPatience = p;
}

/**
* Get Patience.
*
* @return Patience.
*/
int SACustomer::getMPatience() {
	//std::cout << "SACustomer::getMPatience()\n";
	return  mPatience;
}

/**
* Set busy
*
* @param b 
* @return void
*/
void SACustomer::setMBusy(bool b) {
	//std::cout << "SACustomer::setMBusy(bool)\n";
    mBusy = b;
}

/**
* Get busy 
* 
* @return bool 
*/
bool SACustomer::getMBusy() {
	//std::cout << "SACustomer::getMBusy()\n";
	return  mBusy;
}

/**
* Set queue
*
* @param q 
* @return void
*/
void SACustomer::setMQueue(bool q) {
	//std::cout << "SACustomer::setMQueue(bool)\n";
    mQueue = q;
}

/**
* Get queue 
*
* @return bool 
*/
bool SACustomer::getMQueue() {
	//std::cout << "SACustomer::getMQueue()\n";
	return   mQueue;
}


class SACustomerAdult: public SACustomer {
public:
    void init() {
        //std::cout << "SACustomerAdult::init()\n";
    }
    
    void setMTicketPrice(double d) {
        //std::cout << "SACustomerAdult::setMTicketPrice(double)\n";
        mTicketPrice = d;
    }
    
    double getMTicketPrice() {
        //std::cout << "SACustomerAdult::getMTicketPrice()\n";
        return mTicketPrice;
    }
};

class SACustomerStudent: public SACustomer {
public:
    void init() {
        //std::cout << "SACustomerStudent::init()\n";
    }
    
    void setMTicketPrice(double d) {
        //std::cout << "SACustomerStudent::setMTicketPrice(double)\n";
        mTicketPrice = 0.7 * d;
    }
    
    double getMTicketPrice() {
        //std::cout << "SACustomerStudent::getMTicketPrice()\n";
        return mTicketPrice;
    }
};

class SACustomerChild: public SACustomer {
public:
    void init() {
        //std::cout << "SACustomerChild::init()\n";
    }
    
    void setMTicketPrice(double d) {
        //std::cout << "SACustomerChild::setMTicketPrice(double)\n";
        mTicketPrice = 0.0 * d;
    }
    
    double getMTicketPrice() {
        //std::cout << "SACustomerChild::getMTicketPrice()\n";
        return mTicketPrice;
    }
};


// Factory class to generate different customers
class SACustomerFactory {
private:
    SACustomer *mSACustomer;
public:
    SACustomerFactory(std::string type)  {
        // SACustomerFactory explicitly creates classes according to type
        if ("a" == type) {
            mSACustomer = new SACustomerAdult();
        } else if ("s" == type) {
            mSACustomer = new SACustomerStudent();
        } else if ("c" == type) {
            mSACustomer = new SACustomerChild();
        } else {
            mSACustomer = NULL;
        }
    }
    
    ~SACustomerFactory()   {
        if (mSACustomer)
        {
            delete[] mSACustomer;
            mSACustomer = NULL;
        }
    }
    
    SACustomer* getSACustomer() {
        return mSACustomer;
    }
};
