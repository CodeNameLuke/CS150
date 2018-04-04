#include "stdafx.h"
#include "iostream"

using namespace std;


int main() {

	int numbersToCheck = 0 , check = 0, counter = 1 , smallest = 0;


	cout << "How many values do you want to check?" << endl;
	cin >> numbersToCheck;

	cout << "Enter " << numbersToCheck << " Numbers: " << endl;

	cout << "1:";
	cin >> check;
	smallest = check;


	while (counter < numbersToCheck) {
		
		
		for (int i = 2; i < numbersToCheck + 1; i++) {

			cout << i << ":";
			cin >> check; 

			if (check < smallest) {

				smallest = check;

			}

			counter++;

			}
	
	}

	cout << "Smallest: " << smallest << endl;

}
