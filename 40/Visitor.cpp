#include "Visitor.h"

Visitor::Visitor(string name)
{
	this->name = name;
}

void Visitor::takeEdition(shared_ptr<Edition> obj)
{
	if (obj != nullptr)
	{
		visitorList.push_back(obj); 
		obj->setIsExist(false);
	}
}

void Visitor::showVisitor() const
{
	cout << "-------------------------------------------------\n";
	cout << "Name: " << name << endl;
	cout << "Visitor List: \n\n";
	for (auto item : visitorList)
	{
		item->showInfo();
		cout << endl;
	}
	cout << "-------------------------------------------------\n";
}
