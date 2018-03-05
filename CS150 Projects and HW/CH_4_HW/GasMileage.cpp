#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	bool test = true;

	double milesDriven = 0;
	double gallonsUsed = 0;
	double mPG = 0;

	double totalMilesDriven = 0;
	double totalGallonsUsed = 0;
	double totalMPG = 0;

	while (milesDriven != -1) {

		cout << "Enter miles driven (Enter -1 to exit): " << endl;
		cin >> milesDriven;

		if (milesDriven != -1) {

			cout << "Enter gallons: " << endl;
			cin >> gallonsUsed;

			mPG = milesDriven / gallonsUsed;
			totalMilesDriven = milesDriven + totalMilesDriven;
			totalGallonsUsed = gallonsUsed + totalGallonsUsed;
			totalMPG = totalMilesDriven / totalGallonsUsed;

			cout << "MPG this trip: " << mPG << endl;
			cout << "Total MPG: " << totalMPG << endl;		

		}

		cout << endl;
		
	}

    return 0;
}

