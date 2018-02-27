#include "stdafx.h"
#include "Invoice.h"

Invoice::Invoice(string partNum, string partD, int number, int pPI)
{
	partNumber = partNum;
	partDescription = partD;
	quantity = number;
	pricePerItem = pPI;

}

void Invoice::setPartNumber(string partNum)
{

	partNumber = partNum;
	
}

void Invoice::setPartDescription(string partD)
{

	partDescription = partD;

}

void Invoice::setQuantity(int number)
{

	quantity = number;

}

void Invoice::setPricePerItem(int pPI)
{
	
	pricePerItem = pPI;

}

string Invoice::getPartNumber()
{
	
	return partNumber;

}

string Invoice::getPartDescription()
{
	
	return partDescription;

}

int Invoice::getInvoiceAmount()
{
	int invoiceAmount = 0;

	invoiceAmount = quantity * pricePerItem;

	return invoiceAmount;
}

int Invoice::getQuantity()
{
	
	return quantity;

}

int Invoice::getPricePerItem()
{
	
	return pricePerItem;

}
