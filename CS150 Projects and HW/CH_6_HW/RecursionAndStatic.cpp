//Showing power of a function template for function overloading.

#include "stdafx.h"
#include "maximum.h"
#include <array>
#include <iostream>

int factorial(int n);
int fibonacci(int x);
void foo();
void foo1();


using namespace std;


int main()
{
	foo();
	foo();
	foo();

	foo1();
	foo1();
	foo1();


    return 0;
}



int factorial(int n) {

	if (n == 1) {

		return 1;

	}
	else {

		return n * factorial(n - 1);

	}
	

}

int fibonacci(int x) {


	if (x == 0 || x == 1) {

		return x;

	}
	else {

		return fibonacci(x - 1) + fibonacci(x - 2);


	}
}

void foo() {

	static int x = 0;
	cout << x << endl;

	x++;



}

void foo1() {

	int x = 0;
	cout << x << endl;

	x++;
}

