
class Attraction{
 public:
  int mRideCost;
  int mRideSat;
  int mQueueLen;
  virtual void test();

  
};

class Ride : protected  Attraction{
 public:
  int mRideThrill;
  int mRideNaus;
  void test();
};

class Game : protected  Attraction{
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
