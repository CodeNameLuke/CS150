#include "stdafx.h"
#include "iostream"
#include "iomanip"



double calculateCharge(double hours);

using namespace std;

int main() {

	double cost = calculateCharge(4.0);
	double hours1 = 0.0, hours2 = 0.0, hours3 = 0.0, totalHours = 0.0;
	double cost1 = 0.0, cost2 = 0.0, cost3 = 0.0, totalCost = 0.0;


	cout << "Enter Hour(s) For Car 1 : ";
	cin >> hours1;
	cout << "Enter Hour(s) For Car 2 : ";
	cin >> hours2;
	cout << "Enter Hour(s) For Car 3 : ";
	cin >> hours3;


	cost1 = calculateCharge(hours1);
	cost2 = calculateCharge(hours2);
	cost3 = calculateCharge(hours3);

	totalCost = cost1 + cost2 + cost3;
	totalHours = hours1 + hours2 + hours3;

	cout << fixed;
	cout << setprecision(2);
	cout << "Car     Hours       Charge" << endl;
	cout << " 1       " << hours1 << "        $" << cost1 << endl;
	cout << " 2       " << hours2 << "        $" << cost2 << endl;
	cout << " 3       " << hours3 << "        $" << cost3 << endl;
	cout << "TOTAL    " << totalHours << "       $" << totalCost << endl;

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
