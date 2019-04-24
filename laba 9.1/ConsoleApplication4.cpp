#include "stdafx.h"
#include <iostream>
#include <string>
#include "time.h"

using namespace std;

void time::setTime(long newHours, unsigned char newMinutes)
{
	this->hours=newHours;
	this->minutes=newMinutes;
}

long time::getHours()
{
	return this->hours;
}

unsigned char time::getMinutes()
{
	return this->minutes;
}



//оператор +
time time::operator+(time & plusTime)
{
	time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes>=60)
	{
		result.hours++;
		result.minutes-=60;
	}
	return result;
}

//оператор -
time time::operator-(time & minusTime)
{
	int s;
	time result;
	result.hours=this->hours-minusTime.hours;
	s=this->minutes-minusTime.minutes;
	if (s<0)
	{
		result.hours--;
		s+=60;
	}
	result.minutes=s;
	return result;
}

//оператор *
time time::operator*(int mulTimes)
{
	int k;
	time result;
	result.hours=this->hours*mulTimes;
	k=this->minutes*mulTimes;
	while (k>=60)
	{
		result.hours++;
		k -= 60;
	}
	result.minutes = k;
	return result;
}

void time::print()
{
	cout << this->hours<<"hour"<<(int)(this->minutes)<<"minute"<<"\n"; 
}

void main()
{
	time a,b,c,d,e;
	a.setTime(2,30);
	b.setTime(0,40);
	
	c=a+b;
	c.print();
	
	d=a-b;
	d.print();

	e=a*5;
	e.print();

	system("pause");
}
