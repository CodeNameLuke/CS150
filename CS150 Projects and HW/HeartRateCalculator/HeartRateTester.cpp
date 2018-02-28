#include "stdafx.h"
#include <time.h>
#include <iostream>
#include<sstream>
#include "HeartRates.h"

using namespace std;

int main() {


	


	HeartRates hr1("Lucas", "Silva", "03-16-1996");

	cout << "Name: " << hr1.getFirstName() << " " << hr1.getLastName() << endl;
	cout << "Date Of Birth: " << hr1.getDOB() << endl;
	cout << "Current Age: " << hr1.getAge() << endl;
	cout << "Maximum Heart Rate: " << hr1.getMaxHeartRate() << endl;
	cout << "Your target Heart Rate is: " << hr1.printTargetHeartRate() << endl;






	return 0;


}
