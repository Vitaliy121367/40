#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Edition
{
protected:
	string name;
	string author;
	bool isExist;
	int year;
public:
	Edition();
	Edition(string name, string author, bool isExist, int year);
	virtual ~Edition() { cout << "~Edition\n"; }

	string getName()const;
	string getAuthor()const;
	bool getIsExist()const;
	int getYear()const;

	void setIsExist(bool isExist);

	virtual void showInfo()const;
};

