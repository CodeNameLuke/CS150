#include "stdafx.h"
#include "iostream"

using namespace std;

long long factorial(int number);


int main() {

	for (int i = 1; i <= 20; i++) {

		cout << i << "! = " << factorial(i) << endl;

	}
	
}


long long factorial(int number) {

	int counter = 1;
	long long value = number;

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
