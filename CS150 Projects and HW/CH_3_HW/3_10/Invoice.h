#pragma once

#include <string>

using namespace std;

class Invoice {

public:

	Invoice(string partNum, string partD, int number, int pPI);
	
	void setPartNumber(string partNum);
	void setPartDescription(string partD);
	void setQuantity(int number);
	void setPricePerItem(int pPI);


	string getPartNumber();
	string getPartDescription();
	int getInvoiceAmount();
	int getQuantity();
	int getPricePerItem();



private:

	string partNumber;
	string partDescription;
	int quantity;
	int pricePerItem;


};
