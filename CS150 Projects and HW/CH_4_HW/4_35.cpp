//Creating a program that calculates factorials to estimate value of e and e^x.

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

double factorial(int number);


int main()
{
	int num;

	//Part A
	cout << "Enter A Number To Find Factorial: ";
	cin >> num;
	cout << num << "! = "<< factorial(num) << endl;

	//Part B
	//Estimation of e to 'some' number accuracy.

	int numOfSums = 0;
	double e = 1;

	cout << "Enter Number Of Sums For Estimation Of 'e' " << endl;
	cin >> numOfSums;

	for (int i = 0; i < numOfSums; i++) {

		e = e + (1 / factorial(i + 1));

	}

	cout << "e = " << e << endl;

	//Part C





    return 0;
}



double factorial(int number) {

	int counter = 1, value = number;

	if (number == 0) {

		return 1;

	}
	else {

		while (counter < number) {

			value = value * (number - counter);
			counter++;

		}

		return value;

	}

}
