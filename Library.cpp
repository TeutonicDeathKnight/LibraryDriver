#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "Book.h"

using namespace std;

void Library::addBook(const Book& book)
{
	if (book.getBookTitle() != ""
		&& book.getBookAuthor() != ""
		&& book.getBookCopyrightYear() != 0)
	{
		for (Book bk : booksList)
		{
			if (bk.getBookTitle() == "")
			{
				bk = book;
				break;
			}
		}
	}
}

void Library::sortBooks()
{
	int location;
	Book temp;

	//loop through booksList vector
	for (int outOfOrder = 1; outOfOrder < booksList.size(); outOfOrder++)
	{
		if (booksList[outOfOrder].getBookTitle()
			< booksList[outOfOrder - 1].getBookTitle())
		{
			location = outOfOrder;
			temp = booksList[location];

			//loop through list starting at current item
			// assign previous value to current position
			// until current value is greater than previous value
			do
			{
				booksList[location] = booksList[location - 1];
				location--;
			} while (location > 0
				&& booksList[location - 1].getBookTitle() > temp.getBookTitle());

			booksList[location] = temp;

		}
	}
}

int Library::countBooksInList() const
{
	int number = 0;
	for (Book book : booksList)
	{
		if (book.getBookTitle() != "")
			number++;
	}

	return number;
}

int Library::calcNumberHardbound() const
{
	int numHardback = 0;

	//increment numHardback for each book in booksList if isHardbound = false
	for (Book book : booksList)
	{
		bool val = book.getIsHardbound();
		if (val == true && book.getBookTitle() != "")
			numHardback++;
	}

	return numHardback;
}

int Library::calcNumberPaperback() const
{
	int numPaperback = 0;

	//increment numPaperback for each book in booksList if isHardbound = false
	for (Book book : booksList)
	{
		bool val = book.getIsHardbound();
		if (val == false && book.getBookTitle() != "")
			numPaperback++;
	}

	return numPaperback;
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