//student.cpp

#include <iostream>

using namespace std;

//getters

string Student::getFirst()
{
	return firstname;
}

string Student::getLast()
{
	return lastname;
}

Address Student::getAddress()
{
	return address;
}

Date Student::getDOB()
{
	return dob;
}

Date Student::getGraduation()
{
	return graduation;
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

void Student::setFirst(string firstname)
{
	Student::firstname = firstname;
}

void Student::setLast(string lastname)
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

void Student::setGraduation(Date graduation)
{
	Student::graduation = graduation;
}

void Student::setGPA(float gpa)
{
	Student::gpa = gpa;
}

void Student::setCredits(int credits)
{
	Student::credits = credits;
}