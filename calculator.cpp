#include "stdafx.h"
#include "Calculator.h"
#include <iostream>
#include <stdlib.h>




Calculator::Calculator()
{

	std::cout << "Welcome To Your Calculator" << std::endl;



}

int Calculator::add(int a, int b) {

	sum = a + b;

	return sum;

}

int Calculator::subtract(int a, int b) {

	sum = a - b;

	return sum;

}

int Calculator :: multiply(int a, int b) {

	sum = a * b;

	return sum;

}

double Calculator::divide(double a, double b) {

	dsum = a / b;

	return dsum;


}

void Calculator::clear() {

	sum = 0;


}

