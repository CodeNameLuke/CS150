// Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

string multiple(int, int);


int main()
{
	string result = "";


	result = multiple(9, 3);


	
	cout << result << endl;




    return 0;
}

string multiple(int number, int multiple) {
	
	string result = "";

	if ((number % multiple) == 0) {

		result = "TRUE";
		return result;

	}
	else {

		result = "FALSE";
		return result;


	}
}
