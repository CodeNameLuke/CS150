//Program takes a 5 digit integer from user and determines if it is a palidrone.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int input = 00000;

	int a, b, c, d, e;

	

	cout << "Enter a 5 digit integer to check if palidrone (Enter -1 to exit) :\n";

	
	while (input != -1) {

		cout << "XXXXX\r";

		cin >> input;


		if (input != -1) {

			a = input / 10000;
			input = input % 10000;

			b = input / 1000;
			input = input % 1000;

			c = input / 100;
			input = input % 100;

			d = input / 10;
			input = input % 10;

			e = input;

			if (a == e && b == d) {

				cout << "This is a palidrone." << endl;

			}
			else {

				cout << "This is not a palidrone." << endl;

			}

		}

	}

    return 0;
}

