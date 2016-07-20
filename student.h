//student.h

#ifndef STUDENT_H
#define STUDENT_H

#include "date.h"
#include "address.h"

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
    		
    		void getLast();
        	void getFirst();
        	void getAddress()
        	void getDob();
        	void getGrad();
        	void getGpa();
        	void getCredits();
    
        	void setLast();
        	void setFirst();
        	void setAddress()
        	void setDob();
        	void setGrad();
        	void setGpa();
        	void setCredits();
	
	
};

#endif //STUDENT_H
