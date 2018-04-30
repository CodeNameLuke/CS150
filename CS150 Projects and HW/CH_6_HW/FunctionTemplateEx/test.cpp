//Showing power of a function template for function overloading.

#include "stdafx.h"
#include "maximum.h"
#include <array>
#include <iostream>


using namespace std;


int main()
{

	double t1 = 7.5, t2 = 6.5, t3 = 66.5;
	int x1 = 1, x2 = 20, x3 = 2;


	cout << maximum(t1, t2, t3) << endl;

	cout << maximum(x1, x2, x3) << endl;



    return 0;
}

