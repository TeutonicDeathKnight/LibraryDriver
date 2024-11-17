#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "Book.h"

using namespace std;

void Library::addBook(const Book& book)
{

}

void Library::sortBooks()
{

}

int Library::countBooksInList() const
{

}

int Library::calcNumberHardbound() const
{

}

int Library::calcNumberPaperback() const
{

}

void Library::listLibraryInfo() const
{

}

void Library::setLibraryName(string name)
{
	//if name is blank, output error message
	// else set member variable libraryName to name value
	if (name == "")
		cout << endl << "Library name cannot be blank." << endl;
	else
		libraryName = name;
}

string Library::getLibraryName() const { return libraryName; }

void Library::setLibraryLocation(string location)
{
	//if location is input is blank, output error message
	// else set member variable libraryLocation to location value
	if (location == "")
		cout << endl << "Library location cannot be blank." << endl;
	else
		libraryLocation = location;
}

string Library::getLibraryLocation() const { return libraryLocation; }

void Library::setMaximumBooksInList(int bookNum)
{
	//If bookNum input is less than 3 or greater than 6, output error message
	// else set member variable maximumBooksInList to bookNum value
	// then resize member variable booksList vector to bookNum value
	if (bookNum < 3 || bookNum > 6)
		cout << endl << "Maximum number of books must be between 3 and 6 inclusive."
		<< endl;
	else
	{
		maximumBooksInList = bookNum;
		booksList.resize(bookNum);
	}
}

int Library::getMaximumBooksInList() const { return maximumBooksInList; }

Library::Library()
{
	libraryName = "";
	libraryLocation = "";
	maximumBooksInList = 0;
}

Library::Library(string name, string location, int number)
{
	setLibraryName(name);
	setLibraryLocation(location);
	setMaximumBooksInList(number);
}