#include "pch.h"
#include "money.h"
#include <iostream>

using namespace std;

void money::set(int newrubley, int newkopeek)
{
	rubley = newrubley;
	if (newkopeek > 100) {
		int i = newkopeek % 100;
		rubley += newkopeek / 100;
		kopeek = i;
	}
	else
		kopeek = newkopeek;
}

money money::operator+(money & someMoney)
{
	money result;
	result.rubley = rubley + someMoney.rubley;
	result.kopeek = kopeek - someMoney.kopeek;
	if (result.kopeek >= 100)
	{
		rubley++;
		result.kopeek -= 100;
	}
	return result;
}

money money::operator-(money & someMoney)
{
	money result;
	result.rubley = rubley - someMoney.rubley;
	int i = kopeek - someMoney.kopeek;
	if (i < 0) {
		result.rubley--;
		result.kopeek = 100 + i;
	}
	else
		result.kopeek = i;
	return result;
}

money money::operator*(const int& someVariable)
{
	money result;
	result.rubley = rubley * someVariable;
	int i = kopeek * someVariable;
	if (i >= 100) {
		int addKopeek = i % 100;
		int addRubley = i / 100;
		result.rubley += addRubley;
		result.kopeek = addKopeek;
	}
	else
		result.kopeek = i;
	return result;
}

void money::print()
{
	cout << rubley << ", " << (int)kopeek << endl;
}

int main()
{
	money one;
	one.set(5, 150);
	money two;
	two.set(5, 50);
	money three = one + two;
	three.print();
	three = one - two;
	three.print();
	three = one * 3;
	three.print();
}

