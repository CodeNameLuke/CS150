// Account.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "iostream"

using namespace std;



Account::Account(string name) {

	accountName = name;
	accountBalance = 0;


}

Account::Account(string name, int initialBalance)
{
	accountName = name;
	accountBalance = initialBalance;
	
}


string Account::getName() const 
{

	return accountName;

}

void Account::setName(string name)
{

	name = accountName;

}

int Account::getAccountBalance() const
{
	
	return accountBalance;

}

void Account::setAccountBalance(int balance)
{
	
	balance = accountBalance;

}


void Account::deposit(int amount) 
{

	if (amount > 0) {

		accountBalance = amount + accountBalance;

	}
	else {

		cerr << "You Can Only Deposit An Amount Greater Than 0";

	}
}
