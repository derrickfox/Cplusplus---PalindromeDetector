/*
Program: George.cpp
Description: Project1
Course: CMSC230 CRN 23267
Student:  Derrick Fox
Professor: Greg Grinberg
Original Due Date: 09/28/14
Revised Project Date: 10/12/14
*/


#include <iostream>
#include <string> 
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;

bool is_palindrome(const string& s);


int main() {

	// Create a string to see if it is a palindrome
	string aLine;
	string answer;
	string lowerString;

	// Create input and output streams
	ifstream George;
	ofstream Output;

	// Open i/o files
	George.open("George.txt");
	Output.open("Output.txt");

	/*
	if (George.is_open()){
		while (getline(George, aLine)) {
			cout << aLine << endl;
		}
	}
	*/
	if (George.is_open()){
		while (getline(George, aLine)) {
			std::transform(aLine.begin(), aLine.end(), aLine.begin(), ::tolower);
			if (is_palindrome(aLine) == false){
				cout << aLine << "  is NOT a palindrome.\n";
				Output << aLine << "  is NOT a palindrome.\n";
			}
			else if (is_palindrome(aLine) == true){
				cout << aLine << "  is a palindrome.\n";
				Output << aLine << "  is a palindrome.\n";
			} else
				cout << aLine << "  ERROR.\n";
				Output << aLine << "  ERROR.\n";
		}
	}
	George.close();
	Output.close();
	system("pause");
	return 0;
}

bool is_palindrome(const string& s)
{
	int first = 0;                        // index of first letter
	int last = s.length() - 1;      // index of last letter
	while (first < last) {             // we haven’t reached the middle
		if (s[first] != s[last]) {
			return false;}
		++first;                      // move forward
		--last;                        // move backward
	}
	return true;
}

