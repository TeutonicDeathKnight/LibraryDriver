#pragma once

class Book
{
public:
	void listBookInfo() const;
		//displays the output of the book information

	void setBookTitle(string title);
	string getBookTitle() const;
	void setBookAuthor(string author);
	string getBookAuthor() const;
	void setBookCopyrightYear(int copyrightYear);
	int getBookCopyrightYear() const;
	void setIsHardbound(bool hardbound);
	bool getIsHardbound() const;
		//setters and getters for data members

	Book();
		//default constructor
		// initializes strings to "", ints to 0, bools to false

	Book(string, string, int, bool);
		//four argument constructor
		// initializes data members to each respective value passed in

private:
	string bookTitle;
		//stores name of book's title
		// cannot be blank
	string bookAuthor;
		//stores name of book's author
		// cannot be blank
	int bookCopyrightYear;
		//stores book's copyright year
		// must be four digits and between 1900 and 2023 inclusive
	bool isHardbound;
		//stores flag for if book is hardbound or not
};