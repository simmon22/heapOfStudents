//address.cpp

#include <iostream>

using namespace std;

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
