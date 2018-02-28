#pragma once
#include "stdafx.h"
#include "string"
#include <time.h>

using namespace std;


class HeartRates {


public:

	//dOB format is xx-xx-xxxx
	
	HeartRates(string fName, string lName, string dOB) {

		firstName = fName;
		lastName = lName;
		dateOfBirth = dOB;

	}

	int getMaxHeartRate() {

		int max = 220 - age;

		return max;

	}

	string printTargetHeartRate() {

		int target1 , target2;

		target1 = getMaxHeartRate() * 50 / 100;
		target2 = getMaxHeartRate() * 85 / 100;



		return to_string(target1) + "-" + to_string(target2);

		
	}



	int getAge() {

		time_t theTime = time(NULL);
		struct tm *aTime = localtime(&theTime);

		currentDay = aTime->tm_mday;
		currentMonth = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
		currentYear = aTime->tm_year + 1900; // Year is # years since 1900

		string DOB = getDOB();

		month = stoi(DOB.substr(0, 2));
		day = stoi(DOB.substr(3, 2));
		year = stoi(DOB.substr(6, 4));

		
		age = currentYear - year;


		int month_dif = currentMonth - month;
		int day_dif = currentDay - day;


		if (month_dif <= 0 || (month_dif == 0 && day_dif <= 0)) {

			age = currentYear - year - 1;
		}
		else {
			
			age = currentYear - year;

		}
		
		
		return age;


	}


	void setFirstName(string fName) {

		firstName = fName;

	}

	void setLastName(string lName) {

		lastName = lName;

	}

	void setDOB(string dOB) {

		dateOfBirth = dOB;

	}

	string getFirstName() {

		return firstName;
	}

	string getLastName() {

		return lastName;
	}

	string getDOB() {

		return dateOfBirth;

	}


private:

	string firstName;
	string lastName;
	string dateOfBirth;
	int age;
	int month;
	int day;
	int year;

	int currentMonth;
	int currentDay;
	int currentYear;



};
