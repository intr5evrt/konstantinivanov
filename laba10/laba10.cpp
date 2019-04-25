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



//operator +
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

//operator -
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

//operator *
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

//operator <
bool time::operator<(time & smallTime)
{
	if (this->hours < smallTime.hours)
		return true;
	else
	if (this->hours > smallTime.hours)
		return false;

	if (this->minutes < smallTime.minutes)
		return true;
	else
	if (this->minutes > smallTime.minutes)
		return false;
}

//operator >
bool time::operator>(time & bigTime)
{
    if (this->hours < bigTime.hours)
		return true;
	else
	if (this->hours > bigTime.hours)
		return false;

	if (this->minutes < bigTime.minutes)
		return true;
	else
	if (this->minutes > bigTime.minutes)
		return false;
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

	int r[10], i, j, f;
	for (i=0; i<10, i++) {
		r[i] = rand()%100;
		printf("%3d", r[i]);
	}
	 printf("\n");
 
    for (i=0; i < 10-1; i++) {
        for (j=0; j < 10-i-1; j++) {
            if (r[j] > r[j+1]) {
                f = r[j];
                r[j] = r[j+1];
                r[j+1] = f;
            }
        }
    }
 
    for (i=0; i<10; i++) 
        printf("%3d", r[i]);
    printf("\n");
}

	system("pause");
}
