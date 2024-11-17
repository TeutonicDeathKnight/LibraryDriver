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

void Book::setIsHardbound(bool hardbound)
{

}

bool Book::getIsHardbound() const { return isHardbound; }