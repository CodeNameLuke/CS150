// FinalExam.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "iostream"
using namespace std;

int fibonacci(int);



int main()
{

	for (size_t i = 0; i <= 10; i++) {


		cout << "Fibonacci(" << i << "): " << fibonacci(i) << endl;


	}


    return 0;
}



int fibonacci(int n) {

	if (n == 0) {

		return 0;

	}
	else if (n == 1) {

		return 1;

	}
	else {

		int current = 1;
		int prev = 1;

		for (size_t i = 2; i < n; i++) {
			
			int temp = current;
			current = prev + current;
			prev = temp;

		}

		return current;

	}
	



}

