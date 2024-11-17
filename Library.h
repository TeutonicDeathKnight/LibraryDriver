#pragma once

class Library
{
public:
	void addBook(Book book);
		//Accepts a single book object and adds it to the booksList vector

	void sortBooks();
		//Sorts the list of book objects

	int countBooksInList() const;
		//Determines and returns the number of books in the vector

	int calcNumberHardbound() const;
		//Determines and returns the number of hardbound books in the list

	int calcNumberPaperback() const;
		//Determines and returns the number of paperback books in the list

	void listLibraryInfo() const;
		//Displays the output of library and book information

	void setLibraryName();
	void getLibraryName() const;
	void setLibraryLocation();
	void getLibraryLocation() const;
	void setMaximumBooksInList();
	void getMaximumBooksInList() const;
		//Setters and getters for class data members

	Library();
		//Default constructor
		// initializes strings to "", ints to 0, vector to an empty vector

	Library(std::string, std::string, int);
		//three argument constructor
		// initializes strings and ints to respective values
		// initializes vector to an empty vector

private:
	string libraryName;
		//Store library name
		// cannot be blank
	string libraryLocation;
		//store library location
		// cannot be blank
	int maximumBooksInList;
		//store number of maximum books in list
		// must be between 3 and 6 inclusive
	vector<Book> booksList;
		//store list of books
};