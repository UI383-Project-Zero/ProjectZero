class Attraction{
 public:
  int mRideCost;
  int mRideSat;
  int mQueueLen;
  string mRideType;
};

class Ride : protected  Attraction{
 public:
  int mRideThrill;
  int mRideNaus;
};
