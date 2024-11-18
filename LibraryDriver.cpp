// LibraryDriver.cpp -- Build a report based on a loaded list of books in a shipment
//CSIS 212-<D02_202440>

//copyright year verification logic derived/taken from lab instructions
//booksList sorting derived/taken from my lab 3 submission and the textbook
//changeWhitespaceToNull() and validateNotEmptyString() taken from my lab 3 submission
//clearInputStream() taken from my Lab 1 submission

//include and using statements
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Library.h"
#include "Book.h"

using namespace std;

//function prototypes
Library requestLibraryInfo();
bool validateNotEmptyString(string strToTest);
string changeWhitespaceToNull(string str);
void clearInputStream();

//main function
int main()
{
	cout << "Zachary Seeley -- Lab 4 - Class Composition" << endl << endl << endl;

	//request library information and create a library object with input
	Library library = requestLibraryInfo();

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

//requestLibraryInfo()
Library requestLibraryInfo()
{
	bool validName = false, validLocation = false, validNumber = false;
	string name, location;
	int number = 0;
	
	//while no valid name input has been submitted, ask for library name input
	do
	{
		cout << "Library Name: ";
		getline(cin, name);

		if (validateNotEmptyString(name))
			validName = true;
		else
			clearInputStream();

	} while (validName == false);

	cout << endl;

	//while no valid location input has been submitted, ask for location input
	do
	{
		cout << "Library Location (city state): ";

		getline(cin, location);

		if (validateNotEmptyString(location))
			validLocation = true;
		else
			clearInputStream();

	} while (validLocation == false);

	cout << endl;

	//while no valid number input has been submitted, ask for number input
	do
	{
		cout << "Maximum books allowed in the book list (3 to 6 inclusive): ";

		cin >> number;

		if (cin.fail())
		{
			cout << endl << endl << "You did not input a valid number." << endl
				<< "Input must be a whole integer between 3 and 6 inclusive."
				<< endl << endl;
			clearInputStream();
		}
		else if (number < 3)
		{
			cout << endl << endl << "Your input was less than 3." << endl
				<< "Input must be a whole integer between 3 and 6 inclusive."
				<< endl << endl;
			clearInputStream();
		}
		else if (number > 6)
		{
			cout << endl << endl << "Your input was greater than 6." << endl
				<< "Input must be a whole integer between 3 and 6 inclusive."
				<< endl << endl;
			clearInputStream();
		}
		else if (number > 2 && number < 7)
			validNumber = true;

		
	} while (validNumber == false);

	cout << endl;

	return Library(name, location, number);
}

//validate input string is not empty
bool validateNotEmptyString(string strToTest)
{
	bool containsNonWhitespaceChars = false;
	string str = changeWhitespaceToNull(strToTest);

	//loop through string and if a non whitespace character is found
	// set containsNonWhitespaceChars to true and break out of loop
	for (int position = 0; position < str.length(); position++)
		if (str[position] != '\0')
		{
			containsNonWhitespaceChars = true;
			break;
		}

	//if input is only whitespace characters, output error message
	if (containsNonWhitespaceChars == false)
	{
		cout << endl << "Input cannot be blank or only whitespace characters."
			<< endl << endl;
	}

	return containsNonWhitespaceChars;
}

//Convert all whitespace characters to the null character, return the string
string changeWhitespaceToNull(string str)
{
	//Loop through string and convert all whitespace characters to null
	for (int position = 0; position < str.length(); position++)
	{
		char evalChar = str[position];

		//if current character is one of the 6 whitespace characters
		// replace with the null character
		if (evalChar == 9
			|| evalChar == 10
			|| evalChar == 11
			|| evalChar == 12
			|| evalChar == 13
			|| evalChar == 32)
		{
			str[position] = '\0';
		}
	}

	return str;
}

//Clear input stream
void clearInputStream()
{
	//clear 
	cin.clear();
	//ignore rest of line determining max length of line
	// until the newline character appears
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
