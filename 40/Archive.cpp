#include "Archive.h"

Archive::Archive()
{
	Catalog.insert(new Book("Harry Potter", "Rowling", true, 2001, "Ranok"));
	Catalog.insert(new Magazine("Nature", "Ukraine", true, 2024, 2));
	Catalog.insert(new Magazine("Nature", "Ukraine", true, 2024, 5));
	Catalog.insert(new Textbook("C++", "Straustrup", true, 2005, "Ranok",8));
}

Archive::~Archive()
{
}

void Archive::showCatalog() const
{
	for (auto item : Catalog)
	{
		item->showInfo();
		cout << endl;
	}
}
