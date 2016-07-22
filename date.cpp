//date.cpp

#include <iostream>

#include "date.h"

using namespace std;

Date::Date(int month, int day, int year)
{
    setMonth(month);
    setDay(day);
    setYear(year);
}

//getters

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


//setters

void Date::setMonth(int month)
{
	Date::month = month;
}

void Date::setDay(int day)
{
	Date::day = day;
}

void Date::setYear(int year)
{
	Date::year = year;
}
