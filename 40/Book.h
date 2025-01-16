#pragma once
#include "Edition.h"
class Book :public Edition
{
protected:
	string publisher;
public:
	Book();
	Book(string name, string author, bool isExist, int year, string publisher);
	~Book(){ cout<<"~Book\n"; };

	string getPublisher()const;

	virtual void showInfo()const override;
};

