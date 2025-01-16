#pragma once
#include "Book.h"
#include "Magazine.h"
#include "Textbook.h"
#include <vector>
using namespace std;

class Visitor
{
	string name;
	vector<shared_ptr<Edition>>visitorList;
public:
	Visitor(string name);
	void takeEdition(shared_ptr<Edition> obj);
	void returnEdition(string name);
	void showVisitor()const;
};

