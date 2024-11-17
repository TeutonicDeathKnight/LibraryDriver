#pragma once

class Library
{
public:
	void addBook(std::Book book);
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

	Library();

private:
	std::string libraryName;
	std::string libraryLocation;
	int maximumBooksInList;
	std::vector<std::Book> booksList;
};