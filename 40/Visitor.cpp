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

void Visitor::returnEdition(string name)
{
	for (int i=0; i < visitorList.size();i++)
	{
		if (visitorList[i]->getName() == name)
		{
			visitorList[i]->setIsExist(true);
			visitorList.erase(visitorList.begin()+i);
			cout << this->name << " return:\n";
			return;
		}
	}
	cout << "Not fined: " << name << endl;
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
