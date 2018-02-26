#pragma once

class Date {
public:

	Date(int m, int d, int y);
	
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);

	int getMonth();
	int getDay();
	int getYear();



private:
	
	int month;
	int day;
	int year;
};
