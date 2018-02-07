/*

(Table)Using the techniques of this chapter, write a program that calculates the squares and
cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values

*/

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

	cout << "INTEGER " << " SQUARE " << "    CUBE " << endl;


	for (int i = 0; i < 11; i++) {


		cout << left;


		cout << setw(10) << i << setw(12) << pow(i, 2) << pow(i, 3) << endl;


	}




    return 0;
}

