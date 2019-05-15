#include "pch.h"
#include <iostream>

class book
{
private:
	std::string name;
	int year;
public:
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};

class reader
{
private:
	std::string fio;
	int age;
	book currentBook;
public:
	void set_fio(const char * new_fio);
	void set_age(const int new_age);
	void set_book(book current);
	void get_info();
};