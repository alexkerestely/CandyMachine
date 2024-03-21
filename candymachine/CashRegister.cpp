#include <iostream>
#include "CashRegister.h"

using namespace std;

int CashRegister::getCurrentBalance() const
{
	return cashOnHand;
}

void CashRegister::acceptAmount(int amountIn)
{
	cashOnHand = cashOnHand + amountIn;
}

CashRegister::CashRegister(int cashIn)
{
	if (cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}
