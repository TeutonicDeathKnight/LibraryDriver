#include <string>
#include <vector>
#include "Library.h"
#include "Book.h"

using namespace std;

void Library::addBook(Book book) {}

void Library::sortBooks() {}

int Library::countBooksInList() const {}

int Library::calcNumberHardbound() const {}

int Library::calcNumberPaperback() const {}

void Library::listLibraryInfo() const {}

void Library::setLibraryName() {}
void Library::getLibraryName() const {}
void Library::setLibraryLocation() {}
void Library::getLibraryLocation() const {}
void Library::setMaximumBooksInList() {}
void Library::getMaximumBooksInList() const {}

Library::Library()
{

}

Library::Library(string name, string location, int number)
{

}