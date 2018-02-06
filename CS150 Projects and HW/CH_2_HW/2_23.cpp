/**

Write a program that reads in five integers and determines
and prints the largest and the smallest integers in the group.


**/


#include "stdafx.h"
#include <iostream>
#include <string>



using namespace std;

int main() {

	int smallest, largest, a, b, c, d, e;

	cout << "Enter 5 integers: " << endl;
	cin >> a >> b >> c >> d >> e;

	smallest = a;
	largest = a;

	if (b < smallest) {

		smallest = b;

	}

	if (c < smallest) {

		smallest = c;


	}

	if (d < smallest) {

		smallest = d;

	}

	if (e < smallest) {

		smallest = e;

	}


	if (b > largest) {

		largest = b;

	}

	if (c > largest) {

		largest = c;


	}

	if (d > largest) {

		largest = d;

	}

	if (e > largest) {

		largest = e;

	}

	cout << "Largest : " << largest << endl;
	cout << "Smallest : " << smallest << endl;


	return 0;
}
