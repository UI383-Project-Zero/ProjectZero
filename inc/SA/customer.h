#ifndef SA_CUSTOMER_H_
#define SA_CUSTOMER_H_

#include <iostream>
#include<cstring>

class SACustomer {
     protected :
     	  int mCustID;
          int mSatisfaction;
          double mMoney;
          int mHunger;
          int mStamina;
          int mPatience;
          int mThrill;
	  bool mBusy;
	  bool mQueue;
	  int mEnqueueTick;
          double mTicketPrice;
     public :
	  SACustomer();
	  ~SACustomer();
          int getMCustID(){return mCustID;}
          void setMSatisfaction(int newSat){mSatisfaction = newSat;}
          int getMSatisfaction(){return mSatisfaction;}
          void setMMoney(double newMoney){mMoney = newMoney;}
          double getMMoney(){return mMoney;}
          void setMHunger (int newHun){mHunger = newHun;}
          int getMHunger(){return mHunger;}
          void setMStamina(int newStam){mStamina = newStam;}
          int getMStamina(){return mStamina;}
          void setMBusy(bool newStatus){mBusy = newStatus;}
          bool getMBusy(){return mBusy;}
          void setMQueue(bool newStatus){mQueue = newStatus;}
          bool getMQueue(){return mQueue};
	  void setMEnqueueTick(int startTick){mEnqueueTick = startTick};
	  int getWaitTime(int currentTick){return mEnqueueTick - startTick;}
};
#endif  // SA_CUSTOMER_H_
