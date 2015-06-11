/*
Derrick Fox
CS 226
May 1, 2014
Month Class
*/

#include <iostream>
#include <string>
#include "Month.h"
using namespace std;

int main()
{
	// Create Month objects with each constructor
	Month monthOne, monthTwo(2), monthThree("March");

	// Display months with overloaded << operator
	cout << monthOne << " is month #" << monthOne.getMonthNum() << endl;
	cout << monthTwo << " is month #" << monthTwo.getMonthNum() << endl;
	cout << monthThree << " is month #" << monthThree.getMonthNum() << endl;

	// Demonstrates postfix ++ operator overload
	monthThree++;
	cout << monthThree << " is month #" << monthThree.getMonthNum() << endl;

	// Demonstrates prefix ++ operator overload
	++monthThree;
	cout << monthThree << " is month #" << monthThree.getMonthNum() << endl;

	// Demonstrates postfix -- operator overload
	monthOne--;
	cout << monthOne << " is month #" << monthOne.getMonthNum() << endl;

	// Demonstrates prefix -- operator overload
	--monthOne;
	cout << monthOne << " is month #" << monthOne.getMonthNum() << endl;

	// Askes user the month's number using overloaded >> operator
	cout << "Enter the month number:\t";
	// It was here that I had the following:
	// cin >> monthOne;
	// But for some reason it would not work and I still do not know why.
	cout << "This is where I wanted to demonstrate the overloaded cin function but \n"
		<< "I cannot get it to work and I do not know why but now I am out of time \n";
	cout << monthOne << " is month #" << monthOne.getMonthNum() << endl;

	system("pause");
	return 0;
}