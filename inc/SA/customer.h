#ifndef SA_CUSTOMER_H_
#define SA_CUSTOMER_H_

#include <iostream>
#include<cstring>

class SACustomer {
     protected :
     	  int mCustID;
          int mSatisfaction;
          double mMoney;
          int mTickets;
          int mHunger;
          int mStamina;
          int mNausea;
          int mPatience;
          std::string mFavoriteFood;
          int mThrillSeeking;
		  bool mBusy;
		  bool mQueue;
          double mTicketPrice;
     public :
          
          virtual void setMTicketPrice(double) = 0;
          virtual double getMTicketPrice() = 0;
		  void setMCustID(int);
          int getMCustID();
          void setMSatisfaction(int);
          int getMSatisfaction();
          void setMMoney(double);
          double getMMoney();
          void setMTickets(int);
          int getMTickets();
          void setMHunger (int);
          int getMHunger();
          void setMStamina (int);
          int getMStamina();
          void setMNausea (int);
          int getMNausea();
          void setMPatience (int);
          int getMPatience();
          void setMBusy(bool);
          bool getMBusy();
          void setMQueue(bool);
          bool getMQueue();    
};
#endif  // SA_CUSTOMER_H_
