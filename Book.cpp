#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

//listBookInfo()
void Book::listBookInfo() const
{
	cout << "* " << bookTitle << " by " << bookAuthor
		<< " Copyright-" << bookCopyrightYear;

	if (isHardbound == true)
		cout << " Hardbound";
	else if (isHardbound == false)
		cout << " Paperback";
	else
		cout << " **Error in determining if hardbound or paperback**";
}

//setBookTitle()
void Book::setBookTitle(string title)
{
	//if title input is blank, output error message
	// else data member bookAuthor is set to title value7
	if (title == "")
		cout << endl << "Book title cannot be blank." << endl;
	else
		bookTitle = title;
}

//getBookTitle()
string Book::getBookTitle() const { return bookTitle; }

//setBookAuthor()
void Book::setBookAuthor(string author)
{
	//if author input is blank, output error message
	// else data member bookAuthor is set to author value
	if (author == "")
		cout << endl << "Author name cannot be blank." << endl;
	else
		bookAuthor = author;
}

//getBookAuthor()
string Book::getBookAuthor() const { return bookAuthor; }

//setBookCopyrightYear()
void Book::setBookCopyrightYear(int copyrightYear)
{
	//if length of copyrightYear is less than or greater than 4, output error message
	// else member variable bookCopyrightYear is set to copyrightYear value
	if (to_string(copyrightYear).length() != 4)
		cout << endl << "Copyright year length is less than four characters." << endl
		<< "Copyright year length must be four characters." << endl;
	else if (copyrightYear < 1900 || copyrightYear > 2023)
		cout << endl << "Copyright year must be between 1900 and 2023 inclusive." << endl;
	else
		bookCopyrightYear = copyrightYear;
}

//getBookCopyrightYear()
int Book::getBookCopyrightYear() const { return bookCopyrightYear; }

//setIsHardbound()
void Book::setIsHardbound(int hardbound)
{
	//verify input is 1 or 0
	// if not 1 or 0, output appropriate error message
	// if 1, set member variable isHardbound to true
	// if 0, set member variable isHardbound to false
	if (hardbound < 0)
		cout << endl << "Input was less than 0. Input must be 1 or 0." << endl;
	else if (hardbound > 1)
		cout << endl << "Input was greater than 1. Input must be 1 or 0." << endl;
	else if (hardbound == 1)
		isHardbound = true;
	else if (hardbound == 0)
		isHardbound = false;
	else
		cout << endl << "**Input error**" << endl << "Input must be 1 or 0." << endl;
}

//getIsHardbound()
bool Book::getIsHardbound() const { return isHardbound; }

//default constructor
Book::Book()
{
	bookTitle = "";
	bookAuthor = "";
	bookCopyrightYear = 0;
	isHardbound = false;
}

//four argument constructor
Book::Book(string title, string author, int copyrightYear, bool hardbound)
{
	setBookTitle(title);
	setBookAuthor(author);
	setBookCopyrightYear(copyrightYear);
	setIsHardbound(hardbound);
}