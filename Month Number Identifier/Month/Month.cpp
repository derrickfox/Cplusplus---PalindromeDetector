/*
Derrick Fox
CS 226
May 1, 2014
Month Class
*/

#include <iostream>
#include <string>
// Include the class file for the user defined Month class.
#include "Month.h"
using namespace std;


// Default constructor.
Month::Month() {
	name = "January";
	monthNumber = 1;
}

// Constructor that accepts the month's name 
Month::Month(string s) {
	name = s;
	monthNumber = getMonthNum(s);
}

// Constructor that accepts the month's number
Month::Month(int n) {
	monthNumber = n;
	name = getMonthName(n);
}

// Returns month's name
string Month::getMonthName() {
	return name;
}

// Uses month's number and an array of month names to return month's name
string Month::getMonthName(int n) {
	string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	return months[n - 1];
}

// Returns month's number
int Month::getMonthNum() {
	return monthNumber;
}

// Uses month's name and a coditional statement to return month's number
int Month::getMonthNum(string s) {
	if (s == "January")
		return 1;
	else if (s == "February")
		return 2;
	else if (s == "March")
		return 3;
	else if (s == "April")
		return 4;
	else if (s == "May")
		return 5;
	else if (s == "June")
		return 6;
	else if (s == "July")
		return 7;
	else if (s == "August")
		return 8;
	else if (s == "September")
		return 9;
	else if (s == "October")
		return 10;
	else if (s == "November")
		return 11;
	else if (s == "December")
		return 12;
	else
		return 0;
}

// Sets month's name
void Month::setMonthName(string s) {
	name = s;
}

// Sets month's number
void Month::setMonthNum(int n) {
	monthNumber = n;
}

// Overloaded operators 
void Month::operator++() {
	if (monthNumber + 1 < 13) 
		++monthNumber;
	else
		monthNumber = 1;
	name = getMonthName(monthNumber);
}

void Month::operator++(int) {
	if (monthNumber + 1 < 13)
		monthNumber++;
	else
		monthNumber = 1;
	name = getMonthName(monthNumber);
}

void Month::operator--() {
	if (monthNumber - 1 > 0)
		--monthNumber;
	else
		monthNumber = 12;
	name = getMonthName(monthNumber);
}

void Month::operator--(int) {
	if (monthNumber - 1 > 0)
		monthNumber--;
	else
		monthNumber = 12;
	name = getMonthName(monthNumber);
}

ostream &operator<<(ostream &strm, Month &obj) {
	strm << obj.getMonthName();
	return strm;
}

istream &operator>>(istream &strm, Month &obj) {
	int number;
	strm >> number;
	obj.setMonthNum(number);
	strm.ignore();
	return strm;
}