#pragma once
#include "Book.h"
#include "Magazine.h"
#include "Textbook.h"
#include <set>
#include <memory>
#include <algorithm>
using namespace std;

class Archive
{
	set<Edition*>Catalog;
public:
	Archive();
	~Archive();

	void showCatalog()const;
};

