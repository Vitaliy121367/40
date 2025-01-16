#pragma once
#include "Book.h"
class Textbook : public Book
{
protected:
	int grade;
public:
	Textbook();
	Textbook(string name, string author, bool isExist, int year, string publisher, int grade);
	~Textbook() { cout << "~Textbook\n"; };

	int getGrade()const;

	virtual void showInfo()const override;
};

