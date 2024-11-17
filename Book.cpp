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

}

string Book::getBookTitle() const { return bookTitle; }

void Book::setBookAuthor(string author)
{

}

string Book::getBookAuthor() const { return bookAuthor; }

void Book::setBookCopyrightYear(int copyrightYear)
{

}

int Book::getBookCopyrightYear() const { return bookCopyrightYear; }

void Book::setIsHardbound(int hardbound)
{
	if (hardbound < 0)
		cout << endl << "Input was less than 0. Input must be 1 or 0." << endl;
	else if (hardbound > 1)
		cout << endl << "Input was greater than 1. Input must be 1 or 0." << endl;
	else
		isHardbound = hardbound;
}

bool Book::getIsHardbound() const { return isHardbound; }