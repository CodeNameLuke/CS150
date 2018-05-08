// Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int gcd(int, int);


int main()
{
	int x = 80, y = 30;


	cout << "GCD OF " << x << " & " << y << " = " << gcd(x, y) << endl;

    return 0;
}

int gcd(int x, int y) {


	if (y == 0) {

		return x;

	}
	else {

		gcd(y, (x % y));

	}


}
