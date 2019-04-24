#include <string>
#include "stdafx.h"
#include <iostream>

using namespace std;

class department {

 private:
	std::string name;
	employee *head;

 public:
	 void setName(string newName);
	 string getName();
	 void setHead(employee *newHead);
	 employee *getHead();
	 void print();
};