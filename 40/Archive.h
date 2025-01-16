#pragma once
#include "Book.h"
#include "Magazine.h"
#include "Textbook.h"
#include <set>
#include <memory>
#include <algorithm>
using namespace std;

struct compareEdition {
	bool operator()(const shared_ptr<Edition> left, const shared_ptr<Edition> right)const {
		if (left->getYear()> right->getYear())
		{
			return true;
		}
		else if (left->getYear() == right->getYear())
		{
			if (string(typeid(*left).name()) < string(typeid(*right).name()))
			{
				return true;
			}
			else if(string(typeid(*left).name()) == string(typeid(*right).name()) && string(typeid(*left).name()) == "class Magazine")
			{
				return (dynamic_pointer_cast<Magazine>(left))->getNumber() < (dynamic_pointer_cast<Magazine>(right))->getNumber();
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
};

class Archive
{
	set<shared_ptr<Edition>, compareEdition>Catalog;
public:
	Archive();
	~Archive();

	void showCatalog()const;

	shared_ptr<Edition>finedEdition(string name) {
		for (auto item : Catalog)
		{
			return item;
		}
		return nullptr;
	}
};

