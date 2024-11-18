#pragma once
#include <string>

class Book
{
public:
	void listBookInfo() const;
		//displays the output of the book information

	void setBookTitle(std::string title);
	std::string getBookTitle() const;
	void setBookAuthor(std::string author);
	std::string getBookAuthor() const;
	void setBookCopyrightYear(int copyrightYear);
	int getBookCopyrightYear() const;
	void setIsHardbound(int hardbound);
	bool getIsHardbound() const;
		//setters and getters for data members

	Book();
		//default constructor
		// initializes strings to "", ints to 0, bools to false

	Book(std::string, std::string, int, bool);
		//four argument constructor
		// initializes data members to each respective value passed in

private:
	std::string bookTitle;
		//stores name of book's title
		// cannot be blank
	std::string bookAuthor;
		//stores name of book's author
		// cannot be blank
	int bookCopyrightYear;
		//stores book's copyright year
		// must be four digits and between 1900 and 2023 inclusive
	bool isHardbound;
		//stores flag for if book is hardbound or not
};