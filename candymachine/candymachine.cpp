// candymachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program uses the class cashRegister and dispenserType to implement a candy machine

#include <iostream>
#include "DispenserType.h"
#include "CashRegister.h"

using namespace std;

void showSelection();
void sellProduct(DispenserType& product, CashRegister& pCounter);

int main()
{  
    CashRegister counter;
    DispenserType candy(100, 50);
    DispenserType chips(100, 65);
    DispenserType gum(75, 45);
    DispenserType cookies(100, 85);

    int choice; //variable to hold the selection

    showSelection();
    cin >> choice;

    while (choice != 9)
    {
        switch (choice)

        {
        case 1:
            sellProduct(candy, counter);
            break;
        case 2:
            sellProduct(chips, counter);
            break;
        case 3:
            sellProduct(gum, counter);
            break;
        case 4:
            sellProduct(cookies, counter);
            break;
        default:
            cout << "Invalid selection" << endl;
        }
        showSelection();
        cin >> choice;
    }
    return 0;
}

void showSelection()
{
    cout << "Welcome to the Candy Shop!"<<endl;
    cout << "Select an item by entering its corresponding number: " << endl;
    cout << "1. Candy"<<endl;
    cout << "2. Chips"<<endl;
    cout << "3. Gum"<<endl;
    cout << "4. Cookies"<<endl;
    cout << "To exit, press 9" << endl;
}

void sellProduct(DispenserType& product, CashRegister& pCounter)
{
    int amount; //variable to hold the amount entered;
    int amount2; //variable to hold the difference of amount needed - if case;
    int amount3;

    if (product.getNoOfItems() > 0)
    {
        cout << "Please enter " << product.getCost() << " cents!" << endl;
        cin >> amount;

        if (amount < product.getCost())
        {
            cout << "You need to insert " << product.getCost() - amount << " cents more";
            cin >> amount2;

            amount = amount + amount2;
        }

        if (amount == product.getCost())
        {
            pCounter.acceptAmount(amount);
            product.makeSale();
            cout << "Collect your item at the bottom and enjoy!" << endl;
        }
        else
         if (amount > product.getCost())
        {   amount3= amount- product.getCost();
            pCounter.acceptAmount(product.getCost());
            product.makeSale();
            cout << "Collect your item at the bottom and "<<amount3<<" cents and enjoy!" << endl;
        }
         else
            cout << "The amount is not enough. Collect what you deposited"<<endl;

        cout << "--------------------------------------------------------" << endl << endl;

    }
    else
        cout << "Sorry, the item is sold out";

}

