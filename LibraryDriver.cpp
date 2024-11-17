// LibraryDriver.cpp -- Build a report based on a loaded list of books in a shipment
//CSIS 212-<D02_202440>

//copyright year verification logic derived/taken from lab instructions
//booksList sorting derived/taken from my lab 3 submission and the textbook

//include and using statements
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Library.h"
#include "Book.h"

using namespace std;

//function prototypes

//main function
int main()
{
	cout << "Zachary Seeley -- Lab 4 - Class Composition" << endl << endl << endl;

	//request library information and create a library object with input

	//start a loop and continue loop until user exits loop
		//display menu
			//error check menu input
	
		//if upper or lower case A is input, start the add book process
			//If maximum number of books have been entered, notify user
			// continue the loop
			//else create book object with user inputs and pass to the Library object
			// continue the loop
		
		//if upper or lower case L is input, list the library and book information
			//use Library object to display current library and book information
			// continue the loop

		//if upper or lower case Q is input, quit the program
			//If not enough books have been entered, notify user to add more books
			// continue the loop

	//Closing program statements
	system("pause");
	return 0;
}

//function definitions

