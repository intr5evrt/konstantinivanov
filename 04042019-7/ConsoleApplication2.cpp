#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "spell.h"
#include "mage.h"

using namespace std;

void mage::init(int newhp, int newmp, string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}

string mage::getname()
{
	return this->name;
}

void mage::say(string text)
{
	cout << this -> name << "says" << text << endl <<endl;
}

int mage::cast(spell & spl, mage & target)
{
	cout << this -> name << "hit" << spl.name << target.getname() << endl;
	target.hit (spl);
}

void mage::hit(spell & spl)
{
	hp=hp-spl.dhp;
	mp=mp-spl.dmp;
}

void main()
{
	mage vanya;
	mage boris;
	spell bolt;
	spell drain;

	vanya.init=200,200,"vanya";
	boris.init=200,200,"boris";

	vanya.say="hi";
	boris.say="hi";

	bolt.dhp=30;
	bolt.dmp=30;
	bolt.name="bolt";

	drain.dhp=25;
	drain.dmp=30;
	drain.name="drain";
}

