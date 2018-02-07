/*

(Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
into its digits and prints them separated by three spaces each.

*/

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;


int main()
{
	
	int digits, a, b, c, d, e;


	cout << "Enter a 5 digit integer: " << endl << "> ";

	cin >> digits;

	// Ten Thousands Place
	a = digits / 10000;
	digits = digits % 10000;

	// Thousands PLace
	b = digits / 1000;
	digits = digits % 1000;

	// Hundreds Place
	c = digits / 100;
	digits = digits % 100;

	// Tens
	d = digits / 10;
	digits = digits % 10;

	// Ones
	e = digits;

	// Prints each individual digit seperated by three spaces.
	cout << a << "   " << b << "   " << c << "   " << d << "   " << e << endl;



    return 0;



}
