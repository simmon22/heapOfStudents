//main.cpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

#include "student.h"
#include "date.h"
#include "address.h"

void printMenu();
void fullReport();
void shortReport();
void alphaReport();

using namespace std;

int main()
{
	printMenu();
	
	return 0;
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
	
	switch input
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
			return 0;
		default:
			cout << "invalid input.." << endl;
			printMenu();
			break;
	}
}

void fullReport()
{
	
}

void shortReport()
{
	
}

void alphaReport()
{
	
}




