#include "stdafx.h"
#include "iostream"
#include "iomanip"



double calculateCharge(double hours);

using namespace std;

int main() {

	double totalCost = calculateCharge(4.0);

	cout << "Total Cost: " << fixed << setprecision(2) <<  totalCost << endl;


}

double calculateCharge(double t) {

	double hours = t;
	double totalCost = 0.0;

	

	if (hours >= 24.0) {

		totalCost = 10.0;

	}
	else {

		hours -= 3.0;
		totalCost += 2.00;

		while (hours > 0.0) {

			hours -= 1.0;
			totalCost += .50;


		}

	}

	return totalCost;


}
