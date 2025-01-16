#include "Book.h"

Book::Book()
{
    publisher = "undefined";
}

Book::Book(string name, string author, bool isExist, int year, string publisher) :Edition(name, author, isExist, year)
{
    this->publisher = publisher;
}

string Book::getPublisher() const
{
    return publisher;
}

void Book::showInfo() const
{
    Edition::showInfo();
    cout << "Publisher: " << publisher << endl;
}
