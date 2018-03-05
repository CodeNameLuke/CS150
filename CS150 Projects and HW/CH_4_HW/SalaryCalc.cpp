#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	double numberOfHours = 0;
	double hourlyRate = 0;
	double salary = 0;

	while (numberOfHours != -1) {

		cout << "Enter number of hours worked (-1 to exit): " << endl;
		cin >> numberOfHours;

		if (numberOfHours != -1) {
			
			cout << "Enter hourly rate of the employee ($00.00): " << endl;
			cin >> hourlyRate;

			if (numberOfHours <= 40.0) {

				salary = numberOfHours * hourlyRate;

			}
			else {

				hourlyRate = hourlyRate + (hourlyRate / 2);

				salary = numberOfHours * hourlyRate;

			}

			cout << "Salary = $" << salary << endl;

		}

	}
	
    return 0;
}

