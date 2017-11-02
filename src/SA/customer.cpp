#include <iostream>

#include "../../inc/SA/customer.h"

using namespace std;

SACustomer::SACustomer(){
  cout << "SACustomer() Constructor" << endl;
}

SACustomer::SACustomer(int id){
  cout << "SACustomer(int) Constructor" << endl;
  mCustID = id;
}

SACustomer::~SACustomer(){
  cout << "~SACustomer() Destructor" << endl;
}
void SACustomer::setMCustID(int c) {
	cout << "SACustomer::setMCustID(int)" << endl;
	mCustID = c;
}

int SACustomer::getMCustID() {
	cout << "SACustomer::getMCustID()" << endl;
	return 	mCustID;
}

void SACustomer::setMSatisfaction(int s) {
	cout << "SACustomer::setMSatisfaction(int)" << endl;
	mSatisfaction = s;
}

int SACustomer::getMSatisfaction() {
	cout << "SACustomer::getMSatisfaction()" << endl;
	return mSatisfaction;
}
void SACustomer::setMMoney(double m) {
	cout << "SACustomer::setMMoney(double)" << endl;
	mMoney= m;
}

double SACustomer::getMMoney() {
	cout << "SACustomer::getMMoney()" << endl;
	return mMoney;
}
void SACustomer::setMTickets(int t) {
	cout << "SACustomer::setMTickets(int)" << endl;
	mTickets = t;
}

int SACustomer::getMTickets() {
	cout << "SACustomer::getMTickets()" << endl;
	return mTickets;
}
void SACustomer::setMHunger(int h) {
	cout << "SACustomer::setMHunger(int)" << endl;
    mHunger = h;
}

int SACustomer::getMHunger() {
	cout << "SACustomer::getMHunger()" << endl;
	return mHunger;
}
void SACustomer::setMStamina(int a) {
	cout << "SACustomer::setMStamina(int)" << endl;
    mStamina = a;
}

int SACustomer::getMStamina() {
	cout << "SACustomer::getMStamina()" << endl;
	return  mStamina;
}
void SACustomer::setMNausea(int n) {
	cout << "SACustomer::setMNausea(int)" << endl;
    mNausea = n;
}

int SACustomer::getMNausea() {
	cout << "SACustomer::getMNausea()" << endl;
	return  mNausea;
}
void SACustomer::setMPatience(int p) {
	cout << "SACustomer::setMPatience(int)" << endl;
    mPatience = p;
}

int SACustomer::getMPatience() {
	cout << "SACustomer::getMPatience()" << endl;
	return  mPatience;
}
void SACustomer::setMBusy(bool b) {
	cout << "SACustomer::setMBusy(bool)" << endl;
    mBusy = b;
}

bool SACustomer::getMBusy() {
	cout << "SACustomer::getMBusy()" << endl;
	return  mBusy;
}
void SACustomer::setMQueue(bool q) {
	cout << "SACustomer::setMQueue(bool)" << endl;
    mQueue = q;
}

bool SACustomer::getMQueue() {
	cout << "SACustomer::getMQueue()" << endl;
	return   mQueue;
}
