#include "Magazine.h"

Magazine::Magazine()
{
	number = 0;
}

Magazine::Magazine(string name, string author, bool isExist, int year, int number):Edition(name, author, isExist, year)
{
	this->number = number;
}

int Magazine::getNumber()
{
	return number;
}

void Magazine::showInfo() const
{
	Edition::showInfo();
	cout << "Number: " << number << endl;
}
