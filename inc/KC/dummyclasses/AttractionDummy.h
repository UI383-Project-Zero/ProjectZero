#ifndef DUMMY
#define DUMMY
class Attraction{
 protected:
  int mRideCost;
  int mRideSat;
  int mQueueLen;

 public:
  virtual void test();
  int GetCost(){return mRideCost;}
  int GetSat(){return mRideSat;}
  int GetQ(){return mQueueLen;}
};

class Ride : public Attraction{
 private:
  int mRideThrill;
  int mRideNaus;
 public:
  void test();
  int GetThrill(){return mRideThrill;}
  int GetNaus(){return mRideNaus;}
};

class Game : protected Attraction{
 public:
  void test();
};

class CoinStand : protected  Attraction{
 public:
  void test();
};

class Vendor : protected  Attraction{
 public:
  void test();
};

#endif
