#include "Archive.h"

Archive::Archive()
{
	Catalog.insert(shared_ptr<Edition>( new Book("Harry Potter", "Rowling", true, 2001, "Ranok")));
	Catalog.insert(shared_ptr<Edition>(new Magazine("Nature", "Ukraine", true, 2024, 2)));
	Catalog.insert(shared_ptr<Edition>(new Magazine("Nature", "Ukraine", true, 2024, 5)));
	Catalog.insert(shared_ptr<Edition>(new Textbook("C++", "Straustrup", true, 2005, "Ranok",8)));
}

Archive::~Archive()
{
	/*for (auto item : Catalog)
	{
		delete item;
	}*/
}

void Archive::showCatalog() const
{
	for (auto item : Catalog)
	{
		item->showInfo();
		cout << endl;
	}
}
