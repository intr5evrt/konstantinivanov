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
	money operator+(money& plusTime);
	money operator-(money& plusTime);
	money operator*(const int& plusTime);
	void print();
};