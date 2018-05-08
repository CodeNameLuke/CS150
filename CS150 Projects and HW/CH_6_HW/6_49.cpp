// Practice.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>



using namespace std;

constexpr auto M_PI = 3.14159265358979323846;

double circleArea(double);



int main()
{
	double radius = 0;

	cout << "Enter radius of circle to calculate the area: ";
	cin >> radius;

	cout << "AREA = " << circleArea(radius) << endl;



	return 0;
}

double circleArea(double radius) {

	return ((radius * radius) * M_PI);


}
