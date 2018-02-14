// Gradebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gradebook.h"
#include <iostream>

using namespace std;


Gradebook::Gradebook(std::string name)
{
	setCourseName(name);
	displayMessage();

}

void Gradebook::setCourseName(std::string name)
{	

	//Names can be at most 25 characters long. 

	if (name.size() <= 25) {

		courseName = name;

	}
	else {

		//Selects first 25 characters
		courseName = name.substr(0, 25);
		cerr << "Name \"" << name << "\" exceeds maximum length (25). \n"
			 << "Limiting courseName to first 25 characters. \n" << endl;

	}


}

std::string Gradebook::getCourseName() const
{
	
	return courseName;

}

void Gradebook::displayMessage() const
{
	
	cout << "Welcome to the grade book for: \n>>" << getCourseName() << "<<" << endl;

}

void Gradebook::calcClassAverage() const
{
	int total = 0;
	int gradeCounter = 0;
	int numberOfGrades;

	cout << "Enter Number Of Grades: \n" << ">";
	cin >> numberOfGrades;

	while (gradeCounter < numberOfGrades) {

		cout << "Enter Number Grade: " << ">";
		
		int grade = 0;
		string check = "";
		cin >> grade;
		
		check = to_string(grade);

		if (check.size() > 2) {

			
			cerr << "ERROR: Grade Not Accepted. Enter A 2-Bit Integer" << endl;

		}
		else {

			grade = atoi(check.c_str());

			total = total + grade;
			gradeCounter++;


		}




	}

	double average = total / numberOfGrades;

	cout << "CLASS AVERAGE: " << average << endl;

	

}
