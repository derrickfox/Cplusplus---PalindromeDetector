/* 
Derrick Fox
CS 226
April 22, 2014
Inventory Reporter
*/

#include <iostream>
// Include the class file for the user defined Inventory class.
#include "Inventory.h"
using namespace std;


// Define a default constructor.
Inventory::Inventory() {
	itemNumber = 0;
	quantity = 0;
	cost = 0;
	totalCost = 0;
}

// Define an overloaded contructor that accepts user input to construct the Inventory object. 
Inventory::Inventory(int itemNum, double c, int quant) {
	itemNumber = itemNum;
	cost = c;
	quantity = quant;
	setTotalCost();
}

// Function to set the number of items in inventory.
void Inventory::setItemNumber(int number) {
	itemNumber = number;
}

// Function to set the number of items ordered by the customer.
void Inventory::setQuantity(int quant) {
	quantity = quant;
}

// Function to set the cost of the item.
void Inventory::setCost(double c) {
	cost = c;
}

// Function to set total cost of the order.
void Inventory::setTotalCost() {
	totalCost = quantity * cost;
}

// Function to report to another function the item's inventory number.
int Inventory::getItemNumber() {
	return itemNumber;
}

// Function to report to another function the quantity of the item.
int Inventory::getQuantity() {
	return quantity;
}

// Function to report to another function the cost of the item.
double Inventory::getCost() {
	return cost;
}

// Function to report to another function the total cost of the order.
double Inventory::getTotalCost() {
	return totalCost;
}
