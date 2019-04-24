#include <string>
#include "stdafx.h"
#include <iostream>

using namespace std;

class idCard {

 private:
	 int number;
	 string dateExpire;

 public:
	 void setNumber(int newNumber);
	 int getNumber();
	 void setDateExpire(string newDateExpore);
	 string getDateExpire();
	 void print();
};