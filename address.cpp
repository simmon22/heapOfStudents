//address.cpp

#include <iostream>

#include "address.h"

using namespace std;

Address::Address(string line1, string line2, string city, string state, int zip)
{
    setLine1(line1);
    setLine2(line2);
    setCity(city);
    setState(state);
    setZip(zip);
}

//getters

string Address::getLine1()
{
	return line1;
}

string Address::getLine2()
{
	return line2;
}

string Address::getCity()
{
	return city;
}

string Address::getState()
{
	return state;
}

int Address::getZip()
{
	return zip;
}

//setters

void Address::setLine1(string line1)
{
	Address::line1 = line1;
}

void Address::setLine2(string line2)
{
	Address::line2 = line2;
}

void Address::setCity(string city)
{
	Address::city = city;
}

void Address::setState(string state)
{
	Address::state = state;
}

void Address::setZip(int zip)
{
	Address::zip = zip;
}
