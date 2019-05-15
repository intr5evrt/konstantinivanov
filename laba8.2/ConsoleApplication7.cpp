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

void money::addMoney(money & somemoney)
{
	rubley += somemoney.rubley;
	kopeek += somemoney.kopeek;
	if (kopeek >= 100)
	{
		rubley++;
		kopeek -= 100;
	}
}

void money::substractMoney(money & somemoney)
{
	rubley -= somemoney.rubley;
	int i = kopeek - somemoney.kopeek;
	if (i < 0) {
		rubley--;
		kopeek = 100 + i;
	}
	else
		kopeek = i;
}

void money::print()
{
	cout << rubley << ", " << (int)kopeek << endl;
}

int main()
{
	money a, b;
	a.set(10, 150);
	b.set(20, 50);
	a.addMoney(b);
	a.print();
	a.set(21, 0);
	a.substractMoney(b);
	a.print();
}
