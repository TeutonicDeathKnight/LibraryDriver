#include "Book.h"
#include "Library.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//addBook()
void Library::addBook(const Book& book)
{
	//if book title, author, and copyright year are not empty, process input
	if (book.getBookTitle() != ""
		&& book.getBookAuthor() != ""
		&& book.getBookCopyrightYear() != 0)
	{
		//loop through all entries in the list
		for (Book bk : booksList)
		{
			//if book title of current item in list is empty
			// assign book input to current item
			if (bk.getBookTitle() == "")
			{
				bk = book;
				break;
			}
		}
	}
}

//sortBooks()
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

//countBooksInList()
int Library::countBooksInList() const
{
	int number = 0;

	//increment number for each book if book title is not an empty string
	for (Book book : booksList)
	{
		if (book.getBookTitle() != "")
			number++;
	}

	return number;
}

//calcNumberHardbound()
int Library::calcNumberHardbound() const
{
	int numHardback = 0;

	//increment numHardback for each book in booksList if isHardbound = false
	for (Book book : booksList)
		if (book.getIsHardbound() == true && book.getBookTitle() != "")
			numHardback++;

	return numHardback;
}

//calcNumberPaperback()
int Library::calcNumberPaperback() const
{
	int numPaperback = 0;

	//increment numPaperback for each book in booksList if isHardbound = false
	for (Book book : booksList)
		if (book.getIsHardbound() == false && book.getBookTitle() != "")
			numPaperback++;

	return numPaperback;
}

//listLibraryInfo()
void Library::listLibraryInfo() const
{
	cout << endl << endl << libraryName << endl << endl
		<< "Sample of books available to read:" << endl << endl;

	//if booksList has books, output books list and hardbound/paperback counts
	// else output "* No books are available at this time."
	if (countBooksInList() != 0)
	{
		for (Book book : booksList)
		{
			book.listBookInfo();
			cout << endl;
		}

		cout << endl
			<< "Hardbound Books: " << calcNumberHardbound() << endl
			<< "Paperback Books: " << calcNumberPaperback() << endl << endl;
	}
	else
		cout << "* No books are available at this time." << endl << endl;

	system("pause");
}

//setLibraryName()
void Library::setLibraryName(string name)
{
	//if name is blank, output error message
	// else set member variable libraryName to name value
	if (name == "")
		cout << endl << "Library name cannot be blank." << endl;
	else
		libraryName = name;
}

//getLibraryName()
string Library::getLibraryName() const { return libraryName; }

//setLibraryLocation()
void Library::setLibraryLocation(string location)
{
	//if location is input is blank, output error message
	// else set member variable libraryLocation to location value
	if (location == "")
		cout << endl << "Library location cannot be blank." << endl;
	else
		libraryLocation = location;
}

//getLibraryLocation()
string Library::getLibraryLocation() const { return libraryLocation; }

//setMaximumBooksInList()
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

//getMaximumBooksInList()
int Library::getMaximumBooksInList() const { return maximumBooksInList; }

//default constructor
Library::Library()
{
	libraryName = "";
	libraryLocation = "";
	maximumBooksInList = 0;
}

//three argument constructor
Library::Library(string name, string location, int number)
{
	setLibraryName(name);
	setLibraryLocation(location);
	setMaximumBooksInList(number);
}