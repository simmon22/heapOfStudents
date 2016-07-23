//main.cpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

#include "student.h"
#include "date.h"
#include "address.h"

void importData();
void printMenu();
void fullReport();
void shortReport();
void alphaReport();

using namespace std;

int main()
{
	importData();
	
	printMenu();
	
	return 0;
}

void importData()
{
	ifstream File;
	int i;
	//Surname,GivenName,StreetAddress,Address 2,City,State,ZipCode,Birthday,Graduation,GPA,Credit Hours Complete
	string last, first, line1, line2, city, state, z, bday, bmonth, byear, gday, gmonth, gyear, gpa, credits; //15 data points
	//string buffer;
	//istringstream iss(buffer);
	
	File.open("students.dat");
	if(File.is_open())
	{/*
		Student *students = new Student[50];
		Address *address = new Address;
		Date *dob = new Date;
		Date *grad = new Date;
		
        for(i = 0; i < 50; i++)
		{
			getline(File, last, ',');
            getline(File, first, ',');
			
			//address
			getline(File, line1, ',');
            getline(File, line2, ',');
            getline(File, city, ',');
            getline(File, state, ',');
            getline(File, z, ',');
			int zip = atoi(z.c_str());
			Address address = Address(line1, line2, city, state, zip);
			
			//birth date
			getline(File, bmonth, '/');
            getline(File, bday, '/');
            getline(File, byear, ',');
			int bmonth1 = atoi(bmonth.c_str());
            int bday1 = atoi(bday.c_str());
            int byear1 = atoi(byear.c_str());
			Date dob = Date(bmonth1, bday1, byear1);
			
			//grad date
			getline(File, gmonth, '/');
            getline(File, gday, '/');
            getline(File, gyear, ',');
            int gmonth1 = atoi(gmonth.c_str());
            int gday1 = atoi(gday.c_str());
            int gyear1 = atoi(gyear.c_str());
            Date grad = Date(gmonth1, gday1, gyear1);
			
			getline(File, gpa, ',');
			float gpa1 = atof(gpa.c_str());
            getline(File, credits);
			int credits1 = atoi(credits.c_str());
			
			Student students[i] = Student(last, first, address, dob, grad, gpa1, credits1);
			
			break;
		}
		
		//cout << last << "," << first << address << "," << dob << "," << grad << "," << gpa1 << "," << credits1 << endl;
		
		delete [] students;
		delete address;
		delete dob;
		delete grad;*/
		File.close();
	}
	else
	{
		cout << "error opening file! be sure 'students.dat' is in the directory!" << endl;
		EXIT_FAILURE;
	}
}

void printMenu()
{
	string input = "";
	
	cout << "\n(1) Create Full Report" << endl;
	cout << "(2) Create Short Report" << endl;
	cout << "(3) Create Alphabetized Report" << endl;
	cout << "\n(0) Exit\n" << endl;
	cout << ">>: ";
	cin >> input;
	
	if(input == "1")
		fullReport();
	else if(input == "2")
		shortReport();
	else if(input == "3")
		alphaReport();
	else if(input == "0")
	{
		cout << "bye bye!" << endl;
		EXIT_SUCCESS;
	}
	else 
	{
		cout << "invalid input.." << endl;
		printMenu();
	}
}

void fullReport()
{
	cout << "full report" << endl;
	EXIT_SUCCESS;
}

void shortReport()
{
	cout << "short report" << endl;
	EXIT_SUCCESS;
}

void alphaReport()
{
	cout << "alpha report" << endl;
	EXIT_SUCCESS;
}




