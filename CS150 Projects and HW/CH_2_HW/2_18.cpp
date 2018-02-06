/**

Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words "is larger." If the
numbers are equal, print the message "These numbers are equal."


**/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>


using namespace std;

int main() {

	int x = 0;
	int y = 0;


	cout << "Enter two integers: " << endl;
	cin >> x;
	cin >> y;

	if (x == y ) {

		cout << "These numbers are equal." << endl;
	
	}
	else if (x != y) 
	{
		cout << "These numbers are not equal" << endl;

	}


	return 0;
}
