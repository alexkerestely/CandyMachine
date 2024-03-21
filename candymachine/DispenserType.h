#pragma once
//This class specifies the members to implement a dispenser
class DispenserType
{
public:

	int getNoOfItems() const;
	//returns the number of a specific item (numberOfItems)

	int getCost() const;
	//returns the cost of an item (cost)

	void makeSale();
	//function to reduce the number of items by 1
	//numberOfItems--;

	DispenserType(int setNoOfItems = 50, int setCost = 50);
	//constructor
	//sets the number of items and the cost of items if no value is specified for the object

private:

	int cost; //the cost of item
	int numberOfItems; //the quantity of items

};