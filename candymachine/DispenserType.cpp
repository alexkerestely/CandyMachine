#include "DispenserType.h"

int DispenserType::getNoOfItems() const
{
	return numberOfItems;
}

int DispenserType::getCost() const
{
	return cost;
}

void DispenserType::makeSale()
{
	numberOfItems--;
}

DispenserType::DispenserType(int setNoOfItems, int setCost)
{
	if (setNoOfItems >= 0)
		numberOfItems = setNoOfItems;
	else
		numberOfItems = 50;

	if (setCost >= 0)
		cost = setCost;
	else
		cost = 50;
}