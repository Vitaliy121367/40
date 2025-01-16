#include <iostream>
#include <iomanip>
#include <string>
#include "Archive.h"
#include "Visitor.h"
using namespace std;

int main()
{
	Archive ItStep;
	ItStep.showCatalog();
	Visitor Vlad("Vladyslav");
	Vlad.takeEdition(ItStep.finedEdition("C++"));
	Vlad.takeEdition(ItStep.finedEdition("Harry Potter"));
	Vlad.showVisitor();
	ItStep.showCatalog();
	Vlad.returnEdition("C++");
	Vlad.returnEdition("C#");
	Vlad.showVisitor();
	ItStep.showCatalog();

}