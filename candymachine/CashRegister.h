#pragma once
//this class specifies the members to implement a register
class CashRegister
{
public:

	int getCurrentBalance() const;
	//shows the amount of money in the register
	//returns the value of cashOnHand;

	void acceptAmount(int amountIn);
	//accepts the amount of money introduced
	//and adds it to the existent amount of cash 
	//cashOnHand= cashOnHand + amountIn

	CashRegister(int cashIn = 500);
	//constructor
	//it sets the amount of money if no value is specified for cashIn
	//cashOnHand=cashIn

private:

	int cashOnHand; //variable for cash in the register

};

