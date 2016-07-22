//student.cpp

#include <iostream>

#include "student.h"
#include "address.h"
#include "date.h"

using namespace std;

Student::Student(string first, string last, Address address, Date dob, Date grad, float gpa, int credits)
{
    setFirst(first);
    setLast(last);
    setAddress(address);
    setDOB(dob);
    setGrad(grad);
    setGPA(gpa);
    setCredits(credits);
}

//getters

string Student::getFirst()
{
	return first;
}

string Student::getLast()
{
	return last;
}

Address Student::getAddress()
{
	return address;
}

Date Student::getDOB()
{
	return dob;
}

Date Student::getGrad()
{
	return grad;
}

float Student::getGPA()
{
	return gpa;
}

int Student::getCredits()
{
	return credits;
}

//setters

void Student::setFirst(string first)
{
	Student::firstname = first;
}

void Student::setLast(string last)
{
	Student::lastname = lastname;
}

void Student::setAddress(Address address)
{
	Student::address = address;
}

void Student::setDOB(Date dob)
{
	Student::dob = dob;
}

void Student::setGrad(Date grad)
{
	Student::grad = grad;
}

void Student::setGPA(float gpa)
{
	Student::gpa = gpa;
}

void Student::setCredits(int credits)
{
	Student::credits = credits;
}
