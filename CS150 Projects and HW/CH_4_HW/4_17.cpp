//Program takes 10 integers from the user and displays largest integer.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int largest = 0, input = 0, counter = 0;
	

	cout << "Enter 10 integers: " << endl;

	while (counter < 10) {

		cout << counter + 1 << ":";

		cin >> input;
		
		if (input > largest) {

			largest = input;


		}
	
		counter++;

	}


	cout << "The Largest Number That you entered was: " << largest << endl;





    return 0;
}

