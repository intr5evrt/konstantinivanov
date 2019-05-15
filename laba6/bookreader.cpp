#include "pch.h"
#include <iostream>
#include <string>
#include "bookreader.h"

using namespace std;
void book::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}
void book::set_year(const int new_year)
{
	this->year = new_year;
	return;
}
void book::get_info()
{
	cout << this->name << "(" << this->year << ")"<<endl;
	return;
}

void reader::set_fio(const char * new_fio)
{
	this->fio = new_fio;
	return;
}
void reader::set_age(const int new_age)
{
	this->age = new_age;
	return;
}
void reader::set_book(book current)
{
	this->currentBook = current;
	return;
}
void reader::get_info()
{
	cout << "Ф.И.О.: " << this->fio<<endl;
	cout <<"Возраст: " << this->age<<endl;
	this->currentBook.get_info();
	return;
}