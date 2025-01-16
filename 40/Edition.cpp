#include "Edition.h"

Edition::Edition()
{
    name = "undefined";
    author = "undefined";
    isExist = false;
    year = 0;
}

Edition::Edition(string name, string author, bool isExist, int year)
{
    this->name = name;
    this->author = author;
    this->isExist = isExist;
    this->year = year;
}

string Edition::getName() const
{
    return name;
}

string Edition::getAuthor() const
{
    return author;
}

bool Edition::getIsExist() const
{
    return isExist;
}

int Edition::getYear() const
{
    return year;
}

void Edition::setIsExist(bool isExist)
{
    this->isExist = isExist;
}

void Edition::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Is Exist: " << boolalpha<< isExist << endl;
    cout << "Year: " << year << endl;
}
