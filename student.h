//student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/*
#include "date.h"
#include "address.h"
*/

using namespace std;

class Student
{
	private:
		string firstname;
		string lastname;
		Address address;
		Date dob;
		Date graduation;
		float gpa;
		int credits;
	
	public:
    
        Student();
        Student(string first, string last, Address address, Date dob, Date grad, string gpa, string credits);
	
		//getters
		string getFirst();
		string getLast();
		Address getAddress();
		Date getDOB();
		Date getGraduation();
		float getGPA();
		int getCredits();
		
		//setters
		void setFirst(string firstname);
		void setLast(string lastname);
		void setAddress(Address address);
		void setDOB(Date dob);
		void setGraduation(Date graduation);
		void setGPA(float gpa);
		void setCredits(int credits);
		
	
};

#endif //STUDENT_H