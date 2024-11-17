#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

void Book::listBookInfo() const
{
	cout << bookTitle << " by " << bookAuthor << " Copyright-" << bookCopyrightYear;

	if (isHardbound == true)
		cout << " Hardbound";
	else if (isHardbound == false)
		cout << " Paperback";
	else
		cout << " **Error in determining if hardbound or paperback**";
}

void Book::setBookTitle(string title)
{
	//if title input is blank, output error message
	// else data member bookAuthor is set to title value7
	if (title == "")
		cout << endl << "Book title cannot be blank." << endl;
	else
		bookTitle = title;
}

string Book::getBookTitle() const { return bookTitle; }

void Book::setBookAuthor(string author)
{
	//if author input is blank, output error message
	// else data member bookAuthor is set to author value
	if (author == "")
		cout << endl << "Author name cannot be blank." << endl;
	else
		bookAuthor = author;
}

string Book::getBookAuthor() const { return bookAuthor; }

void Book::setBookCopyrightYear(int copyrightYear)
{
	//if length of copyrightYear is less than or greater than 4, output error message
	// 
	if (to_string(copyrightYear).length() < 4
		|| to_string(copyrightYear).length() > 4)
		cout << endl << "Copyright year length is less than four characters." << endl
		<< "Copyright year length must be four characters." << endl;
	else if (copyrightYear < 1900 || copyrightYear > 2023)
		cout << endl << "Copyright year must be between 1900 and 2023 inclusive." << endl;
	else
		bookCopyrightYear = copyrightYear;
}

int Book::getBookCopyrightYear() const { return bookCopyrightYear; }

void Book::setIsHardbound(int hardbound)
{
	//verify input is 1 or 0
	// if not 1 or 0, output appropriate error message
	// if 1 or 0, set member variable isHardbound to hardbound value
	if (hardbound < 0)
		cout << endl << "Input was less than 0. Input must be 1 or 0." << endl;
	else if (hardbound > 1)
		cout << endl << "Input was greater than 1. Input must be 1 or 0." << endl;
	else if (hardbound == 1 || hardbound == 0)
		isHardbound = hardbound;
	else
		cout << endl << "**Input error**" << endl << "Input must be 1 or 0." << endl;
}

bool Book::getIsHardbound() const { return isHardbound; }