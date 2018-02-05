/**

Write a program that asks the user to enter two numbers, obtains the two 
numbers from the user and prints the sum, product, difference, and quotient of the two numbers

**/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {

	int x, y;

	cout << "Enter two integers: " << endl;

	cin >> x >> y;

	int sum = x + y;
	int product = x * y;
	double quotient = x / y;
	int difference = x - y;

	cout << "Product : " << product << " \nSum : " 
		<< sum << " \nQuotient : " << quotient << " \nDifference : " 
		<< difference << endl;


}
