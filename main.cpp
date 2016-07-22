//main.cpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>


#include "date.h"
#include "address.h"
#include "student.h"

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
    
    //delete [] myStudents;
	
	return 0;
}

void importData()
{
	ifstream File;
	
	File.open("students.dat");
	if(File.is_open())
	{
		Student *myStudents = new Student[50];
		
        string theline;
        
        while (getline(File, theline))
            
            int i=0;
            
        string last, first, line1, line2, city, state, z, bday, bmonth, byear, gday, gmonth, gyear, gpa, credits;
        
            istringstream thestringy (theline);
        
            getline(thestringy, last, ',');
            getline(thestringy, first, ',');
        
        
            getline(thestringy, line1, ',');
            getline(thestringy, line2, ',');
            getline(thestringy, city, ',');
            getline(thestringy, state, ',');
            getline(thestringy, z, ',');
        
            int zip = atoi(z.c_str());
        
            Address::Address address = Address(line1, line2, city, state, zip);
        
        
        
            getline(thestringy, bday, '/');
            getline(thestringy, bmonth, '/');
            getline(thestringy, byear, ',');
        
            int bday1 = atoi(bday.c_str());
            int bmonth1 = atoi(bmonth.c_str());
            int byear1 = atoi(byear.c_str());
        
            Date::Date dob = Date(bmonth1, bday1, byear1);
        
            getline(thestringy, gday, '/');
            getline(thestringy, gmonth, '/');
            getline(thestringy, gyear, ',');
        
            int gday1 = atoi(gday.c_str());
            int gmonth1 = atoi(gmonth.c_str());
            int gyear1 = atoi(gyear.c_str());
        
            Date::Date grad = Date(gmonth1, gday1, gyear1);

        
            getline(thestringy, gpa, ',');
            getline(thestringy, credits, ',');
        
        Student::Student student = Student(first, last, address, dob, grad, gpa, credits);
		
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
	int input = 99;
	
	cout << "(1) Create Full Report" << endl;
	cout << "(2) Create Short Report" << endl;
	cout << "(3) Create Alphabetized Report" << endl;
	cout << "\n(0) Exit\n" << endl;
	cout << ">>: " << endl;
	cin >> input;
	
	switch (input)
	{
		case 1:
			fullReport();
			break;
		case 2:
			shortReport();
			break;
		case 3:
			alphaReport();
			break;
		case 0:
			EXIT_SUCCESS;
		default:
			cout << "invalid input.." << endl;
			printMenu();
			break;
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




