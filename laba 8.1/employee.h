#include <string>
#include "stdafx.h"
#include <iostream>

using namespace std;

class idCard;
class department;

class employee {

 private:
	 string name;
	string position;
	idCard *card;
	int room;
	department *Department;

 public:
	void setName(string newName);
	string getName();
	void setPosition(string newPosition);
	string getPosition();
	void setIdCard(idCard *newIdCard);
	idCard *getIdCard();
	void setRoom(int newRoom);
	int getRoom();
	void setDepartment(department *newDepartment);
	department *getdepartment();
	void print();
};