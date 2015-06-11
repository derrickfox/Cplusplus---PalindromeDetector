/*
Derrick Fox
CS 226
April 22, 2014
Inventory Reporter
*/

#include <iostream>
#ifndef INVENTORY_H
#define INVENTORY_H
using namespace std;

// Create a user defined class named "Inventory".
class Inventory {

	// Define class variables which have private access exclusive only to members of this class. 
	private:
		int itemNumber;
		int quantity;
		double cost;
		double totalCost;

	// Define class functions publically available to other classes including the main function.
	public:
		
		Inventory();
		Inventory(int, double, int);
		void setItemNumber(int);
		void setQuantity(int);
		void setCost(double);
		void setTotalCost();
		int getItemNumber();
		int getQuantity();
		double getCost();
		double getTotalCost();
};
#endif