//student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "date.h"
#include "address.h"

class Student
{
	private:
		std::string firstname;
		std::string lastname;
		Address address;
		Date dob;
		Date graduation;
		float gpa;
		int credits;
	
	public:
	
		//constructors
	
		Student();
        Student(std::string firstname, std::string lastname, Address address, Date dob, Date graduation, float gpa, int credits);
	
		//getters
		std::string getFirst();
		std::string getLast();
		Address getAddress();
		Date getDOB();
		Date getGraduation();
		float getGPA();
		int getCredits();
		
		//setters
		void setFirst(std::string firstname);
		void setLast(std::string lastname);
		void setAddress(Address address);
		void setDOB(Date dob);
		void setGraduation(Date graduation);
		void setGPA(float gpa);
		void setCredits(int credits);
		
	
};

#endif //STUDENT_H