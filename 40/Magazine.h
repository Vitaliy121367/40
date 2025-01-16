#pragma once
#include "Edition.h"
class Magazine : public Edition
{
protected:
	int number;
public:
	Magazine();
	Magazine(string name, string author, bool isExist, int year, int number);
	~Magazine(){ cout << "~Magazine\n"; };

	int getNumber();

	virtual void showInfo()const override;
};

