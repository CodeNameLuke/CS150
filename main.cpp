#include "stdafx.h"
#include <iostream>
#include "Calculator.h"

using namespace std;


int main()
{

	int num1, num2, op;

	Calculator calc1;
	do {
		cout << "Enter two numbers: " << endl;
		cin >> num1;
		cin >> num2;
		cout << "Select Operation: " << endl;
		cout << "For MULTIPLY  press: 1" << endl;
		cout << "For ADD       press: 2" << endl;
		cout << "For SUBRTRACT press: 3" << endl;
		cout << "For DIVIDE    press: 4" << endl;
		cout << "Exit          press: 5" << endl;
		cin >> op;


		if (op == 1) {

			cout << calc1.multiply(num1, num2) << endl;

		}
		else if (op == 2) {

			cout << calc1.add(num1, num2) << endl;

		}
		else if (op == 3) {

			cout << calc1.subtract(num1, num2) << endl;

		}
		else if (op == 4) {

			cout << calc1.divide(num1, num2) << endl;

		}

	} while (op != 5 && op != getchar());



    return 0;
}
