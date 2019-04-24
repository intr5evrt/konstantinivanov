#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "employee.h"
#include "department.h"
#include "idCard.h"

using namespace std;


//department

void department::setName(string newName)
{
	this->name=newName;
}

string department::getName()
{
	return this->name;
}
	 
void department::setHead(employee *newHead)
{
	this->head=newHead;
}
	 
employee *department::getHead()
{
	return this->head;
}
	 
void department::print()
{
	cout << "department=" << this->name << " boss=" << this->getHead()->getName() <<endl;
}



//employee

void employee::setName(string  newName)
{
	this->name = newName;
}

string employee::getName()
{
	return this->name;
}

void employee::setPosition(string newPosition)
{
	this->position=newPosition;
}

string employee::getPosition()
{
	return this->position;
}

void employee::setIdCard(idCard *newIdCard)
{
	this->card=newIdCard;
}
	
idCard *employee::getIdCard()
{
	return this->card;
}
	
void employee::setRoom(int newRoom)
{
	this->room=newRoom;
}
	
int employee::getRoom()
{
	return this->room;
}
	
void employee::setDepartment(department *newDepartment)
{
	this->Department=newDepartment;
}
	
department *employee::getdepartment()
{
	return this->Department;
}
	
void employee::print()
{
	cout << "rabotnik=" << this->name << " position="<< this->position << " idCard=" << this->card->getNumber() << " room=" << this->room << " department=" << this->Department->getName() << endl;
}

//idCard

void idCard::setNumber(int newNumber)
{
	this->number=newNumber;
}
	 
int idCard::getNumber()
{
	return this->number;
}
	 
void idCard::setDateExpire(string newDateExpore)
{
	this->dateExpire=newDateExpore;
}
	 
string idCard::getDateExpire()
{
	return this->dateExpire;
}
	 
int main()
{
	department develop, admins;
	develop.setName("develop");
	admins.setName("admins");

	idCard id101, id5016, id5018, id201, id5022, id5019;
	id101.setNumber(101); 
	id5016.setNumber(5016); 
	id5018.setNumber(5018);
	id201.setNumber(201); 
	id5022.setNumber(5022); 
	id5019.setNumber(5019);

	employee evgenia, misha, alex, ivan, petr, sidor;
	ivan.setName("ivan"); 
	petr.setName("petr");
	sidor.setName("sidor");
	evgenia.setName("evgenia");
	misha.setName("misha");
	alex.setName("alex");

	ivan.setPosition("boss");
	develop.setHead(&ivan);

	misha.setPosition("director");
	admins.setHead(&misha);

	petr.setPosition("glavniy_razrab");
	sidor.setPosition("razrab");
	ivan.setDepartment(&develop); ivan.setRoom(101); ivan.setIdCard(&id101);
	petr.setDepartment(&develop); petr.setRoom(102); petr.setIdCard(&id5016);
	sidor.setDepartment(&develop); sidor.setRoom(102); sidor.setIdCard(&id5018);

	alex.setPosition("zam_director");
	evgenia.setPosition("bukh");
	misha.setDepartment(&admins); misha.setRoom(201); misha.setIdCard(&id201);
	alex.setDepartment(&admins); alex.setRoom(201); alex.setIdCard(&id5022);
	evgenia.setDepartment(&admins); evgenia.setRoom(202); evgenia.setIdCard(&id5019);

	ivan.print(); petr.print(); sidor.print();
	misha.print(); alex.print(); evgenia.print();

	develop.print();
	admins.print();

	system("PAUSE");
	return 0;
}

