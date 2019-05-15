#include "pch.h"
#include <iostream>
#include "bookreader.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	book a;
	a.set_name("Война и мир");
	a.set_year(1869);
	a.get_info();
	book b;
	b.set_name("Властелин Колец");
	b.set_year(1955);
	b.get_info();
	book c;
	c.set_name("Гарри Поттер и филосовский камень");
	c.set_year(2001);
	c.get_info();

	reader vanya, kolya, natasha;
	vanya.set_age(18);
	vanya.set_fio("Иванов Иван Иванович");
	vanya.set_book(a);
	vanya.get_info();
	kolya.set_age(19);
	kolya.set_fio("Николаев Николай Николаевич");
	kolya.set_book(b);
	kolya.get_info();
	natasha.set_age(20);
	natasha.set_fio("Натальева Наталья Натальевна");
	natasha.set_book(c);
	natasha.get_info();

}
