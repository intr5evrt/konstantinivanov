#pragma once
#include "pch.h"

class money {
private:
	int rubley;
	unsigned char kopeek;
public:
	void set(int newrubley, int newkopeek);
	int getRubley() { return rubley; };
	unsigned char getKopeek() { return kopeek; };
	void addMoney(money &somemoney);
	void substractMoney(money &somemoney);
	void print();
};