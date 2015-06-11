/*
Derrick Fox
CS 226
May 1, 2014
Month Class
*/

#include <iostream>
#include <string>
#ifndef MONTH_H
#define MONTH_H
using namespace std;

// Create a user defined class named "Month".
class Month {

// Define class variables which have private access exclusive only to members of this class. 
private:
	string name;
	int monthNumber;

// Define class functions publically available to other classes including the main function.
public:
	// Default constructor 
	Month();
	// Constructor that accepts the month's name
	Month(string);
	// Constructor that accepts the month's number
	Month(int);

	// Uses month's name to return the month's number
	int getMonthNum(string);
	// Uses the month's number to return the month's name
	string getMonthName(int);
	// Returns the month's name
	string getMonthName();
	// Returns the month's number
	int getMonthNum();

	// Set's month's name
	void setMonthName(string);
	// Set's month's number
	void setMonthNum(int);

	// Overloaded operators to increment and decrement the month's number specifically
	void operator++();
	void operator++(int);
	void operator--();
	void operator--(int);

	// Must declare the overloaded << and >> operators as friends because they are of 
	// a different class and yet they still need access to the Month class's instance variables. 
	friend ostream &operator<<(ostream &, Month &);
	friend istream &operator<<(istream &, Month &);
};
// Safeguard 
#endif