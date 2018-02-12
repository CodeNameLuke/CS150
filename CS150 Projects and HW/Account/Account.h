#pragma once

#include "stdafx.h"
#include "string"


using namespace std;

class Account {
	
public:
	
	//Constructors
	explicit Account(string name);
	explicit Account(string name, int intialBalance);

	
	// Setters
	void setName(string name);
	void deposit(int amount);
	void setAccountBalance(int balance);
	
	// Getters
	string getName() const;
	int getAccountBalance() const;


private:

	string accountName;
	int accountBalance;


};
