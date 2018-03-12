#include "stdafx.h"
#include "Date.h"

Date::Date(int m, int d, int y)
{
	setMonth(m);
	day = d;
	year = y;

}

void Date::setMonth(int m)
{
	if( m <= 1 && m <= 12){
		
		month = m;		
	
	}else{
		
		month = 1;		

	{

}

void Date::setDay(int d)
{
	
	day = d;

}

void Date::setYear(int y)
{

	year = y;
	
}

int Date::getMonth()
{
	
	return month;
}

int Date::getDay()
{

	return day;

}

int Date::getYear()
{

	return year;

}
