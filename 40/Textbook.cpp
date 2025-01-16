#include "Textbook.h"

Textbook::Textbook()
{
    grade = 1;
}

Textbook::Textbook(string name, string author, bool isExist, int year, string publisher, int grade):Book(name,  author,  isExist,  year,  publisher)
{
    this->grade = grade;
}

int Textbook::getGrade() const
{
    return grade;
}

void Textbook::showInfo() const
{
    Book::showInfo();
    cout << "Grade: " << grade << endl;
}
